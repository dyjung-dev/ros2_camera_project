// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from best_camera_app_msgs:srv/ApplyRGBService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "best_camera_app_msgs/srv/detail/apply_rgb_service__rosidl_typesupport_introspection_c.h"
#include "best_camera_app_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "best_camera_app_msgs/srv/detail/apply_rgb_service__functions.h"
#include "best_camera_app_msgs/srv/detail/apply_rgb_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  best_camera_app_msgs__srv__ApplyRGBService_Request__init(message_memory);
}

void best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_fini_function(void * message_memory)
{
  best_camera_app_msgs__srv__ApplyRGBService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_member_array[3] = {
  {
    "r",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(best_camera_app_msgs__srv__ApplyRGBService_Request, r),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "g",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(best_camera_app_msgs__srv__ApplyRGBService_Request, g),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(best_camera_app_msgs__srv__ApplyRGBService_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_members = {
  "best_camera_app_msgs__srv",  // message namespace
  "ApplyRGBService_Request",  // message name
  3,  // number of fields
  sizeof(best_camera_app_msgs__srv__ApplyRGBService_Request),
  best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_member_array,  // message members
  best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_type_support_handle = {
  0,
  &best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_best_camera_app_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, best_camera_app_msgs, srv, ApplyRGBService_Request)() {
  if (!best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_type_support_handle.typesupport_identifier) {
    best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &best_camera_app_msgs__srv__ApplyRGBService_Request__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "best_camera_app_msgs/srv/detail/apply_rgb_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "best_camera_app_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "best_camera_app_msgs/srv/detail/apply_rgb_service__functions.h"
// already included above
// #include "best_camera_app_msgs/srv/detail/apply_rgb_service__struct.h"


// Include directives for member types
// Member `result`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  best_camera_app_msgs__srv__ApplyRGBService_Response__init(message_memory);
}

void best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_fini_function(void * message_memory)
{
  best_camera_app_msgs__srv__ApplyRGBService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(best_camera_app_msgs__srv__ApplyRGBService_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_members = {
  "best_camera_app_msgs__srv",  // message namespace
  "ApplyRGBService_Response",  // message name
  1,  // number of fields
  sizeof(best_camera_app_msgs__srv__ApplyRGBService_Response),
  best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_member_array,  // message members
  best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_type_support_handle = {
  0,
  &best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_best_camera_app_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, best_camera_app_msgs, srv, ApplyRGBService_Response)() {
  if (!best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_type_support_handle.typesupport_identifier) {
    best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &best_camera_app_msgs__srv__ApplyRGBService_Response__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "best_camera_app_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "best_camera_app_msgs/srv/detail/apply_rgb_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_service_members = {
  "best_camera_app_msgs__srv",  // service namespace
  "ApplyRGBService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_Request_message_type_support_handle,
  NULL  // response message
  // best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_Response_message_type_support_handle
};

static rosidl_service_type_support_t best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_service_type_support_handle = {
  0,
  &best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, best_camera_app_msgs, srv, ApplyRGBService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, best_camera_app_msgs, srv, ApplyRGBService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_best_camera_app_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, best_camera_app_msgs, srv, ApplyRGBService)() {
  if (!best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_service_type_support_handle.typesupport_identifier) {
    best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, best_camera_app_msgs, srv, ApplyRGBService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, best_camera_app_msgs, srv, ApplyRGBService_Response)()->data;
  }

  return &best_camera_app_msgs__srv__detail__apply_rgb_service__rosidl_typesupport_introspection_c__ApplyRGBService_service_type_support_handle;
}
