// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from best_camera_app_msgs:srv/CaptureService.idl
// generated code does not contain a copyright notice
#include "best_camera_app_msgs/srv/detail/capture_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "best_camera_app_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "best_camera_app_msgs/srv/detail/capture_service__struct.h"
#include "best_camera_app_msgs/srv/detail/capture_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CaptureService_Request__ros_msg_type = best_camera_app_msgs__srv__CaptureService_Request;

static bool _CaptureService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CaptureService_Request__ros_msg_type * ros_message = static_cast<const _CaptureService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: capture_true
  {
    cdr << (ros_message->capture_true ? true : false);
  }

  return true;
}

static bool _CaptureService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CaptureService_Request__ros_msg_type * ros_message = static_cast<_CaptureService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: capture_true
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->capture_true = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_best_camera_app_msgs
size_t get_serialized_size_best_camera_app_msgs__srv__CaptureService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CaptureService_Request__ros_msg_type * ros_message = static_cast<const _CaptureService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name capture_true
  {
    size_t item_size = sizeof(ros_message->capture_true);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CaptureService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_best_camera_app_msgs__srv__CaptureService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_best_camera_app_msgs
size_t max_serialized_size_best_camera_app_msgs__srv__CaptureService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: capture_true
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = best_camera_app_msgs__srv__CaptureService_Request;
    is_plain =
      (
      offsetof(DataType, capture_true) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CaptureService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_best_camera_app_msgs__srv__CaptureService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CaptureService_Request = {
  "best_camera_app_msgs::srv",
  "CaptureService_Request",
  _CaptureService_Request__cdr_serialize,
  _CaptureService_Request__cdr_deserialize,
  _CaptureService_Request__get_serialized_size,
  _CaptureService_Request__max_serialized_size
};

static rosidl_message_type_support_t _CaptureService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CaptureService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, best_camera_app_msgs, srv, CaptureService_Request)() {
  return &_CaptureService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "best_camera_app_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "best_camera_app_msgs/srv/detail/capture_service__struct.h"
// already included above
// #include "best_camera_app_msgs/srv/detail/capture_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // result_path
#include "rosidl_runtime_c/string_functions.h"  // result_path

// forward declare type support functions


using _CaptureService_Response__ros_msg_type = best_camera_app_msgs__srv__CaptureService_Response;

static bool _CaptureService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CaptureService_Response__ros_msg_type * ros_message = static_cast<const _CaptureService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result_path
  {
    const rosidl_runtime_c__String * str = &ros_message->result_path;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CaptureService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CaptureService_Response__ros_msg_type * ros_message = static_cast<_CaptureService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result_path
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->result_path.data) {
      rosidl_runtime_c__String__init(&ros_message->result_path);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->result_path,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'result_path'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_best_camera_app_msgs
size_t get_serialized_size_best_camera_app_msgs__srv__CaptureService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CaptureService_Response__ros_msg_type * ros_message = static_cast<const _CaptureService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->result_path.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CaptureService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_best_camera_app_msgs__srv__CaptureService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_best_camera_app_msgs
size_t max_serialized_size_best_camera_app_msgs__srv__CaptureService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result_path
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = best_camera_app_msgs__srv__CaptureService_Response;
    is_plain =
      (
      offsetof(DataType, result_path) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CaptureService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_best_camera_app_msgs__srv__CaptureService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CaptureService_Response = {
  "best_camera_app_msgs::srv",
  "CaptureService_Response",
  _CaptureService_Response__cdr_serialize,
  _CaptureService_Response__cdr_deserialize,
  _CaptureService_Response__get_serialized_size,
  _CaptureService_Response__max_serialized_size
};

static rosidl_message_type_support_t _CaptureService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CaptureService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, best_camera_app_msgs, srv, CaptureService_Response)() {
  return &_CaptureService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "best_camera_app_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "best_camera_app_msgs/srv/capture_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CaptureService__callbacks = {
  "best_camera_app_msgs::srv",
  "CaptureService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, best_camera_app_msgs, srv, CaptureService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, best_camera_app_msgs, srv, CaptureService_Response)(),
};

static rosidl_service_type_support_t CaptureService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CaptureService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, best_camera_app_msgs, srv, CaptureService)() {
  return &CaptureService__handle;
}

#if defined(__cplusplus)
}
#endif
