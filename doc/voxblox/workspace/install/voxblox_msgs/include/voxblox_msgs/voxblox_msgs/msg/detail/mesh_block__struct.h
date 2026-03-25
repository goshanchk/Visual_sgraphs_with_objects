// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voxblox_msgs:msg/MeshBlock.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/mesh_block.h"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__STRUCT_H_
#define VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'x'
// Member 'y'
// Member 'z'
// Member 'r'
// Member 'g'
// Member 'b'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/MeshBlock in the package voxblox_msgs.
/**
  * vertex positions rounded to nearest BLOCK_EDGE_LENGTH/65535 
  * no alpha information
 */
typedef struct voxblox_msgs__msg__MeshBlock
{
  /// Index of meshed points in block map
  int64_t index[3];
  /// Triangle information (always in groups of 3)
  rosidl_runtime_c__uint16__Sequence x;
  rosidl_runtime_c__uint16__Sequence y;
  rosidl_runtime_c__uint16__Sequence z;
  /// Color information may be missing
  rosidl_runtime_c__uint8__Sequence r;
  rosidl_runtime_c__uint8__Sequence g;
  rosidl_runtime_c__uint8__Sequence b;
} voxblox_msgs__msg__MeshBlock;

// Struct for a sequence of voxblox_msgs__msg__MeshBlock.
typedef struct voxblox_msgs__msg__MeshBlock__Sequence
{
  voxblox_msgs__msg__MeshBlock * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voxblox_msgs__msg__MeshBlock__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__MSG__DETAIL__MESH_BLOCK__STRUCT_H_
