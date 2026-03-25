// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voxblox_msgs:msg/MeshBlock.idl
// generated code does not contain a copyright notice

#include "voxblox_msgs/msg/detail/mesh_block__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__msg__MeshBlock__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x38, 0x4a, 0xea, 0x49, 0x3a, 0x21, 0xe6, 0x23,
      0xdf, 0xdb, 0xc2, 0x4f, 0x72, 0x28, 0x95, 0x82,
      0xf4, 0x92, 0xc6, 0x33, 0xdb, 0x60, 0x20, 0x9a,
      0xba, 0xdc, 0xf8, 0x68, 0xc9, 0xac, 0x6a, 0x56,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char voxblox_msgs__msg__MeshBlock__TYPE_NAME[] = "voxblox_msgs/msg/MeshBlock";

// Define type names, field names, and default values
static char voxblox_msgs__msg__MeshBlock__FIELD_NAME__index[] = "index";
static char voxblox_msgs__msg__MeshBlock__FIELD_NAME__x[] = "x";
static char voxblox_msgs__msg__MeshBlock__FIELD_NAME__y[] = "y";
static char voxblox_msgs__msg__MeshBlock__FIELD_NAME__z[] = "z";
static char voxblox_msgs__msg__MeshBlock__FIELD_NAME__r[] = "r";
static char voxblox_msgs__msg__MeshBlock__FIELD_NAME__g[] = "g";
static char voxblox_msgs__msg__MeshBlock__FIELD_NAME__b[] = "b";

static rosidl_runtime_c__type_description__Field voxblox_msgs__msg__MeshBlock__FIELDS[] = {
  {
    {voxblox_msgs__msg__MeshBlock__FIELD_NAME__index, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__MeshBlock__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__MeshBlock__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__MeshBlock__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__MeshBlock__FIELD_NAME__r, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__MeshBlock__FIELD_NAME__g, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__MeshBlock__FIELD_NAME__b, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__msg__MeshBlock__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__msg__MeshBlock__TYPE_NAME, 26, 26},
      {voxblox_msgs__msg__MeshBlock__FIELDS, 7, 7},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# vertex positions rounded to nearest BLOCK_EDGE_LENGTH/65535 \n"
  "# no alpha information\n"
  "\n"
  "# Index of meshed points in block map\n"
  "int64[3] index\n"
  "\n"
  "# Triangle information (always in groups of 3)\n"
  "uint16[] x\n"
  "uint16[] y\n"
  "uint16[] z\n"
  "\n"
  "# Color information may be missing\n"
  "uint8[] r\n"
  "uint8[] g\n"
  "uint8[] b";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__msg__MeshBlock__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__msg__MeshBlock__TYPE_NAME, 26, 26},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 286, 286},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__msg__MeshBlock__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__msg__MeshBlock__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
