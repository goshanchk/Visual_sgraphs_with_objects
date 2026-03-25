// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voxblox_msgs:msg/Layer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/layer.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__LAYER__BUILDER_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__LAYER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voxblox_msgs/msg/detail/layer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voxblox_msgs
{

namespace msg
{

namespace builder
{

class Init_Layer_blocks
{
public:
  explicit Init_Layer_blocks(::voxblox_msgs::msg::Layer & msg)
  : msg_(msg)
  {}
  ::voxblox_msgs::msg::Layer blocks(::voxblox_msgs::msg::Layer::_blocks_type arg)
  {
    msg_.blocks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voxblox_msgs::msg::Layer msg_;
};

class Init_Layer_action
{
public:
  explicit Init_Layer_action(::voxblox_msgs::msg::Layer & msg)
  : msg_(msg)
  {}
  Init_Layer_blocks action(::voxblox_msgs::msg::Layer::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Layer_blocks(msg_);
  }

private:
  ::voxblox_msgs::msg::Layer msg_;
};

class Init_Layer_layer_type
{
public:
  explicit Init_Layer_layer_type(::voxblox_msgs::msg::Layer & msg)
  : msg_(msg)
  {}
  Init_Layer_action layer_type(::voxblox_msgs::msg::Layer::_layer_type_type arg)
  {
    msg_.layer_type = std::move(arg);
    return Init_Layer_action(msg_);
  }

private:
  ::voxblox_msgs::msg::Layer msg_;
};

class Init_Layer_voxels_per_side
{
public:
  explicit Init_Layer_voxels_per_side(::voxblox_msgs::msg::Layer & msg)
  : msg_(msg)
  {}
  Init_Layer_layer_type voxels_per_side(::voxblox_msgs::msg::Layer::_voxels_per_side_type arg)
  {
    msg_.voxels_per_side = std::move(arg);
    return Init_Layer_layer_type(msg_);
  }

private:
  ::voxblox_msgs::msg::Layer msg_;
};

class Init_Layer_voxel_size
{
public:
  Init_Layer_voxel_size()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Layer_voxels_per_side voxel_size(::voxblox_msgs::msg::Layer::_voxel_size_type arg)
  {
    msg_.voxel_size = std::move(arg);
    return Init_Layer_voxels_per_side(msg_);
  }

private:
  ::voxblox_msgs::msg::Layer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::voxblox_msgs::msg::Layer>()
{
  return voxblox_msgs::msg::builder::Init_Layer_voxel_size();
}

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__LAYER__BUILDER_HPP_
