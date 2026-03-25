// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voxblox_msgs:msg/VoxelEvaluationDetails.idl
// generated code does not contain a copyright notice

#include "voxblox_msgs/msg/detail/voxel_evaluation_details__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__msg__VoxelEvaluationDetails__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x55, 0x27, 0xc3, 0x3e, 0x0d, 0x01, 0x03, 0x2d,
      0x1f, 0xe7, 0x11, 0x53, 0x0b, 0x2c, 0x5e, 0xbe,
      0xab, 0x9b, 0xd2, 0x14, 0xf0, 0xe3, 0x06, 0xfe,
      0x1b, 0x88, 0xb7, 0x9b, 0x19, 0x35, 0xf6, 0xbc,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char voxblox_msgs__msg__VoxelEvaluationDetails__TYPE_NAME[] = "voxblox_msgs/msg/VoxelEvaluationDetails";

// Define type names, field names, and default values
static char voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__max_error[] = "max_error";
static char voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__min_error[] = "min_error";
static char voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__num_evaluated_voxels[] = "num_evaluated_voxels";
static char voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__num_ignored_voxels[] = "num_ignored_voxels";
static char voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__num_overlapping_voxels[] = "num_overlapping_voxels";
static char voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__num_non_overlapping_voxels[] = "num_non_overlapping_voxels";

static rosidl_runtime_c__type_description__Field voxblox_msgs__msg__VoxelEvaluationDetails__FIELDS[] = {
  {
    {voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__max_error, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__min_error, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__num_evaluated_voxels, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__num_ignored_voxels, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__num_overlapping_voxels, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__VoxelEvaluationDetails__FIELD_NAME__num_non_overlapping_voxels, 26, 26},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__msg__VoxelEvaluationDetails__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__msg__VoxelEvaluationDetails__TYPE_NAME, 39, 39},
      {voxblox_msgs__msg__VoxelEvaluationDetails__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 max_error\n"
  "float64 min_error\n"
  "uint32 num_evaluated_voxels\n"
  "uint32 num_ignored_voxels\n"
  "uint32 num_overlapping_voxels\n"
  "uint32 num_non_overlapping_voxels";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__msg__VoxelEvaluationDetails__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__msg__VoxelEvaluationDetails__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 154, 154},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__msg__VoxelEvaluationDetails__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__msg__VoxelEvaluationDetails__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
