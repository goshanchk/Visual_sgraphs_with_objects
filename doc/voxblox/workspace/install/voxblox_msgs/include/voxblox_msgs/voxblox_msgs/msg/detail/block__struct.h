// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voxblox_msgs:msg/Block.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/block.h"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__BLOCK__STRUCT_H_
#define VOXBLOX_MSGS__MSG__DETAIL__BLOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Block in the package voxblox_msgs.
/**
  * Block indices -- as integers, actual position in space is function of
  * the voxel_size in the layer and voxels_per_side in the layer.
 */
typedef struct voxblox_msgs__msg__Block
{
  int32_t x_index;
  int32_t y_index;
  int32_t z_index;
  /// Voxel data packed in 4-byte chunks to better mirror protobuf serialization.
  rosidl_runtime_c__uint32__Sequence data;
} voxblox_msgs__msg__Block;

// Struct for a sequence of voxblox_msgs__msg__Block.
typedef struct voxblox_msgs__msg__Block__Sequence
{
  voxblox_msgs__msg__Block * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voxblox_msgs__msg__Block__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__MSG__DETAIL__BLOCK__STRUCT_H_
