// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voxblox_msgs:msg/Layer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/layer.h"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__LAYER__STRUCT_H_
#define VOXBLOX_MSGS__MSG__DETAIL__LAYER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ACTION_UPDATE'.
/**
  * Action definitions
  * Update all blocks that are part of this message to the new state,
  * leave the rest of the map as it was.
 */
enum
{
  voxblox_msgs__msg__Layer__ACTION_UPDATE = 0
};

/// Constant 'ACTION_MERGE'.
/**
  * Merge all blocks that are part of this message with the current state of
  * the map, leave the rest of the map as it was.
 */
enum
{
  voxblox_msgs__msg__Layer__ACTION_MERGE = 1
};

/// Constant 'ACTION_RESET'.
/**
  * Set the layer to the state described by this message.
 */
enum
{
  voxblox_msgs__msg__Layer__ACTION_RESET = 2
};

// Include directives for member types
// Member 'layer_type'
#include "rosidl_runtime_c/string.h"
// Member 'blocks'
#include "voxblox_msgs/msg/detail/block__struct.h"

/// Struct defined in msg/Layer in the package voxblox_msgs.
/**
  * Layer definitions
 */
typedef struct voxblox_msgs__msg__Layer
{
  double voxel_size;
  uint32_t voxels_per_side;
  /// See voxblox::voxel_types
  rosidl_runtime_c__String layer_type;
  /// Whether to send a full map or an incremental update.
  /// See action defines below
  uint8_t action;
  voxblox_msgs__msg__Block__Sequence blocks;
} voxblox_msgs__msg__Layer;

// Struct for a sequence of voxblox_msgs__msg__Layer.
typedef struct voxblox_msgs__msg__Layer__Sequence
{
  voxblox_msgs__msg__Layer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voxblox_msgs__msg__Layer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__MSG__DETAIL__LAYER__STRUCT_H_
