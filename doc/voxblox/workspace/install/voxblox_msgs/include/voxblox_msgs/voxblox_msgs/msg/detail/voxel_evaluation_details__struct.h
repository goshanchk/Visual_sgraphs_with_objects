// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from voxblox_msgs:msg/VoxelEvaluationDetails.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "voxblox_msgs/msg/voxel_evaluation_details.h"


#ifndef VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__STRUCT_H_
#define VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/VoxelEvaluationDetails in the package voxblox_msgs.
typedef struct voxblox_msgs__msg__VoxelEvaluationDetails
{
  double max_error;
  double min_error;
  uint32_t num_evaluated_voxels;
  uint32_t num_ignored_voxels;
  uint32_t num_overlapping_voxels;
  uint32_t num_non_overlapping_voxels;
} voxblox_msgs__msg__VoxelEvaluationDetails;

// Struct for a sequence of voxblox_msgs__msg__VoxelEvaluationDetails.
typedef struct voxblox_msgs__msg__VoxelEvaluationDetails__Sequence
{
  voxblox_msgs__msg__VoxelEvaluationDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} voxblox_msgs__msg__VoxelEvaluationDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VOXBLOX_MSGS__MSG__DETAIL__VOXEL_EVALUATION_DETAILS__STRUCT_H_
