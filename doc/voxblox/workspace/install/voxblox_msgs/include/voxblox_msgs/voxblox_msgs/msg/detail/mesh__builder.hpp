// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from voxblox_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/mesh.hpp"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "voxblox_msgs/msg/detail/mesh__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace voxblox_msgs
{

namespace msg
{

namespace builder
{

class Init_Mesh_mesh_blocks
{
public:
  explicit Init_Mesh_mesh_blocks(::voxblox_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  ::voxblox_msgs::msg::Mesh mesh_blocks(::voxblox_msgs::msg::Mesh::_mesh_blocks_type arg)
  {
    msg_.mesh_blocks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::voxblox_msgs::msg::Mesh msg_;
};

class Init_Mesh_block_edge_length
{
public:
  explicit Init_Mesh_block_edge_length(::voxblox_msgs::msg::Mesh & msg)
  : msg_(msg)
  {}
  Init_Mesh_mesh_blocks block_edge_length(::voxblox_msgs::msg::Mesh::_block_edge_length_type arg)
  {
    msg_.block_edge_length = std::move(arg);
    return Init_Mesh_mesh_blocks(msg_);
  }

private:
  ::voxblox_msgs::msg::Mesh msg_;
};

class Init_Mesh_header
{
public:
  Init_Mesh_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mesh_block_edge_length header(::voxblox_msgs::msg::Mesh::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Mesh_block_edge_length(msg_);
  }

private:
  ::voxblox_msgs::msg::Mesh msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::voxblox_msgs::msg::Mesh>()
{
  return voxblox_msgs::msg::builder::Init_Mesh_header();
}

}  // namespace voxblox_msgs

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH__BUILDER_HPP_
