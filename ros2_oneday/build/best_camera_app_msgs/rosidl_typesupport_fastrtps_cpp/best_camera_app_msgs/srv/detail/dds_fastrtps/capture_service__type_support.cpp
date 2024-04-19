// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from best_camera_app_msgs:srv/CaptureService.idl
// generated code does not contain a copyright notice
#include "best_camera_app_msgs/srv/detail/capture_service__rosidl_typesupport_fastrtps_cpp.hpp"
#include "best_camera_app_msgs/srv/detail/capture_service__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace best_camera_app_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_best_camera_app_msgs
cdr_serialize(
  const best_camera_app_msgs::srv::CaptureService_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: capture_true
  cdr << (ros_message.capture_true ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_best_camera_app_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  best_camera_app_msgs::srv::CaptureService_Request & ros_message)
{
  // Member: capture_true
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.capture_true = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_best_camera_app_msgs
get_serialized_size(
  const best_camera_app_msgs::srv::CaptureService_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: capture_true
  {
    size_t item_size = sizeof(ros_message.capture_true);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_best_camera_app_msgs
max_serialized_size_CaptureService_Request(
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


  // Member: capture_true
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
    using DataType = best_camera_app_msgs::srv::CaptureService_Request;
    is_plain =
      (
      offsetof(DataType, capture_true) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CaptureService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const best_camera_app_msgs::srv::CaptureService_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CaptureService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<best_camera_app_msgs::srv::CaptureService_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CaptureService_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const best_camera_app_msgs::srv::CaptureService_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CaptureService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CaptureService_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CaptureService_Request__callbacks = {
  "best_camera_app_msgs::srv",
  "CaptureService_Request",
  _CaptureService_Request__cdr_serialize,
  _CaptureService_Request__cdr_deserialize,
  _CaptureService_Request__get_serialized_size,
  _CaptureService_Request__max_serialized_size
};

static rosidl_message_type_support_t _CaptureService_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CaptureService_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_best_camera_app_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<best_camera_app_msgs::srv::CaptureService_Request>()
{
  return &best_camera_app_msgs::srv::typesupport_fastrtps_cpp::_CaptureService_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, best_camera_app_msgs, srv, CaptureService_Request)() {
  return &best_camera_app_msgs::srv::typesupport_fastrtps_cpp::_CaptureService_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace best_camera_app_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_best_camera_app_msgs
cdr_serialize(
  const best_camera_app_msgs::srv::CaptureService_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result_path
  cdr << ros_message.result_path;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_best_camera_app_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  best_camera_app_msgs::srv::CaptureService_Response & ros_message)
{
  // Member: result_path
  cdr >> ros_message.result_path;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_best_camera_app_msgs
get_serialized_size(
  const best_camera_app_msgs::srv::CaptureService_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: result_path
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.result_path.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_best_camera_app_msgs
max_serialized_size_CaptureService_Response(
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


  // Member: result_path
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
    using DataType = best_camera_app_msgs::srv::CaptureService_Response;
    is_plain =
      (
      offsetof(DataType, result_path) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _CaptureService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const best_camera_app_msgs::srv::CaptureService_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CaptureService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<best_camera_app_msgs::srv::CaptureService_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CaptureService_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const best_camera_app_msgs::srv::CaptureService_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CaptureService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CaptureService_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CaptureService_Response__callbacks = {
  "best_camera_app_msgs::srv",
  "CaptureService_Response",
  _CaptureService_Response__cdr_serialize,
  _CaptureService_Response__cdr_deserialize,
  _CaptureService_Response__get_serialized_size,
  _CaptureService_Response__max_serialized_size
};

static rosidl_message_type_support_t _CaptureService_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CaptureService_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_best_camera_app_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<best_camera_app_msgs::srv::CaptureService_Response>()
{
  return &best_camera_app_msgs::srv::typesupport_fastrtps_cpp::_CaptureService_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, best_camera_app_msgs, srv, CaptureService_Response)() {
  return &best_camera_app_msgs::srv::typesupport_fastrtps_cpp::_CaptureService_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace best_camera_app_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CaptureService__callbacks = {
  "best_camera_app_msgs::srv",
  "CaptureService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, best_camera_app_msgs, srv, CaptureService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, best_camera_app_msgs, srv, CaptureService_Response)(),
};

static rosidl_service_type_support_t _CaptureService__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CaptureService__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_best_camera_app_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<best_camera_app_msgs::srv::CaptureService>()
{
  return &best_camera_app_msgs::srv::typesupport_fastrtps_cpp::_CaptureService__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, best_camera_app_msgs, srv, CaptureService)() {
  return &best_camera_app_msgs::srv::typesupport_fastrtps_cpp::_CaptureService__handle;
}

#ifdef __cplusplus
}
#endif
