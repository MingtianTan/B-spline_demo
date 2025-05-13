
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include "spline.hpp" 
#include "std_msgs/msg/string.hpp"
using namespace std::chrono_literals;
#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/path.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"


 class SplinePublisher : public rclcpp::Node {
 public:
   SplinePublisher() : Node("spline_publisher") {
     path_pub_ = this->create_publisher<nav_msgs::msg::Path>("/spline_path", 10);
     marker_pub_ = this->create_publisher<visualization_msgs::msg::Marker>("/spline_point", 10);
 
     // 构造样条曲线
     std::vector<Eigen::Vector3d> points = 
     {
      {0, 0, 0},
      {0, 0, 0},
      {0, 0, 0},
      {1, 0, 0},
      {2, 1, 1},
      {3, 1, 1},
      {4, 2, 2},
      {5, 3, 3},
      {4, 4, 4},
      {3, 5, 2},
      {3, 5, 2},
      {3, 5, 2}
      };
  
      ctrl_pts_.resize(3, points.size());  // 不 hardcode 列数！
  
    for (size_t i = 0; i < points.size(); ++i) {
      ctrl_pts_.col(i) = points[i];  // Eigen::Vector3d 自动填入列
    }
 
     spline_.setUniformBspline(ctrl_pts_, 3, 0.1);
 
     // 定时发布
     timer_ = this->create_wall_timer(std::chrono::milliseconds(500),
       std::bind(&SplinePublisher::publish_all, this));
    }
 
 private:
   void publish_all() {
     auto route = spline_.getRoute();
 
     nav_msgs::msg::Path path_msg;
     path_msg.header.frame_id = "base_link";
     path_msg.header.stamp = this->now();
 
     for (const auto& pt : route) {
       geometry_msgs::msg::PoseStamped pose;
       pose.header = path_msg.header;
       pose.pose.position.x = pt.x();
       pose.pose.position.y = pt.y();
       pose.pose.position.z = pt.z();
       pose.pose.orientation.w = 1.0;
       path_msg.poses.push_back(pose);
     }
 
     path_pub_->publish(path_msg);
 

     visualization_msgs::msg::Marker marker;
     marker.header = path_msg.header;
     marker.ns = "spline_point";
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
     
     for (int i = 0; i < ctrl_pts_.cols(); ++i) {
       geometry_msgs::msg::Point pt;
       pt.x = ctrl_pts_(0, i);
       pt.y = ctrl_pts_(1, i);
       pt.z = ctrl_pts_(2, i);
       marker.points.push_back(pt);  
     }
     
     marker_pub_->publish(marker);
   }
 
   Bspline spline_;
   rclcpp::Publisher<nav_msgs::msg::Path>::SharedPtr path_pub_;
   rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_pub_;
   rclcpp::TimerBase::SharedPtr timer_;
   Eigen::MatrixXd ctrl_pts_;
 };
 
 int main(int argc, char **argv) {
   rclcpp::init(argc, argv);
   rclcpp::spin(std::make_shared<SplinePublisher>());
   rclcpp::shutdown();
   return 0;
 }