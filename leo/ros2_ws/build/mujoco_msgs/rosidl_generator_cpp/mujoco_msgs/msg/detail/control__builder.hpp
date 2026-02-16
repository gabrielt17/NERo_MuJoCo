// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mujoco_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
#define MUJOCO_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mujoco_msgs/msg/detail/control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mujoco_msgs
{

namespace msg
{

namespace builder
{

class Init_Control_torque_z
{
public:
  explicit Init_Control_torque_z(::mujoco_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  ::mujoco_msgs::msg::Control torque_z(::mujoco_msgs::msg::Control::_torque_z_type arg)
  {
    msg_.torque_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mujoco_msgs::msg::Control msg_;
};

class Init_Control_torque_y
{
public:
  explicit Init_Control_torque_y(::mujoco_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_torque_z torque_y(::mujoco_msgs::msg::Control::_torque_y_type arg)
  {
    msg_.torque_y = std::move(arg);
    return Init_Control_torque_z(msg_);
  }

private:
  ::mujoco_msgs::msg::Control msg_;
};

class Init_Control_torque_x
{
public:
  explicit Init_Control_torque_x(::mujoco_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_torque_y torque_x(::mujoco_msgs::msg::Control::_torque_x_type arg)
  {
    msg_.torque_x = std::move(arg);
    return Init_Control_torque_y(msg_);
  }

private:
  ::mujoco_msgs::msg::Control msg_;
};

class Init_Control_thrust
{
public:
  explicit Init_Control_thrust(::mujoco_msgs::msg::Control & msg)
  : msg_(msg)
  {}
  Init_Control_torque_x thrust(::mujoco_msgs::msg::Control::_thrust_type arg)
  {
    msg_.thrust = std::move(arg);
    return Init_Control_torque_x(msg_);
  }

private:
  ::mujoco_msgs::msg::Control msg_;
};

class Init_Control_header
{
public:
  Init_Control_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Control_thrust header(::mujoco_msgs::msg::Control::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Control_thrust(msg_);
  }

private:
  ::mujoco_msgs::msg::Control msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mujoco_msgs::msg::Control>()
{
  return mujoco_msgs::msg::builder::Init_Control_header();
}

}  // namespace mujoco_msgs

#endif  // MUJOCO_MSGS__MSG__DETAIL__CONTROL__BUILDER_HPP_
