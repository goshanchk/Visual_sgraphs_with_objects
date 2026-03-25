// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voxblox_msgs:msg/Block.idl
// generated code does not contain a copyright notice

#include "voxblox_msgs/msg/detail/block__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__msg__Block__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0x73, 0x86, 0x34, 0xcf, 0x64, 0x12, 0x9e,
      0xd7, 0x49, 0xca, 0x21, 0x70, 0x10, 0x37, 0x67,
      0x2a, 0xd7, 0x68, 0xf8, 0xc9, 0x3d, 0x8b, 0x33,
      0x28, 0xeb, 0x2c, 0x60, 0xb1, 0x4b, 0xdb, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char voxblox_msgs__msg__Block__TYPE_NAME[] = "voxblox_msgs/msg/Block";

// Define type names, field names, and default values
static char voxblox_msgs__msg__Block__FIELD_NAME__x_index[] = "x_index";
static char voxblox_msgs__msg__Block__FIELD_NAME__y_index[] = "y_index";
static char voxblox_msgs__msg__Block__FIELD_NAME__z_index[] = "z_index";
static char voxblox_msgs__msg__Block__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field voxblox_msgs__msg__Block__FIELDS[] = {
  {
    {voxblox_msgs__msg__Block__FIELD_NAME__x_index, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Block__FIELD_NAME__y_index, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Block__FIELD_NAME__z_index, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Block__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__msg__Block__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__msg__Block__TYPE_NAME, 22, 22},
      {voxblox_msgs__msg__Block__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Block indices -- as integers, actual position in space is function of\n"
  "# the voxel_size in the layer and voxels_per_side in the layer.\n"
  "int32 x_index\n"
  "int32 y_index\n"
  "int32 z_index\n"
  "\n"
  "# Voxel data packed in 4-byte chunks to better mirror protobuf serialization.\n"
  "uint32[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__msg__Block__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__msg__Block__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 271, 271},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__msg__Block__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__msg__Block__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
