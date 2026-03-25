// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voxblox_msgs:msg/MeshBlock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/mesh_block.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__BUILDER_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voxblox_msgs/msg/detail/mesh_block__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voxblox_msgs
{

namespace msg
{

namespace builder
{

class Init_MeshBlock_b
{
public:
  explicit Init_MeshBlock_b(::voxblox_msgs::msg::MeshBlock & msg)
  : msg_(msg)
  {}
  ::voxblox_msgs::msg::MeshBlock b(::voxblox_msgs::msg::MeshBlock::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voxblox_msgs::msg::MeshBlock msg_;
};

class Init_MeshBlock_g
{
public:
  explicit Init_MeshBlock_g(::voxblox_msgs::msg::MeshBlock & msg)
  : msg_(msg)
  {}
  Init_MeshBlock_b g(::voxblox_msgs::msg::MeshBlock::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_MeshBlock_b(msg_);
  }

private:
  ::voxblox_msgs::msg::MeshBlock msg_;
};

class Init_MeshBlock_r
{
public:
  explicit Init_MeshBlock_r(::voxblox_msgs::msg::MeshBlock & msg)
  : msg_(msg)
  {}
  Init_MeshBlock_g r(::voxblox_msgs::msg::MeshBlock::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_MeshBlock_g(msg_);
  }

private:
  ::voxblox_msgs::msg::MeshBlock msg_;
};

class Init_MeshBlock_z
{
public:
  explicit Init_MeshBlock_z(::voxblox_msgs::msg::MeshBlock & msg)
  : msg_(msg)
  {}
  Init_MeshBlock_r z(::voxblox_msgs::msg::MeshBlock::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MeshBlock_r(msg_);
  }

private:
  ::voxblox_msgs::msg::MeshBlock msg_;
};

class Init_MeshBlock_y
{
public:
  explicit Init_MeshBlock_y(::voxblox_msgs::msg::MeshBlock & msg)
  : msg_(msg)
  {}
  Init_MeshBlock_z y(::voxblox_msgs::msg::MeshBlock::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MeshBlock_z(msg_);
  }

private:
  ::voxblox_msgs::msg::MeshBlock msg_;
};

class Init_MeshBlock_x
{
public:
  explicit Init_MeshBlock_x(::voxblox_msgs::msg::MeshBlock & msg)
  : msg_(msg)
  {}
  Init_MeshBlock_y x(::voxblox_msgs::msg::MeshBlock::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MeshBlock_y(msg_);
  }

private:
  ::voxblox_msgs::msg::MeshBlock msg_;
};

class Init_MeshBlock_index
{
public:
  Init_MeshBlock_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MeshBlock_x index(::voxblox_msgs::msg::MeshBlock::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_MeshBlock_x(msg_);
  }

private:
  ::voxblox_msgs::msg::MeshBlock msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::voxblox_msgs::msg::MeshBlock>()
{
  return voxblox_msgs::msg::builder::Init_MeshBlock_index();
}

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__BUILDER_HPP_
