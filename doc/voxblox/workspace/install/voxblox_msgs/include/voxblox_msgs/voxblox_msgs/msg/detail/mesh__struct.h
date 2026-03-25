// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voxblox_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/mesh.h"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH__STRUCT_H_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH__STRUCT_H_

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
// Member 'mesh_blocks'
#include "voxblox_msgs/msg/detail/mesh_block__struct.h"

/// Struct defined in msg/Mesh in the package voxblox_msgs.
/**
  * vertex positions rounded to nearest BLOCK_EDGE_LENGTH/65535 
  * no alpha information
 */
typedef struct voxblox_msgs__msg__Mesh
{
  std_msgs__msg__Header header;
  float block_edge_length;
  voxblox_msgs__msg__MeshBlock__Sequence mesh_blocks;
} voxblox_msgs__msg__Mesh;

// Struct for a sequence of voxblox_msgs__msg__Mesh.
typedef struct voxblox_msgs__msg__Mesh__Sequence
{
  voxblox_msgs__msg__Mesh * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voxblox_msgs__msg__Mesh__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH__STRUCT_H_
