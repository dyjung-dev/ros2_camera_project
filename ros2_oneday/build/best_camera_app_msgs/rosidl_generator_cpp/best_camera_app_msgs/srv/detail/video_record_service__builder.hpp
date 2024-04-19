// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from best_camera_app_msgs:srv/VideoRecordService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__VIDEO_RECORD_SERVICE__BUILDER_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__VIDEO_RECORD_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "best_camera_app_msgs/srv/detail/video_record_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_VideoRecordService_Request_video_start_end
{
public:
  Init_VideoRecordService_Request_video_start_end()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::VideoRecordService_Request video_start_end(::best_camera_app_msgs::srv::VideoRecordService_Request::_video_start_end_type arg)
  {
    msg_.video_start_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::VideoRecordService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::VideoRecordService_Request>()
{
  return best_camera_app_msgs::srv::builder::Init_VideoRecordService_Request_video_start_end();
}

}  // namespace best_camera_app_msgs


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_VideoRecordService_Response_result_path
{
public:
  Init_VideoRecordService_Response_result_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::VideoRecordService_Response result_path(::best_camera_app_msgs::srv::VideoRecordService_Response::_result_path_type arg)
  {
    msg_.result_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::VideoRecordService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::VideoRecordService_Response>()
{
  return best_camera_app_msgs::srv::builder::Init_VideoRecordService_Response_result_path();
}

}  // namespace best_camera_app_msgs

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__VIDEO_RECORD_SERVICE__BUILDER_HPP_
