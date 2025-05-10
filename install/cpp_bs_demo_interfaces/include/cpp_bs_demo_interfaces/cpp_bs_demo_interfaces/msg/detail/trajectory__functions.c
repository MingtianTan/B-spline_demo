// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice
#include "cpp_bs_demo_interfaces/msg/detail/trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `traj_start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `control_points`
// Member `init_p`
// Member `init_v`
// Member `init_a`
// Member `tail_p`
// Member `tail_v`
// Member `tail_a`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `u`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
cpp_bs_demo_interfaces__msg__Trajectory__init(cpp_bs_demo_interfaces__msg__Trajectory * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // traj_start_time
  if (!builtin_interfaces__msg__Time__init(&msg->traj_start_time)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // control_points
  if (!geometry_msgs__msg__Vector3__Sequence__init(&msg->control_points, 0)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // u
  if (!rosidl_runtime_c__double__Sequence__init(&msg->u, 0)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // init_p
  if (!geometry_msgs__msg__Vector3__init(&msg->init_p)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // init_v
  if (!geometry_msgs__msg__Vector3__init(&msg->init_v)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // init_a
  if (!geometry_msgs__msg__Vector3__init(&msg->init_a)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // tail_p
  if (!geometry_msgs__msg__Vector3__init(&msg->tail_p)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // tail_v
  if (!geometry_msgs__msg__Vector3__init(&msg->tail_v)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  // tail_a
  if (!geometry_msgs__msg__Vector3__init(&msg->tail_a)) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
    return false;
  }
  return true;
}

void
cpp_bs_demo_interfaces__msg__Trajectory__fini(cpp_bs_demo_interfaces__msg__Trajectory * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // traj_start_time
  builtin_interfaces__msg__Time__fini(&msg->traj_start_time);
  // control_points
  geometry_msgs__msg__Vector3__Sequence__fini(&msg->control_points);
  // u
  rosidl_runtime_c__double__Sequence__fini(&msg->u);
  // init_p
  geometry_msgs__msg__Vector3__fini(&msg->init_p);
  // init_v
  geometry_msgs__msg__Vector3__fini(&msg->init_v);
  // init_a
  geometry_msgs__msg__Vector3__fini(&msg->init_a);
  // tail_p
  geometry_msgs__msg__Vector3__fini(&msg->tail_p);
  // tail_v
  geometry_msgs__msg__Vector3__fini(&msg->tail_v);
  // tail_a
  geometry_msgs__msg__Vector3__fini(&msg->tail_a);
}

bool
cpp_bs_demo_interfaces__msg__Trajectory__are_equal(const cpp_bs_demo_interfaces__msg__Trajectory * lhs, const cpp_bs_demo_interfaces__msg__Trajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // traj_start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->traj_start_time), &(rhs->traj_start_time)))
  {
    return false;
  }
  // control_points
  if (!geometry_msgs__msg__Vector3__Sequence__are_equal(
      &(lhs->control_points), &(rhs->control_points)))
  {
    return false;
  }
  // u
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->u), &(rhs->u)))
  {
    return false;
  }
  // init_p
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->init_p), &(rhs->init_p)))
  {
    return false;
  }
  // init_v
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->init_v), &(rhs->init_v)))
  {
    return false;
  }
  // init_a
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->init_a), &(rhs->init_a)))
  {
    return false;
  }
  // tail_p
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->tail_p), &(rhs->tail_p)))
  {
    return false;
  }
  // tail_v
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->tail_v), &(rhs->tail_v)))
  {
    return false;
  }
  // tail_a
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->tail_a), &(rhs->tail_a)))
  {
    return false;
  }
  return true;
}

bool
cpp_bs_demo_interfaces__msg__Trajectory__copy(
  const cpp_bs_demo_interfaces__msg__Trajectory * input,
  cpp_bs_demo_interfaces__msg__Trajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // traj_start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->traj_start_time), &(output->traj_start_time)))
  {
    return false;
  }
  // control_points
  if (!geometry_msgs__msg__Vector3__Sequence__copy(
      &(input->control_points), &(output->control_points)))
  {
    return false;
  }
  // u
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->u), &(output->u)))
  {
    return false;
  }
  // init_p
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->init_p), &(output->init_p)))
  {
    return false;
  }
  // init_v
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->init_v), &(output->init_v)))
  {
    return false;
  }
  // init_a
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->init_a), &(output->init_a)))
  {
    return false;
  }
  // tail_p
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->tail_p), &(output->tail_p)))
  {
    return false;
  }
  // tail_v
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->tail_v), &(output->tail_v)))
  {
    return false;
  }
  // tail_a
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->tail_a), &(output->tail_a)))
  {
    return false;
  }
  return true;
}

cpp_bs_demo_interfaces__msg__Trajectory *
cpp_bs_demo_interfaces__msg__Trajectory__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_bs_demo_interfaces__msg__Trajectory * msg = (cpp_bs_demo_interfaces__msg__Trajectory *)allocator.allocate(sizeof(cpp_bs_demo_interfaces__msg__Trajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(cpp_bs_demo_interfaces__msg__Trajectory));
  bool success = cpp_bs_demo_interfaces__msg__Trajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
cpp_bs_demo_interfaces__msg__Trajectory__destroy(cpp_bs_demo_interfaces__msg__Trajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    cpp_bs_demo_interfaces__msg__Trajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
cpp_bs_demo_interfaces__msg__Trajectory__Sequence__init(cpp_bs_demo_interfaces__msg__Trajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_bs_demo_interfaces__msg__Trajectory * data = NULL;

  if (size) {
    data = (cpp_bs_demo_interfaces__msg__Trajectory *)allocator.zero_allocate(size, sizeof(cpp_bs_demo_interfaces__msg__Trajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = cpp_bs_demo_interfaces__msg__Trajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        cpp_bs_demo_interfaces__msg__Trajectory__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
cpp_bs_demo_interfaces__msg__Trajectory__Sequence__fini(cpp_bs_demo_interfaces__msg__Trajectory__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      cpp_bs_demo_interfaces__msg__Trajectory__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

cpp_bs_demo_interfaces__msg__Trajectory__Sequence *
cpp_bs_demo_interfaces__msg__Trajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  cpp_bs_demo_interfaces__msg__Trajectory__Sequence * array = (cpp_bs_demo_interfaces__msg__Trajectory__Sequence *)allocator.allocate(sizeof(cpp_bs_demo_interfaces__msg__Trajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = cpp_bs_demo_interfaces__msg__Trajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
cpp_bs_demo_interfaces__msg__Trajectory__Sequence__destroy(cpp_bs_demo_interfaces__msg__Trajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    cpp_bs_demo_interfaces__msg__Trajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
cpp_bs_demo_interfaces__msg__Trajectory__Sequence__are_equal(const cpp_bs_demo_interfaces__msg__Trajectory__Sequence * lhs, const cpp_bs_demo_interfaces__msg__Trajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!cpp_bs_demo_interfaces__msg__Trajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
cpp_bs_demo_interfaces__msg__Trajectory__Sequence__copy(
  const cpp_bs_demo_interfaces__msg__Trajectory__Sequence * input,
  cpp_bs_demo_interfaces__msg__Trajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(cpp_bs_demo_interfaces__msg__Trajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    cpp_bs_demo_interfaces__msg__Trajectory * data =
      (cpp_bs_demo_interfaces__msg__Trajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!cpp_bs_demo_interfaces__msg__Trajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          cpp_bs_demo_interfaces__msg__Trajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!cpp_bs_demo_interfaces__msg__Trajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
