// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "cpp_bs_demo_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__struct.h"
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // traj_start_time
#include "geometry_msgs/msg/detail/vector3__functions.h"  // control_points, init_a, init_p, init_v, tail_a, tail_p, tail_v
#include "rosidl_runtime_c/primitives_sequence.h"  // u
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // u
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_cpp_bs_demo_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Trajectory__ros_msg_type = cpp_bs_demo_interfaces__msg__Trajectory;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
bool cdr_serialize_cpp_bs_demo_interfaces__msg__Trajectory(
  const cpp_bs_demo_interfaces__msg__Trajectory * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: traj_start_time
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->traj_start_time, cdr);
  }

  // Field name: control_points
  {
    size_t size = ros_message->control_points.size;
    auto array_ptr = ros_message->control_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_geometry_msgs__msg__Vector3(
        &array_ptr[i], cdr);
    }
  }

  // Field name: u
  {
    size_t size = ros_message->u.size;
    auto array_ptr = ros_message->u.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: init_p
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->init_p, cdr);
  }

  // Field name: init_v
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->init_v, cdr);
  }

  // Field name: init_a
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->init_a, cdr);
  }

  // Field name: tail_p
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->tail_p, cdr);
  }

  // Field name: tail_v
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->tail_v, cdr);
  }

  // Field name: tail_a
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->tail_a, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
bool cdr_deserialize_cpp_bs_demo_interfaces__msg__Trajectory(
  eprosima::fastcdr::Cdr & cdr,
  cpp_bs_demo_interfaces__msg__Trajectory * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: traj_start_time
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->traj_start_time);
  }

  // Field name: control_points
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->control_points.data) {
      geometry_msgs__msg__Vector3__Sequence__fini(&ros_message->control_points);
    }
    if (!geometry_msgs__msg__Vector3__Sequence__init(&ros_message->control_points, size)) {
      fprintf(stderr, "failed to create array for field 'control_points'");
      return false;
    }
    auto array_ptr = ros_message->control_points.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &array_ptr[i]);
    }
  }

  // Field name: u
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->u.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->u);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->u, size)) {
      fprintf(stderr, "failed to create array for field 'u'");
      return false;
    }
    auto array_ptr = ros_message->u.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: init_p
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->init_p);
  }

  // Field name: init_v
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->init_v);
  }

  // Field name: init_a
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->init_a);
  }

  // Field name: tail_p
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->tail_p);
  }

  // Field name: tail_v
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->tail_v);
  }

  // Field name: tail_a
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->tail_a);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
size_t get_serialized_size_cpp_bs_demo_interfaces__msg__Trajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Trajectory__ros_msg_type * ros_message = static_cast<const _Trajectory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: traj_start_time
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->traj_start_time), current_alignment);

  // Field name: control_points
  {
    size_t array_size = ros_message->control_points.size;
    auto array_ptr = ros_message->control_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: u
  {
    size_t array_size = ros_message->u.size;
    auto array_ptr = ros_message->u.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: init_p
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->init_p), current_alignment);

  // Field name: init_v
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->init_v), current_alignment);

  // Field name: init_a
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->init_a), current_alignment);

  // Field name: tail_p
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->tail_p), current_alignment);

  // Field name: tail_v
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->tail_v), current_alignment);

  // Field name: tail_a
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->tail_a), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
size_t max_serialized_size_cpp_bs_demo_interfaces__msg__Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: traj_start_time
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: control_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: u
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: init_p
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: init_v
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: init_a
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tail_p
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tail_v
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tail_a
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cpp_bs_demo_interfaces__msg__Trajectory;
    is_plain =
      (
      offsetof(DataType, tail_a) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
bool cdr_serialize_key_cpp_bs_demo_interfaces__msg__Trajectory(
  const cpp_bs_demo_interfaces__msg__Trajectory * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: traj_start_time
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->traj_start_time, cdr);
  }

  // Field name: control_points
  {
    size_t size = ros_message->control_points.size;
    auto array_ptr = ros_message->control_points.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_geometry_msgs__msg__Vector3(
        &array_ptr[i], cdr);
    }
  }

  // Field name: u
  {
    size_t size = ros_message->u.size;
    auto array_ptr = ros_message->u.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: init_p
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->init_p, cdr);
  }

  // Field name: init_v
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->init_v, cdr);
  }

  // Field name: init_a
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->init_a, cdr);
  }

  // Field name: tail_p
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->tail_p, cdr);
  }

  // Field name: tail_v
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->tail_v, cdr);
  }

  // Field name: tail_a
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->tail_a, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
size_t get_serialized_size_key_cpp_bs_demo_interfaces__msg__Trajectory(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Trajectory__ros_msg_type * ros_message = static_cast<const _Trajectory__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: traj_start_time
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->traj_start_time), current_alignment);

  // Field name: control_points
  {
    size_t array_size = ros_message->control_points.size;
    auto array_ptr = ros_message->control_points.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: u
  {
    size_t array_size = ros_message->u.size;
    auto array_ptr = ros_message->u.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: init_p
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->init_p), current_alignment);

  // Field name: init_v
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->init_v), current_alignment);

  // Field name: init_a
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->init_a), current_alignment);

  // Field name: tail_p
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->tail_p), current_alignment);

  // Field name: tail_v
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->tail_v), current_alignment);

  // Field name: tail_a
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->tail_a), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_cpp_bs_demo_interfaces
size_t max_serialized_size_key_cpp_bs_demo_interfaces__msg__Trajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: traj_start_time
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: control_points
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: u
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: init_p
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: init_v
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: init_a
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tail_p
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tail_v
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: tail_a
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = cpp_bs_demo_interfaces__msg__Trajectory;
    is_plain =
      (
      offsetof(DataType, tail_a) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Trajectory__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const cpp_bs_demo_interfaces__msg__Trajectory * ros_message = static_cast<const cpp_bs_demo_interfaces__msg__Trajectory *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_cpp_bs_demo_interfaces__msg__Trajectory(ros_message, cdr);
}

static bool _Trajectory__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  cpp_bs_demo_interfaces__msg__Trajectory * ros_message = static_cast<cpp_bs_demo_interfaces__msg__Trajectory *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_cpp_bs_demo_interfaces__msg__Trajectory(cdr, ros_message);
}

static uint32_t _Trajectory__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_cpp_bs_demo_interfaces__msg__Trajectory(
      untyped_ros_message, 0));
}

static size_t _Trajectory__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_cpp_bs_demo_interfaces__msg__Trajectory(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Trajectory = {
  "cpp_bs_demo_interfaces::msg",
  "Trajectory",
  _Trajectory__cdr_serialize,
  _Trajectory__cdr_deserialize,
  _Trajectory__get_serialized_size,
  _Trajectory__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Trajectory__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Trajectory,
  get_message_typesupport_handle_function,
  &cpp_bs_demo_interfaces__msg__Trajectory__get_type_hash,
  &cpp_bs_demo_interfaces__msg__Trajectory__get_type_description,
  &cpp_bs_demo_interfaces__msg__Trajectory__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, cpp_bs_demo_interfaces, msg, Trajectory)() {
  return &_Trajectory__type_support;
}

#if defined(__cplusplus)
}
#endif
