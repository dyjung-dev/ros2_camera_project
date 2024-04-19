// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from best_camera_app_msgs:srv/CaptureService.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "best_camera_app_msgs/srv/detail/capture_service__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace best_camera_app_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CaptureService_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureService_Request_type_support_ids_t;

static const _CaptureService_Request_type_support_ids_t _CaptureService_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CaptureService_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureService_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureService_Request_type_support_symbol_names_t _CaptureService_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, best_camera_app_msgs, srv, CaptureService_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, best_camera_app_msgs, srv, CaptureService_Request)),
  }
};

typedef struct _CaptureService_Request_type_support_data_t
{
  void * data[2];
} _CaptureService_Request_type_support_data_t;

static _CaptureService_Request_type_support_data_t _CaptureService_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureService_Request_message_typesupport_map = {
  2,
  "best_camera_app_msgs",
  &_CaptureService_Request_message_typesupport_ids.typesupport_identifier[0],
  &_CaptureService_Request_message_typesupport_symbol_names.symbol_name[0],
  &_CaptureService_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CaptureService_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureService_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<best_camera_app_msgs::srv::CaptureService_Request>()
{
  return &::best_camera_app_msgs::srv::rosidl_typesupport_cpp::CaptureService_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, best_camera_app_msgs, srv, CaptureService_Request)() {
  return get_message_type_support_handle<best_camera_app_msgs::srv::CaptureService_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "best_camera_app_msgs/srv/detail/capture_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace best_camera_app_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CaptureService_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureService_Response_type_support_ids_t;

static const _CaptureService_Response_type_support_ids_t _CaptureService_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CaptureService_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureService_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureService_Response_type_support_symbol_names_t _CaptureService_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, best_camera_app_msgs, srv, CaptureService_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, best_camera_app_msgs, srv, CaptureService_Response)),
  }
};

typedef struct _CaptureService_Response_type_support_data_t
{
  void * data[2];
} _CaptureService_Response_type_support_data_t;

static _CaptureService_Response_type_support_data_t _CaptureService_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureService_Response_message_typesupport_map = {
  2,
  "best_camera_app_msgs",
  &_CaptureService_Response_message_typesupport_ids.typesupport_identifier[0],
  &_CaptureService_Response_message_typesupport_symbol_names.symbol_name[0],
  &_CaptureService_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t CaptureService_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureService_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<best_camera_app_msgs::srv::CaptureService_Response>()
{
  return &::best_camera_app_msgs::srv::rosidl_typesupport_cpp::CaptureService_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, best_camera_app_msgs, srv, CaptureService_Response)() {
  return get_message_type_support_handle<best_camera_app_msgs::srv::CaptureService_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "best_camera_app_msgs/srv/detail/capture_service__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace best_camera_app_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _CaptureService_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _CaptureService_type_support_ids_t;

static const _CaptureService_type_support_ids_t _CaptureService_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _CaptureService_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _CaptureService_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _CaptureService_type_support_symbol_names_t _CaptureService_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, best_camera_app_msgs, srv, CaptureService)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, best_camera_app_msgs, srv, CaptureService)),
  }
};

typedef struct _CaptureService_type_support_data_t
{
  void * data[2];
} _CaptureService_type_support_data_t;

static _CaptureService_type_support_data_t _CaptureService_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _CaptureService_service_typesupport_map = {
  2,
  "best_camera_app_msgs",
  &_CaptureService_service_typesupport_ids.typesupport_identifier[0],
  &_CaptureService_service_typesupport_symbol_names.symbol_name[0],
  &_CaptureService_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t CaptureService_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_CaptureService_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<best_camera_app_msgs::srv::CaptureService>()
{
  return &::best_camera_app_msgs::srv::rosidl_typesupport_cpp::CaptureService_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
