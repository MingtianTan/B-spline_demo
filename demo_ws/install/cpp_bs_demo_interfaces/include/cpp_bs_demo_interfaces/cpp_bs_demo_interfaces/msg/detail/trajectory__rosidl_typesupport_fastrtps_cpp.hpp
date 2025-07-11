// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

#ifndef CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "cpp_bs_demo_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace cpp_bs_demo_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_bs_demo_interfaces
cdr_serialize(
  const cpp_bs_demo_interfaces::msg::Trajectory & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_bs_demo_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cpp_bs_demo_interfaces::msg::Trajectory & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_bs_demo_interfaces
get_serialized_size(
  const cpp_bs_demo_interfaces::msg::Trajectory & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_bs_demo_interfaces
max_serialized_size_Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_bs_demo_interfaces
cdr_serialize_key(
  const cpp_bs_demo_interfaces::msg::Trajectory & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_bs_demo_interfaces
get_serialized_size_key(
  const cpp_bs_demo_interfaces::msg::Trajectory & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_bs_demo_interfaces
max_serialized_size_key_Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cpp_bs_demo_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cpp_bs_demo_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cpp_bs_demo_interfaces, msg, Trajectory)();

#ifdef __cplusplus
}
#endif

#endif  // CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
