// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mujoco_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef MUJOCO_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
#define MUJOCO_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mujoco_msgs__msg__Control __attribute__((deprecated))
#else
# define DEPRECATED__mujoco_msgs__msg__Control __declspec(deprecated)
#endif

namespace mujoco_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Control_
{
  using Type = Control_<ContainerAllocator>;

  explicit Control_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thrust = 0.0f;
      this->torque_x = 0.0f;
      this->torque_y = 0.0f;
      this->torque_z = 0.0f;
    }
  }

  explicit Control_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->thrust = 0.0f;
      this->torque_x = 0.0f;
      this->torque_y = 0.0f;
      this->torque_z = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _thrust_type =
    float;
  _thrust_type thrust;
  using _torque_x_type =
    float;
  _torque_x_type torque_x;
  using _torque_y_type =
    float;
  _torque_y_type torque_y;
  using _torque_z_type =
    float;
  _torque_z_type torque_z;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__thrust(
    const float & _arg)
  {
    this->thrust = _arg;
    return *this;
  }
  Type & set__torque_x(
    const float & _arg)
  {
    this->torque_x = _arg;
    return *this;
  }
  Type & set__torque_y(
    const float & _arg)
  {
    this->torque_y = _arg;
    return *this;
  }
  Type & set__torque_z(
    const float & _arg)
  {
    this->torque_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mujoco_msgs::msg::Control_<ContainerAllocator> *;
  using ConstRawPtr =
    const mujoco_msgs::msg::Control_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mujoco_msgs::msg::Control_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mujoco_msgs::msg::Control_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mujoco_msgs::msg::Control_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mujoco_msgs::msg::Control_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mujoco_msgs::msg::Control_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mujoco_msgs::msg::Control_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mujoco_msgs::msg::Control_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mujoco_msgs::msg::Control_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mujoco_msgs__msg__Control
    std::shared_ptr<mujoco_msgs::msg::Control_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mujoco_msgs__msg__Control
    std::shared_ptr<mujoco_msgs::msg::Control_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Control_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->thrust != other.thrust) {
      return false;
    }
    if (this->torque_x != other.torque_x) {
      return false;
    }
    if (this->torque_y != other.torque_y) {
      return false;
    }
    if (this->torque_z != other.torque_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Control_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Control_

// alias to use template instance with default allocator
using Control =
  mujoco_msgs::msg::Control_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mujoco_msgs

#endif  // MUJOCO_MSGS__MSG__DETAIL__CONTROL__STRUCT_HPP_
