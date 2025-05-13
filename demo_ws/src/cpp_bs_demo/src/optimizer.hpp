#ifndef OPTIMIZER_HPP
#define OPTIMIZER_HPP

#include <cassert>
#include <iostream>
#include <cstring>
#include <cmath>
#include <limits>
#include <memory>
#include <vector>
#include <Eigen/Dense>
#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/path.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "lbfgs.hpp"
#include "spline.hpp"

class TrajOptimizer {
public:
    std::shared_ptr<Bspline> trajectory_;
    rclcpp::Node::SharedPtr nh_;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
    double max_acc_ = 0.6;
    double max_vel_ = 0.3;
    double omg_max_ = 0.6;
    double alpha_max_ = 1.2;

    double safe_threshold_ = 0.073;
    double resolution_ = 0.2;
    int threads_num_ = 16;

    bool exit_ = false;
    bool pause_ = true;
    bool next_step_ = false;
    double* x_ptr;

public:
    // trajectory optimizer class
    explicit TrajOptimizer(const rclcpp::Node::SharedPtr& nh);
    ~TrajOptimizer() {}

    // optimizer functions
    int optimize_lbfgs();
    static double evaluate(void *ptr, const Eigen::VectorXd &x, Eigen::VectorXd &g);
    static int progress(void *ptr,
        const Eigen::VectorXd &x,
        const Eigen::VectorXd &g,
        const double fx,
        const double step,
        const int k,
        const int ls);
};

inline TrajOptimizer::TrajOptimizer(const rclcpp::Node::SharedPtr& nh)
    : nh_(nh)
{
    trajectory_ = std::make_shared<Bspline>();
    path_pub_   = nh_->create_publisher<nav_msgs::msg::Path>("/spline_path", 10);
    marker_pub_ = nh_->create_publisher<visualization_msgs::msg::Marker>("/spline_point", 10);

    nh_->declare_parameter("threads_num", 16);
    nh_->declare_parameter("max_acc", 0.6);
    nh_->declare_parameter("max_vel", 0.3);
    nh_->declare_parameter("omg_max", 0.6);
    nh_->declare_parameter("alpha_max", 1.2);

    threads_num_ = nh_->get_parameter("threads_num").as_int();
    max_acc_ = nh_->get_parameter("max_acc").as_double();
    max_vel_ = nh_->get_parameter("max_vel").as_double();
    omg_max_ = nh_->get_parameter("omg_max").as_double();
    alpha_max_ = nh_->get_parameter("alpha_max").as_double();
}

inline int TrajOptimizer::optimize_lbfgs()
{
    lbfgs::lbfgs_parameter_t lbfgs_params;
    lbfgs_params.mem_size = 16;
    lbfgs_params.max_iterations = 20;
    lbfgs_params.g_epsilon = 0.001;
    lbfgs_params.max_linesearch = 16;

    int num_cols = trajectory_->control_points_.cols();
    int start_col = 3;
    int end_col = num_cols - 3;

    assert(num_cols >= 6);

    // trajectory_->control_points_.data() + start_col * 3 jump over 3 columns |x y z| |x2 y2 z2| |x3 y3 z3|
    Eigen::VectorXd x = Eigen::Map<Eigen::VectorXd>(trajectory_->control_points_.data() + start_col * 3,
                                                    3 * (end_col - start_col));
    double fx = 0.0;

    RCLCPP_INFO(nh_->get_logger(), "L-BFGS Optimize start");
    int result = lbfgs::lbfgs_optimize(x, fx, &TrajOptimizer::evaluate, nullptr,
                                      &TrajOptimizer::progress, this, lbfgs_params);
    RCLCPP_INFO(nh_->get_logger(), "result: %d", result);
    return result;
}

inline double TrajOptimizer::evaluate(void *ptr, const Eigen::VectorXd &x, Eigen::VectorXd &g)
{


    TrajOptimizer &obj = *(TrajOptimizer *)ptr;

    // x -> points on trajectory
    // control_points_ -> trajectory optimizer class -> trajectory_ -> Bspline -> control_points_
    Eigen::Map<const Eigen::MatrixXd> Q(x.data(), 3, x.size() / 3);

    Eigen::MatrixXd &control_points = obj.trajectory_->control_points_;

    int total_cols = control_points.cols();
    // keep the first 3 columns and the last 3 columns of control points unchanged
    control_points.block(0, 3, 3, total_cols - 6) = Q;

    Eigen::MatrixXd grad_3D = Eigen::MatrixXd::Zero(3, control_points.size());

    // find the closest point
    double t_start, t_end;
    obj.trajectory_->getTimeSpan(t_start, t_end);

    // Find the minimum distance among points within 1.0 of target
    Eigen::Vector3d target(4.0, 2.0, 2.0);
    double r = 1.0;
    double t_star = 0.0;
    Eigen::Vector3d best_diff = Eigen::Vector3d::Zero();
    bool found = false;
    double min_dist = std::numeric_limits<double>::max();

    for (double t = 0.0; t <= t_end; t += 0.001) {
        Eigen::Vector3d pos = obj.trajectory_->getPos(t);
        Eigen::Vector3d diff = pos - target;
        double dist = diff.norm();
        if (dist <= r && (!found || dist < min_dist)) {
            min_dist = dist;
            best_diff = diff;
            t_star = t;
            found = true;
        }
    }

    double cost = 0.0;
    if (found) {
        cost = std::pow(r - min_dist, 2.0);  // (r - ||p - target||)^2
    }

    // gradient define
    Eigen::Vector3d C = 2.0 * best_diff;

    // uniform time stamp
    int m = static_cast<int>(std::floor(t_star));
    double s = t_star - m;

    // basis functions
    double B0 = (1 - 3*s + 3*s*s - s*s*s) / 6.0;
    double B1 = (4 - 6*s*s + 3*s*s*s) / 6.0;
    double B2 = (1 + 3*s + 3*s*s - 3*s*s*s) / 6.0;
    double B3 = s*s*s / 6.0;

    // as define of grad_3D is vertical
    grad_3D.col(m)     = B0 * C;
    grad_3D.col(m + 1) = B1 * C;
    grad_3D.col(m + 2) = B2 * C;
    grad_3D.col(m + 3) = B3 * C;

    

    memcpy(g.data(), grad_3D.data() + 9, g.size() * sizeof(g[0]));
    return cost;
}

inline int TrajOptimizer::progress(void *ptr,
    const Eigen::VectorXd &x,
    const Eigen::VectorXd &g,
    const double fx,
    const double step,
    const int k,
    const int ls)
{
    (void)x;
    (void)g;
    // showing the current trajectory
    TrajOptimizer &obj = *(TrajOptimizer *)ptr;
    std::cout << "Iteration " << k << ": cost = " << fx
              << ", step = " << step << ", ls tries = " << ls << std::endl;

    // sending path message
    nav_msgs::msg::Path path_msg;
    path_msg.header.frame_id = "base_link";
    path_msg.header.stamp = obj.nh_->now();
    auto route = obj.trajectory_->getRoute();
    for (const auto &pt : route) {
        geometry_msgs::msg::PoseStamped pose;
        pose.header = path_msg.header;
        pose.pose.position.x = pt.x();
        pose.pose.position.y = pt.y();
        pose.pose.position.z = pt.z();
        pose.pose.orientation.w = 1.0;
        path_msg.poses.push_back(pose);
    }
    obj.path_pub_->publish(path_msg);

    // construct control points marker and publish
    visualization_msgs::msg::Marker marker;
    marker.header = path_msg.header;
    marker.ns = "spline_control_points";
    marker.id = 0;
    marker.type = visualization_msgs::msg::Marker::SPHERE_LIST;
    marker.action = visualization_msgs::msg::Marker::ADD;
    marker.scale.x = 0.2;
    marker.scale.y = 0.2;
    marker.scale.z = 0.2;
    marker.color.r = 1.0;
    marker.color.g = 0.0;
    marker.color.b = 0.0;
    marker.color.a = 1.0;
    // add control points to marker
    for (int i = 0; i < obj.trajectory_->control_points_.cols(); ++i) {
        geometry_msgs::msg::Point pt;
        pt.x = obj.trajectory_->control_points_(0, i);
        pt.y = obj.trajectory_->control_points_(1, i);
        pt.z = obj.trajectory_->control_points_(2, i);
        marker.points.push_back(pt);
    }
    obj.marker_pub_->publish(marker);

    return 0;
}

#endif // OPTIMIZER_HPP

