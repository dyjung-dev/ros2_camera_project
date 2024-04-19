// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from best_camera_app_msgs:srv/CameraCapture.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAMERA_CAPTURE__STRUCT_H_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAMERA_CAPTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CameraCapture in the package best_camera_app_msgs.
typedef struct best_camera_app_msgs__srv__CameraCapture_Request
{
  int64_t num;
} best_camera_app_msgs__srv__CameraCapture_Request;

// Struct for a sequence of best_camera_app_msgs__srv__CameraCapture_Request.
typedef struct best_camera_app_msgs__srv__CameraCapture_Request__Sequence
{
  best_camera_app_msgs__srv__CameraCapture_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} best_camera_app_msgs__srv__CameraCapture_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CameraCapture in the package best_camera_app_msgs.
typedef struct best_camera_app_msgs__srv__CameraCapture_Response
{
  int64_t result;
} best_camera_app_msgs__srv__CameraCapture_Response;

// Struct for a sequence of best_camera_app_msgs__srv__CameraCapture_Response.
typedef struct best_camera_app_msgs__srv__CameraCapture_Response__Sequence
{
  best_camera_app_msgs__srv__CameraCapture_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} best_camera_app_msgs__srv__CameraCapture_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__CAMERA_CAPTURE__STRUCT_H_
