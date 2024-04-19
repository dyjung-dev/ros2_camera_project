// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from best_camera_app_msgs:srv/VideoRecordService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__VIDEO_RECORD_SERVICE__FUNCTIONS_H_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__VIDEO_RECORD_SERVICE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "best_camera_app_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "best_camera_app_msgs/srv/detail/video_record_service__struct.h"

/// Initialize srv/VideoRecordService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * best_camera_app_msgs__srv__VideoRecordService_Request
 * )) before or use
 * best_camera_app_msgs__srv__VideoRecordService_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Request__init(best_camera_app_msgs__srv__VideoRecordService_Request * msg);

/// Finalize srv/VideoRecordService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
void
best_camera_app_msgs__srv__VideoRecordService_Request__fini(best_camera_app_msgs__srv__VideoRecordService_Request * msg);

/// Create srv/VideoRecordService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * best_camera_app_msgs__srv__VideoRecordService_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
best_camera_app_msgs__srv__VideoRecordService_Request *
best_camera_app_msgs__srv__VideoRecordService_Request__create();

/// Destroy srv/VideoRecordService message.
/**
 * It calls
 * best_camera_app_msgs__srv__VideoRecordService_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
void
best_camera_app_msgs__srv__VideoRecordService_Request__destroy(best_camera_app_msgs__srv__VideoRecordService_Request * msg);

/// Check for srv/VideoRecordService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Request__are_equal(const best_camera_app_msgs__srv__VideoRecordService_Request * lhs, const best_camera_app_msgs__srv__VideoRecordService_Request * rhs);

/// Copy a srv/VideoRecordService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Request__copy(
  const best_camera_app_msgs__srv__VideoRecordService_Request * input,
  best_camera_app_msgs__srv__VideoRecordService_Request * output);

/// Initialize array of srv/VideoRecordService messages.
/**
 * It allocates the memory for the number of elements and calls
 * best_camera_app_msgs__srv__VideoRecordService_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__init(best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * array, size_t size);

/// Finalize array of srv/VideoRecordService messages.
/**
 * It calls
 * best_camera_app_msgs__srv__VideoRecordService_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
void
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__fini(best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * array);

/// Create array of srv/VideoRecordService messages.
/**
 * It allocates the memory for the array and calls
 * best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence *
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__create(size_t size);

/// Destroy array of srv/VideoRecordService messages.
/**
 * It calls
 * best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
void
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__destroy(best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * array);

/// Check for srv/VideoRecordService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__are_equal(const best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * lhs, const best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * rhs);

/// Copy an array of srv/VideoRecordService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Request__Sequence__copy(
  const best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * input,
  best_camera_app_msgs__srv__VideoRecordService_Request__Sequence * output);

/// Initialize srv/VideoRecordService message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * best_camera_app_msgs__srv__VideoRecordService_Response
 * )) before or use
 * best_camera_app_msgs__srv__VideoRecordService_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Response__init(best_camera_app_msgs__srv__VideoRecordService_Response * msg);

/// Finalize srv/VideoRecordService message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
void
best_camera_app_msgs__srv__VideoRecordService_Response__fini(best_camera_app_msgs__srv__VideoRecordService_Response * msg);

/// Create srv/VideoRecordService message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * best_camera_app_msgs__srv__VideoRecordService_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
best_camera_app_msgs__srv__VideoRecordService_Response *
best_camera_app_msgs__srv__VideoRecordService_Response__create();

/// Destroy srv/VideoRecordService message.
/**
 * It calls
 * best_camera_app_msgs__srv__VideoRecordService_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
void
best_camera_app_msgs__srv__VideoRecordService_Response__destroy(best_camera_app_msgs__srv__VideoRecordService_Response * msg);

/// Check for srv/VideoRecordService message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Response__are_equal(const best_camera_app_msgs__srv__VideoRecordService_Response * lhs, const best_camera_app_msgs__srv__VideoRecordService_Response * rhs);

/// Copy a srv/VideoRecordService message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Response__copy(
  const best_camera_app_msgs__srv__VideoRecordService_Response * input,
  best_camera_app_msgs__srv__VideoRecordService_Response * output);

/// Initialize array of srv/VideoRecordService messages.
/**
 * It allocates the memory for the number of elements and calls
 * best_camera_app_msgs__srv__VideoRecordService_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__init(best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * array, size_t size);

/// Finalize array of srv/VideoRecordService messages.
/**
 * It calls
 * best_camera_app_msgs__srv__VideoRecordService_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
void
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__fini(best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * array);

/// Create array of srv/VideoRecordService messages.
/**
 * It allocates the memory for the array and calls
 * best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence *
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__create(size_t size);

/// Destroy array of srv/VideoRecordService messages.
/**
 * It calls
 * best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
void
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__destroy(best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * array);

/// Check for srv/VideoRecordService message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__are_equal(const best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * lhs, const best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * rhs);

/// Copy an array of srv/VideoRecordService messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_best_camera_app_msgs
bool
best_camera_app_msgs__srv__VideoRecordService_Response__Sequence__copy(
  const best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * input,
  best_camera_app_msgs__srv__VideoRecordService_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__VIDEO_RECORD_SERVICE__FUNCTIONS_H_
