#include <functional>
#include <memory>
#include <string>
#include "spline.hpp"
#include "optimizer.hpp"  // 引入TrajOptimizer头文件
#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/path.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"

using namespace std::chrono_literals;

class SplinePublisher : public rclcpp::Node {
public:
    SplinePublisher() : Node("spline_publisher") {
        // 创建Path和Marker发布者（队列大小10）
        path_pub_ = this->create_publisher<nav_msgs::msg::Path>("/spline_path", 10);
        marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("/spline_point", 10);
        // 预设控制点列表
        std::vector<Eigen::Vector3d> points = {
            {-5, 0, 0},
            {-5, 0, 0},
            {-5, 0, 0},
            {-4, 0, 0},
            {-3, 0, 0},
            {-2, 0, 0},
            {-1, 0, 0},
            {0, 0, 0},
            {1, 0, 0},
            {2, 0, 0},
            {3, 0, 0},
            {4, 0, 0},
            {5, 0, 0},
            {5, 0, 0},
            {5, 0, 0},
        };
        // 将控制点复制到矩阵 ctrl_pts_，尺寸为 3 x points.size()
        ctrl_pts_.resize(3, points.size());
        for (size_t i = 0; i < points.size(); ++i) {
            ctrl_pts_.col(i) = points[i];
        }
        //make a copy

        // 使用 Bspline 生成初始均匀样条（3阶，间隔0.1）
        spline_.setUniformBspline(ctrl_pts_, 3, 1);

    }

    // 设置控制点并更新样条（用于更新优化后的控制点）
    void setControlPoints(const Eigen::MatrixXd &pts) {
        ctrl_pts_ = pts;
        spline_.setUniformBspline(ctrl_pts_, 3, 1);
    }
    const Eigen::MatrixXd& getControlPoints() const {
        return ctrl_pts_;
    }
    // 发布当前样条轨迹（nav_msgs/Path）和控制点（visualization_msgs/Marker）
    void publish_all() {
        auto route = spline_.getRoute();  // 获取轨迹路径点序列
    
        // 构造并发布Path消息
        nav_msgs::msg::Path path_msg;
        path_msg.header.frame_id = "base_link";
        path_msg.header.stamp = this->now();
        for (const auto &pt : route) {
            geometry_msgs::msg::PoseStamped pose;
            pose.header = path_msg.header;
            pose.pose.position.x = pt.x();
            pose.pose.position.y = pt.y();
            pose.pose.position.z = pt.z();
            pose.pose.orientation.w = 1.0;
            path_msg.poses.push_back(pose);
        }
        path_pub_ = this->create_publisher<nav_msgs::msg::Path>("/new_spline_path", 10);
        path_pub_->publish(path_msg);
    
        // 构造并发布控制点Marker（黄色球体列表）
        visualization_msgs::msg::Marker marker;
        marker.header = path_msg.header;
        marker.ns = "spline_point";
        marker.id = 0;
        marker.type = visualization_msgs::msg::Marker::SPHERE_LIST;
        marker.action = visualization_msgs::msg::Marker::ADD;
        marker.scale.x = 0.2; marker.scale.y = 0.2; marker.scale.z = 0.2;
    
        // 设置颜色为黄色
        marker.color.r = 1.0;
        marker.color.g = 1.0;
        marker.color.b = 0.0;
        marker.color.a = 1.0;
    
        for (int i = 0; i < ctrl_pts_.cols(); ++i) {
            geometry_msgs::msg::Point pt;
            pt.x = ctrl_pts_(0, i);
            pt.y = ctrl_pts_(1, i);
            pt.z = ctrl_pts_(2, i);
            marker.points.push_back(pt);
        }
    
        // 修改这里的topic名，发布到新的 topic（例如 "/new_spline_point"）
        marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("/new_spline_point", 10);
        marker_pub_->publish(marker);
    }

private:
    Bspline spline_;
    Bspline spline1_;
    Eigen::MatrixXd ctrl_pts_;
    Eigen::MatrixXd ctrl_pts1_;
    rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
};
 
int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<SplinePublisher>();

  // 发布原始轨迹和控制点
  node->publish_all();

  // 构造TrajOptimizer并设置初始轨迹
  auto optimizer = std::make_shared<TrajOptimizer>(node);
  // 将初始控制点传递给优化器
  optimizer->trajectory_->setUniformBspline(node->getControlPoints(), 3, 1);

  // 执行L-BFGS优化（在progress回调中自动发布中间结果）
  optimizer->optimize_lbfgs();

  // 优化结束后，获取最终控制点并更新发布节点
  Eigen::MatrixXd final_ctrl = optimizer->trajectory_->control_points_;
  node->setControlPoints(final_ctrl);

  // 发布优化后的最终轨迹和控制点
  node->publish_all();

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}