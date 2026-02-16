// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mujoco_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
#define MUJOCO_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mujoco_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace mujoco_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Control & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: thrust
  {
    out << "thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust, out);
    out << ", ";
  }

  // member: torque_x
  {
    out << "torque_x: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_x, out);
    out << ", ";
  }

  // member: torque_y
  {
    out << "torque_y: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_y, out);
    out << ", ";
  }

  // member: torque_z
  {
    out << "torque_z: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: thrust
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust, out);
    out << "\n";
  }

  // member: torque_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_x: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_x, out);
    out << "\n";
  }

  // member: torque_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_y: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_y, out);
    out << "\n";
  }

  // member: torque_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "torque_z: ";
    rosidl_generator_traits::value_to_yaml(msg.torque_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Control & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mujoco_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mujoco_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mujoco_msgs::msg::Control & msg,
  std::ostream & out, size_t indentation = 0)
{
  mujoco_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mujoco_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mujoco_msgs::msg::Control & msg)
{
  return mujoco_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mujoco_msgs::msg::Control>()
{
  return "mujoco_msgs::msg::Control";
}

template<>
inline const char * name<mujoco_msgs::msg::Control>()
{
  return "mujoco_msgs/msg/Control";
}

template<>
struct has_fixed_size<mujoco_msgs::msg::Control>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mujoco_msgs::msg::Control>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mujoco_msgs::msg::Control>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MUJOCO_MSGS__MSG__DETAIL__CONTROL__TRAITS_HPP_
