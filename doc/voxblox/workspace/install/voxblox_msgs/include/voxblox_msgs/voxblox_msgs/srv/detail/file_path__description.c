// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from voxblox_msgs:srv/FilePath.idl
// generated code does not contain a copyright notice

#include "voxblox_msgs/srv/detail/file_path__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__srv__FilePath__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3a, 0x05, 0x60, 0x93, 0x19, 0x8f, 0x9b, 0x3b,
      0xb8, 0x77, 0x79, 0xb8, 0xd0, 0x36, 0x4b, 0x33,
      0xae, 0x97, 0x64, 0x2b, 0xb8, 0x8d, 0x7b, 0xa0,
      0x5a, 0x04, 0xe5, 0xbf, 0x9e, 0xf2, 0x6e, 0x31,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__srv__FilePath_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7c, 0x23, 0x8c, 0xae, 0x30, 0xf0, 0x32, 0x1c,
      0x22, 0xea, 0x1e, 0x7a, 0x63, 0x38, 0x5f, 0x3d,
      0x2d, 0x01, 0x39, 0x99, 0xb8, 0xbe, 0x42, 0xd3,
      0x25, 0x34, 0x93, 0x48, 0xcb, 0x03, 0xe8, 0x01,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__srv__FilePath_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0xc2, 0x0f, 0xee, 0xf3, 0x74, 0xb8, 0x49,
      0x33, 0xcb, 0xcd, 0xa3, 0x83, 0x6b, 0x39, 0xe6,
      0x8e, 0x8b, 0xbb, 0x6f, 0xa6, 0xc1, 0x43, 0xfc,
      0x3f, 0xac, 0x33, 0x32, 0xfb, 0x4d, 0x63, 0xb3,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_voxblox_msgs
const rosidl_type_hash_t *
voxblox_msgs__srv__FilePath_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x39, 0x60, 0xf4, 0x60, 0x5c, 0xd6, 0xd4,
      0xbf, 0x49, 0xf5, 0x12, 0x08, 0x8d, 0x5a, 0xe1,
      0x32, 0x24, 0x1b, 0x2d, 0xe3, 0xa8, 0xee, 0x27,
      0x65, 0x6f, 0x8b, 0xbf, 0x10, 0xbb, 0x31, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char voxblox_msgs__srv__FilePath__TYPE_NAME[] = "voxblox_msgs/srv/FilePath";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char voxblox_msgs__srv__FilePath_Event__TYPE_NAME[] = "voxblox_msgs/srv/FilePath_Event";
static char voxblox_msgs__srv__FilePath_Request__TYPE_NAME[] = "voxblox_msgs/srv/FilePath_Request";
static char voxblox_msgs__srv__FilePath_Response__TYPE_NAME[] = "voxblox_msgs/srv/FilePath_Response";

// Define type names, field names, and default values
static char voxblox_msgs__srv__FilePath__FIELD_NAME__request_message[] = "request_message";
static char voxblox_msgs__srv__FilePath__FIELD_NAME__response_message[] = "response_message";
static char voxblox_msgs__srv__FilePath__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field voxblox_msgs__srv__FilePath__FIELDS[] = {
  {
    {voxblox_msgs__srv__FilePath__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {voxblox_msgs__srv__FilePath_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {voxblox_msgs__srv__FilePath_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {voxblox_msgs__srv__FilePath_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription voxblox_msgs__srv__FilePath__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__srv__FilePath__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__srv__FilePath__TYPE_NAME, 25, 25},
      {voxblox_msgs__srv__FilePath__FIELDS, 3, 3},
    },
    {voxblox_msgs__srv__FilePath__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = voxblox_msgs__srv__FilePath_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = voxblox_msgs__srv__FilePath_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = voxblox_msgs__srv__FilePath_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char voxblox_msgs__srv__FilePath_Request__FIELD_NAME__file_path[] = "file_path";

static rosidl_runtime_c__type_description__Field voxblox_msgs__srv__FilePath_Request__FIELDS[] = {
  {
    {voxblox_msgs__srv__FilePath_Request__FIELD_NAME__file_path, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__srv__FilePath_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__srv__FilePath_Request__TYPE_NAME, 33, 33},
      {voxblox_msgs__srv__FilePath_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char voxblox_msgs__srv__FilePath_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field voxblox_msgs__srv__FilePath_Response__FIELDS[] = {
  {
    {voxblox_msgs__srv__FilePath_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__srv__FilePath_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__srv__FilePath_Response__TYPE_NAME, 34, 34},
      {voxblox_msgs__srv__FilePath_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char voxblox_msgs__srv__FilePath_Event__FIELD_NAME__info[] = "info";
static char voxblox_msgs__srv__FilePath_Event__FIELD_NAME__request[] = "request";
static char voxblox_msgs__srv__FilePath_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field voxblox_msgs__srv__FilePath_Event__FIELDS[] = {
  {
    {voxblox_msgs__srv__FilePath_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {voxblox_msgs__srv__FilePath_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {voxblox_msgs__srv__FilePath_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription voxblox_msgs__srv__FilePath_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {voxblox_msgs__srv__FilePath_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
voxblox_msgs__srv__FilePath_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {voxblox_msgs__srv__FilePath_Event__TYPE_NAME, 31, 31},
      {voxblox_msgs__srv__FilePath_Event__FIELDS, 3, 3},
    },
    {voxblox_msgs__srv__FilePath_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = voxblox_msgs__srv__FilePath_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = voxblox_msgs__srv__FilePath_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string file_path\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__srv__FilePath__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__srv__FilePath__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 21, 21},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__srv__FilePath_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__srv__FilePath_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__srv__FilePath_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__srv__FilePath_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
voxblox_msgs__srv__FilePath_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {voxblox_msgs__srv__FilePath_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__srv__FilePath__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__srv__FilePath__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *voxblox_msgs__srv__FilePath_Event__get_individual_type_description_source(NULL);
    sources[4] = *voxblox_msgs__srv__FilePath_Request__get_individual_type_description_source(NULL);
    sources[5] = *voxblox_msgs__srv__FilePath_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__srv__FilePath_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__srv__FilePath_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__srv__FilePath_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__srv__FilePath_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
voxblox_msgs__srv__FilePath_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *voxblox_msgs__srv__FilePath_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *voxblox_msgs__srv__FilePath_Request__get_individual_type_description_source(NULL);
    sources[4] = *voxblox_msgs__srv__FilePath_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
