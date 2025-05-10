// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cpp_bs_demo_interfaces/msg/trajectory.hpp"


#ifndef CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
#define CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "cpp_bs_demo_interfaces/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace cpp_bs_demo_interfaces
{

namespace msg
{

namespace builder
{

class Init_Trajectory_tail_a
{
public:
  explicit Init_Trajectory_tail_a(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  ::cpp_bs_demo_interfaces::msg::Trajectory tail_a(::cpp_bs_demo_interfaces::msg::Trajectory::_tail_a_type arg)
  {
    msg_.tail_a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_tail_v
{
public:
  explicit Init_Trajectory_tail_v(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_tail_a tail_v(::cpp_bs_demo_interfaces::msg::Trajectory::_tail_v_type arg)
  {
    msg_.tail_v = std::move(arg);
    return Init_Trajectory_tail_a(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_tail_p
{
public:
  explicit Init_Trajectory_tail_p(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_tail_v tail_p(::cpp_bs_demo_interfaces::msg::Trajectory::_tail_p_type arg)
  {
    msg_.tail_p = std::move(arg);
    return Init_Trajectory_tail_v(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_init_a
{
public:
  explicit Init_Trajectory_init_a(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_tail_p init_a(::cpp_bs_demo_interfaces::msg::Trajectory::_init_a_type arg)
  {
    msg_.init_a = std::move(arg);
    return Init_Trajectory_tail_p(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_init_v
{
public:
  explicit Init_Trajectory_init_v(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_init_a init_v(::cpp_bs_demo_interfaces::msg::Trajectory::_init_v_type arg)
  {
    msg_.init_v = std::move(arg);
    return Init_Trajectory_init_a(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_init_p
{
public:
  explicit Init_Trajectory_init_p(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_init_v init_p(::cpp_bs_demo_interfaces::msg::Trajectory::_init_p_type arg)
  {
    msg_.init_p = std::move(arg);
    return Init_Trajectory_init_v(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_u
{
public:
  explicit Init_Trajectory_u(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_init_p u(::cpp_bs_demo_interfaces::msg::Trajectory::_u_type arg)
  {
    msg_.u = std::move(arg);
    return Init_Trajectory_init_p(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_control_points
{
public:
  explicit Init_Trajectory_control_points(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_u control_points(::cpp_bs_demo_interfaces::msg::Trajectory::_control_points_type arg)
  {
    msg_.control_points = std::move(arg);
    return Init_Trajectory_u(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_traj_start_time
{
public:
  explicit Init_Trajectory_traj_start_time(::cpp_bs_demo_interfaces::msg::Trajectory & msg)
  : msg_(msg)
  {}
  Init_Trajectory_control_points traj_start_time(::cpp_bs_demo_interfaces::msg::Trajectory::_traj_start_time_type arg)
  {
    msg_.traj_start_time = std::move(arg);
    return Init_Trajectory_control_points(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

class Init_Trajectory_header
{
public:
  Init_Trajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trajectory_traj_start_time header(::cpp_bs_demo_interfaces::msg::Trajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Trajectory_traj_start_time(msg_);
  }

private:
  ::cpp_bs_demo_interfaces::msg::Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cpp_bs_demo_interfaces::msg::Trajectory>()
{
  return cpp_bs_demo_interfaces::msg::builder::Init_Trajectory_header();
}

}  // namespace cpp_bs_demo_interfaces

#endif  // CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__BUILDER_HPP_
