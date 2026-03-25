// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voxblox_msgs:msg/Mesh.idl
// generated code does not contain a copyright notice

#include "voxblox_msgs/msg/detail/mesh__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__msg__Mesh__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x1a, 0xfd, 0x04, 0xbd, 0x3a, 0x00, 0x1a,
      0x37, 0x55, 0x10, 0x36, 0x5f, 0xf6, 0x5c, 0xbc,
      0x68, 0xec, 0x25, 0x19, 0x53, 0xe0, 0x62, 0x2b,
      0x6b, 0x9f, 0x6d, 0xed, 0x57, 0x7e, 0x52, 0x26,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "voxblox_msgs/msg/detail/mesh_block__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
static const rosidl_type_hash_t voxblox_msgs__msg__MeshBlock__EXPECTED_HASH = {1, {
    0x38, 0x4a, 0xea, 0x49, 0x3a, 0x21, 0xe6, 0x23,
    0xdf, 0xdb, 0xc2, 0x4f, 0x72, 0x28, 0x95, 0x82,
    0xf4, 0x92, 0xc6, 0x33, 0xdb, 0x60, 0x20, 0x9a,
    0xba, 0xdc, 0xf8, 0x68, 0xc9, 0xac, 0x6a, 0x56,
  }};
#endif

static char voxblox_msgs__msg__Mesh__TYPE_NAME[] = "voxblox_msgs/msg/Mesh";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";
static char voxblox_msgs__msg__MeshBlock__TYPE_NAME[] = "voxblox_msgs/msg/MeshBlock";

// Define type names, field names, and default values
static char voxblox_msgs__msg__Mesh__FIELD_NAME__header[] = "header";
static char voxblox_msgs__msg__Mesh__FIELD_NAME__block_edge_length[] = "block_edge_length";
static char voxblox_msgs__msg__Mesh__FIELD_NAME__mesh_blocks[] = "mesh_blocks";

static rosidl_runtime_c__type_description__Field voxblox_msgs__msg__Mesh__FIELDS[] = {
  {
    {voxblox_msgs__msg__Mesh__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Mesh__FIELD_NAME__block_edge_length, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__Mesh__FIELD_NAME__mesh_blocks, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {voxblox_msgs__msg__MeshBlock__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription voxblox_msgs__msg__Mesh__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__msg__MeshBlock__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__msg__Mesh__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__msg__Mesh__TYPE_NAME, 21, 21},
      {voxblox_msgs__msg__Mesh__FIELDS, 3, 3},
    },
    {voxblox_msgs__msg__Mesh__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&voxblox_msgs__msg__MeshBlock__EXPECTED_HASH, voxblox_msgs__msg__MeshBlock__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = voxblox_msgs__msg__MeshBlock__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# vertex positions rounded to nearest BLOCK_EDGE_LENGTH/65535 \n"
  "# no alpha information\n"
  "\n"
  "std_msgs/Header header\n"
  "\n"
  "float32 block_edge_length\n"
  "\n"
  "voxblox_msgs/MeshBlock[] mesh_blocks";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__msg__Mesh__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__msg__Mesh__TYPE_NAME, 21, 21},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 175, 175},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__msg__Mesh__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__msg__Mesh__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    sources[3] = *voxblox_msgs__msg__MeshBlock__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
