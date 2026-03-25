// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voxblox_msgs:msg/Layer.idl
// generated code does not contain a copyright notice

#include "voxblox_msgs/msg/detail/layer__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__msg__Layer__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x04, 0xb1, 0x69, 0x1b, 0x41, 0x22, 0x0b, 0xe9,
      0x91, 0xe4, 0x5d, 0x31, 0xfe, 0xcc, 0x8a, 0x22,
      0xe5, 0x35, 0x5e, 0xcd, 0xe6, 0xeb, 0xd9, 0x49,
      0xe9, 0x3c, 0x28, 0xc1, 0x73, 0xc3, 0x1a, 0xac,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "voxblox_msgs/msg/detail/block__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t voxblox_msgs__msg__Block__EXPECTED_HASH = {1, {
    0x08, 0x73, 0x86, 0x34, 0xcf, 0x64, 0x12, 0x9e,
    0xd7, 0x49, 0xca, 0x21, 0x70, 0x10, 0x37, 0x67,
    0x2a, 0xd7, 0x68, 0xf8, 0xc9, 0x3d, 0x8b, 0x33,
    0x28, 0xeb, 0x2c, 0x60, 0xb1, 0x4b, 0xdb, 0x29,
  }};
#endif

static char voxblox_msgs__msg__Layer__TYPE_NAME[] = "voxblox_msgs/msg/Layer";
static char voxblox_msgs__msg__Block__TYPE_NAME[] = "voxblox_msgs/msg/Block";

// Define type names, field names, and default values
static char voxblox_msgs__msg__Layer__FIELD_NAME__voxel_size[] = "voxel_size";
static char voxblox_msgs__msg__Layer__FIELD_NAME__voxels_per_side[] = "voxels_per_side";
static char voxblox_msgs__msg__Layer__FIELD_NAME__layer_type[] = "layer_type";
static char voxblox_msgs__msg__Layer__FIELD_NAME__action[] = "action";
static char voxblox_msgs__msg__Layer__FIELD_NAME__blocks[] = "blocks";

static rosidl_runtime_c__type_description__Field voxblox_msgs__msg__Layer__FIELDS[] = {
  {
    {voxblox_msgs__msg__Layer__FIELD_NAME__voxel_size, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Layer__FIELD_NAME__voxels_per_side, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Layer__FIELD_NAME__layer_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Layer__FIELD_NAME__action, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Layer__FIELD_NAME__blocks, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {voxblox_msgs__msg__Block__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription voxblox_msgs__msg__Layer__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {voxblox_msgs__msg__Block__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__msg__Layer__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__msg__Layer__TYPE_NAME, 22, 22},
      {voxblox_msgs__msg__Layer__FIELDS, 5, 5},
    },
    {voxblox_msgs__msg__Layer__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&voxblox_msgs__msg__Block__EXPECTED_HASH, voxblox_msgs__msg__Block__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = voxblox_msgs__msg__Block__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Layer definitions\n"
  "float64 voxel_size\n"
  "uint32 voxels_per_side\n"
  "string layer_type  # See voxblox::voxel_types\n"
  "\n"
  "# Whether to send a full map or an incremental update.\n"
  "uint8 action   # See action defines below\n"
  "\n"
  "voxblox_msgs/Block[] blocks\n"
  "\n"
  "# Action definitions\n"
  "# Update all blocks that are part of this message to the new state,\n"
  "# leave the rest of the map as it was.\n"
  "uint8 ACTION_UPDATE = 0\n"
  "# Merge all blocks that are part of this message with the current state of\n"
  "# the map, leave the rest of the map as it was.\n"
  "uint8 ACTION_MERGE = 1\n"
  "# Set the layer to the state described by this message.\n"
  "uint8 ACTION_RESET = 2";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__msg__Layer__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__msg__Layer__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 613, 613},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__msg__Layer__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__msg__Layer__get_individual_type_description_source(NULL),
    sources[1] = *voxblox_msgs__msg__Block__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
