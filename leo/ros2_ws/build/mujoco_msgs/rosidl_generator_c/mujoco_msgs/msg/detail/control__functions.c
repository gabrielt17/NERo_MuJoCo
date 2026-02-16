// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mujoco_msgs:msg/Control.idl
// generated code does not contain a copyright notice
#include "mujoco_msgs/msg/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mujoco_msgs__msg__Control__init(mujoco_msgs__msg__Control * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mujoco_msgs__msg__Control__fini(msg);
    return false;
  }
  // thrust
  // torque_x
  // torque_y
  // torque_z
  return true;
}

void
mujoco_msgs__msg__Control__fini(mujoco_msgs__msg__Control * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // thrust
  // torque_x
  // torque_y
  // torque_z
}

bool
mujoco_msgs__msg__Control__are_equal(const mujoco_msgs__msg__Control * lhs, const mujoco_msgs__msg__Control * rhs)
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
  // thrust
  if (lhs->thrust != rhs->thrust) {
    return false;
  }
  // torque_x
  if (lhs->torque_x != rhs->torque_x) {
    return false;
  }
  // torque_y
  if (lhs->torque_y != rhs->torque_y) {
    return false;
  }
  // torque_z
  if (lhs->torque_z != rhs->torque_z) {
    return false;
  }
  return true;
}

bool
mujoco_msgs__msg__Control__copy(
  const mujoco_msgs__msg__Control * input,
  mujoco_msgs__msg__Control * output)
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
  // thrust
  output->thrust = input->thrust;
  // torque_x
  output->torque_x = input->torque_x;
  // torque_y
  output->torque_y = input->torque_y;
  // torque_z
  output->torque_z = input->torque_z;
  return true;
}

mujoco_msgs__msg__Control *
mujoco_msgs__msg__Control__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mujoco_msgs__msg__Control * msg = (mujoco_msgs__msg__Control *)allocator.allocate(sizeof(mujoco_msgs__msg__Control), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mujoco_msgs__msg__Control));
  bool success = mujoco_msgs__msg__Control__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mujoco_msgs__msg__Control__destroy(mujoco_msgs__msg__Control * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mujoco_msgs__msg__Control__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mujoco_msgs__msg__Control__Sequence__init(mujoco_msgs__msg__Control__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mujoco_msgs__msg__Control * data = NULL;

  if (size) {
    data = (mujoco_msgs__msg__Control *)allocator.zero_allocate(size, sizeof(mujoco_msgs__msg__Control), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mujoco_msgs__msg__Control__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mujoco_msgs__msg__Control__fini(&data[i - 1]);
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
mujoco_msgs__msg__Control__Sequence__fini(mujoco_msgs__msg__Control__Sequence * array)
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
      mujoco_msgs__msg__Control__fini(&array->data[i]);
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

mujoco_msgs__msg__Control__Sequence *
mujoco_msgs__msg__Control__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mujoco_msgs__msg__Control__Sequence * array = (mujoco_msgs__msg__Control__Sequence *)allocator.allocate(sizeof(mujoco_msgs__msg__Control__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mujoco_msgs__msg__Control__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mujoco_msgs__msg__Control__Sequence__destroy(mujoco_msgs__msg__Control__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mujoco_msgs__msg__Control__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mujoco_msgs__msg__Control__Sequence__are_equal(const mujoco_msgs__msg__Control__Sequence * lhs, const mujoco_msgs__msg__Control__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mujoco_msgs__msg__Control__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mujoco_msgs__msg__Control__Sequence__copy(
  const mujoco_msgs__msg__Control__Sequence * input,
  mujoco_msgs__msg__Control__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mujoco_msgs__msg__Control);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mujoco_msgs__msg__Control * data =
      (mujoco_msgs__msg__Control *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mujoco_msgs__msg__Control__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mujoco_msgs__msg__Control__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mujoco_msgs__msg__Control__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
