// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voxblox_msgs:msg/Block.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/block.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__BLOCK__BUILDER_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__BLOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voxblox_msgs/msg/detail/block__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voxblox_msgs
{

namespace msg
{

namespace builder
{

class Init_Block_data
{
public:
  explicit Init_Block_data(::voxblox_msgs::msg::Block & msg)
  : msg_(msg)
  {}
  ::voxblox_msgs::msg::Block data(::voxblox_msgs::msg::Block::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voxblox_msgs::msg::Block msg_;
};

class Init_Block_z_index
{
public:
  explicit Init_Block_z_index(::voxblox_msgs::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_data z_index(::voxblox_msgs::msg::Block::_z_index_type arg)
  {
    msg_.z_index = std::move(arg);
    return Init_Block_data(msg_);
  }

private:
  ::voxblox_msgs::msg::Block msg_;
};

class Init_Block_y_index
{
public:
  explicit Init_Block_y_index(::voxblox_msgs::msg::Block & msg)
  : msg_(msg)
  {}
  Init_Block_z_index y_index(::voxblox_msgs::msg::Block::_y_index_type arg)
  {
    msg_.y_index = std::move(arg);
    return Init_Block_z_index(msg_);
  }

private:
  ::voxblox_msgs::msg::Block msg_;
};

class Init_Block_x_index
{
public:
  Init_Block_x_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Block_y_index x_index(::voxblox_msgs::msg::Block::_x_index_type arg)
  {
    msg_.x_index = std::move(arg);
    return Init_Block_y_index(msg_);
  }

private:
  ::voxblox_msgs::msg::Block msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::voxblox_msgs::msg::Block>()
{
  return voxblox_msgs::msg::builder::Init_Block_x_index();
}

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__BLOCK__BUILDER_HPP_
