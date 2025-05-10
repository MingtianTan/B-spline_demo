// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
#include "cpp_bs_demo_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__functions.h"
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `traj_start_time`
#include "builtin_interfaces/msg/time.h"
// Member `traj_start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `control_points`
// Member `init_p`
// Member `init_v`
// Member `init_a`
// Member `tail_p`
// Member `tail_v`
// Member `tail_a`
#include "geometry_msgs/msg/vector3.h"
// Member `control_points`
// Member `init_p`
// Member `init_v`
// Member `init_a`
// Member `tail_p`
// Member `tail_v`
// Member `tail_a`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `u`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cpp_bs_demo_interfaces__msg__Trajectory__init(message_memory);
}

void cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function(void * message_memory)
{
  cpp_bs_demo_interfaces__msg__Trajectory__fini(message_memory);
}

size_t cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__control_points(
  const void * untyped_member)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return member->size;
}

const void * cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__control_points(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Vector3__Sequence * member =
    (const geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__control_points(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  return &member->data[index];
}

void cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__control_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Vector3 * item =
    ((const geometry_msgs__msg__Vector3 *)
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__control_points(untyped_member, index));
  geometry_msgs__msg__Vector3 * value =
    (geometry_msgs__msg__Vector3 *)(untyped_value);
  *value = *item;
}

void cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__control_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Vector3 * item =
    ((geometry_msgs__msg__Vector3 *)
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__control_points(untyped_member, index));
  const geometry_msgs__msg__Vector3 * value =
    (const geometry_msgs__msg__Vector3 *)(untyped_value);
  *item = *value;
}

bool cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__control_points(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Vector3__Sequence * member =
    (geometry_msgs__msg__Vector3__Sequence *)(untyped_member);
  geometry_msgs__msg__Vector3__Sequence__fini(member);
  return geometry_msgs__msg__Vector3__Sequence__init(member, size);
}

size_t cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__u(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__u(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__u(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__u(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__u(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__u(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__u(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__u(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "traj_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, traj_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "control_points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, control_points),  // bytes offset in struct
    NULL,  // default value
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__control_points,  // size() function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__control_points,  // get_const(index) function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__control_points,  // get(index) function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__control_points,  // fetch(index, &value) function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__control_points,  // assign(index, value) function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__control_points  // resize(index) function pointer
  },
  {
    "u",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, u),  // bytes offset in struct
    NULL,  // default value
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__u,  // size() function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__u,  // get_const(index) function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__u,  // get(index) function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__u,  // fetch(index, &value) function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__u,  // assign(index, value) function pointer
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__u  // resize(index) function pointer
  },
  {
    "init_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, init_p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "init_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, init_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "init_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, init_a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tail_p",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, tail_p),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tail_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, tail_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tail_a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cpp_bs_demo_interfaces__msg__Trajectory, tail_a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members = {
  "cpp_bs_demo_interfaces__msg",  // message namespace
  "Trajectory",  // message name
  10,  // number of fields
  sizeof(cpp_bs_demo_interfaces__msg__Trajectory),
  false,  // has_any_key_member_
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array,  // message members
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle = {
  0,
  &cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members,
  get_message_typesupport_handle_function,
  &cpp_bs_demo_interfaces__msg__Trajectory__get_type_hash,
  &cpp_bs_demo_interfaces__msg__Trajectory__get_type_description,
  &cpp_bs_demo_interfaces__msg__Trajectory__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cpp_bs_demo_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cpp_bs_demo_interfaces, msg, Trajectory)() {
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier) {
    cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &cpp_bs_demo_interfaces__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
