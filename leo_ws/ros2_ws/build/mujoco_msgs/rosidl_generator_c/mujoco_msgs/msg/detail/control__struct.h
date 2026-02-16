// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mujoco_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
#define MUJOCO_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_

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

/// Struct defined in msg/Control in the package mujoco_msgs.
typedef struct mujoco_msgs__msg__Control
{
  std_msgs__msg__Header header;
  float thrust;
  float torque_x;
  float torque_y;
  float torque_z;
} mujoco_msgs__msg__Control;

// Struct for a sequence of mujoco_msgs__msg__Control.
typedef struct mujoco_msgs__msg__Control__Sequence
{
  mujoco_msgs__msg__Control * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mujoco_msgs__msg__Control__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MUJOCO_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
