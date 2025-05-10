// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cpp_bs_demo_interfaces/msg/trajectory.hpp"


#ifndef CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
#define CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'traj_start_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'control_points'
// Member 'init_p'
// Member 'init_v'
// Member 'init_a'
// Member 'tail_p'
// Member 'tail_v'
// Member 'tail_a'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cpp_bs_demo_interfaces__msg__Trajectory __attribute__((deprecated))
#else
# define DEPRECATED__cpp_bs_demo_interfaces__msg__Trajectory __declspec(deprecated)
#endif

namespace cpp_bs_demo_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Trajectory_
{
  using Type = Trajectory_<ContainerAllocator>;

  explicit Trajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    traj_start_time(_init),
    init_p(_init),
    init_v(_init),
    init_a(_init),
    tail_p(_init),
    tail_v(_init),
    tail_a(_init)
  {
    (void)_init;
  }

  explicit Trajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    traj_start_time(_alloc, _init),
    init_p(_alloc, _init),
    init_v(_alloc, _init),
    init_a(_alloc, _init),
    tail_p(_alloc, _init),
    tail_v(_alloc, _init),
    tail_a(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _traj_start_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _traj_start_time_type traj_start_time;
  using _control_points_type =
    std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>>;
  _control_points_type control_points;
  using _u_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _u_type u;
  using _init_p_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _init_p_type init_p;
  using _init_v_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _init_v_type init_v;
  using _init_a_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _init_a_type init_a;
  using _tail_p_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _tail_p_type tail_p;
  using _tail_v_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _tail_v_type tail_v;
  using _tail_a_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _tail_a_type tail_a;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__traj_start_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->traj_start_time = _arg;
    return *this;
  }
  Type & set__control_points(
    const std::vector<geometry_msgs::msg::Vector3_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Vector3_<ContainerAllocator>>> & _arg)
  {
    this->control_points = _arg;
    return *this;
  }
  Type & set__u(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->u = _arg;
    return *this;
  }
  Type & set__init_p(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->init_p = _arg;
    return *this;
  }
  Type & set__init_v(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->init_v = _arg;
    return *this;
  }
  Type & set__init_a(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->init_a = _arg;
    return *this;
  }
  Type & set__tail_p(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->tail_p = _arg;
    return *this;
  }
  Type & set__tail_v(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->tail_v = _arg;
    return *this;
  }
  Type & set__tail_a(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->tail_a = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cpp_bs_demo_interfaces__msg__Trajectory
    std::shared_ptr<cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cpp_bs_demo_interfaces__msg__Trajectory
    std::shared_ptr<cpp_bs_demo_interfaces::msg::Trajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Trajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->traj_start_time != other.traj_start_time) {
      return false;
    }
    if (this->control_points != other.control_points) {
      return false;
    }
    if (this->u != other.u) {
      return false;
    }
    if (this->init_p != other.init_p) {
      return false;
    }
    if (this->init_v != other.init_v) {
      return false;
    }
    if (this->init_a != other.init_a) {
      return false;
    }
    if (this->tail_p != other.tail_p) {
      return false;
    }
    if (this->tail_v != other.tail_v) {
      return false;
    }
    if (this->tail_a != other.tail_a) {
      return false;
    }
    return true;
  }
  bool operator!=(const Trajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Trajectory_

// alias to use template instance with default allocator
using Trajectory =
  cpp_bs_demo_interfaces::msg::Trajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cpp_bs_demo_interfaces

#endif  // CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_HPP_
