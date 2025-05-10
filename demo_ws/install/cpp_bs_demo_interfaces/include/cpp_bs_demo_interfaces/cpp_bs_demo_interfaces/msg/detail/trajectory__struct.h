// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cpp_bs_demo_interfaces/msg/trajectory.h"


#ifndef CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_H_
#define CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'traj_start_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'control_points'
// Member 'init_p'
// Member 'init_v'
// Member 'init_a'
// Member 'tail_p'
// Member 'tail_v'
// Member 'tail_a'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'u'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Trajectory in the package cpp_bs_demo_interfaces.
typedef struct cpp_bs_demo_interfaces__msg__Trajectory
{
  std_msgs__msg__Header header;
  builtin_interfaces__msg__Time traj_start_time;
  geometry_msgs__msg__Vector3__Sequence control_points;
  rosidl_runtime_c__double__Sequence u;
  geometry_msgs__msg__Vector3 init_p;
  geometry_msgs__msg__Vector3 init_v;
  geometry_msgs__msg__Vector3 init_a;
  geometry_msgs__msg__Vector3 tail_p;
  geometry_msgs__msg__Vector3 tail_v;
  geometry_msgs__msg__Vector3 tail_a;
} cpp_bs_demo_interfaces__msg__Trajectory;

// Struct for a sequence of cpp_bs_demo_interfaces__msg__Trajectory.
typedef struct cpp_bs_demo_interfaces__msg__Trajectory__Sequence
{
  cpp_bs_demo_interfaces__msg__Trajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} cpp_bs_demo_interfaces__msg__Trajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__STRUCT_H_
