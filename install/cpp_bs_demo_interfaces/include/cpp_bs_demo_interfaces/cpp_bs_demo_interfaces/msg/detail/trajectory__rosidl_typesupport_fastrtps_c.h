// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice
#ifndef CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "cpp_bs_demo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
bool cdr_serialize_cpp_bs_demo_interfaces__msg__Trajectory(
  const cpp_bs_demo_interfaces__msg__Trajectory * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
bool cdr_deserialize_cpp_bs_demo_interfaces__msg__Trajectory(
  eprosima::fastcdr::Cdr &,
  cpp_bs_demo_interfaces__msg__Trajectory * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
size_t get_serialized_size_cpp_bs_demo_interfaces__msg__Trajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
size_t max_serialized_size_cpp_bs_demo_interfaces__msg__Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
bool cdr_serialize_key_cpp_bs_demo_interfaces__msg__Trajectory(
  const cpp_bs_demo_interfaces__msg__Trajectory * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
size_t get_serialized_size_key_cpp_bs_demo_interfaces__msg__Trajectory(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
size_t max_serialized_size_key_cpp_bs_demo_interfaces__msg__Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_bs_demo_interfaces, msg, Trajectory)();

#ifdef __cplusplus
}
#endif

#endif  // CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
