// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from best_camera_app_msgs:srv/ApplyRGBService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__BUILDER_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "best_camera_app_msgs/srv/detail/apply_rgb_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyRGBService_Request_b
{
public:
  explicit Init_ApplyRGBService_Request_b(::best_camera_app_msgs::srv::ApplyRGBService_Request & msg)
  : msg_(msg)
  {}
  ::best_camera_app_msgs::srv::ApplyRGBService_Request b(::best_camera_app_msgs::srv::ApplyRGBService_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::ApplyRGBService_Request msg_;
};

class Init_ApplyRGBService_Request_g
{
public:
  explicit Init_ApplyRGBService_Request_g(::best_camera_app_msgs::srv::ApplyRGBService_Request & msg)
  : msg_(msg)
  {}
  Init_ApplyRGBService_Request_b g(::best_camera_app_msgs::srv::ApplyRGBService_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_ApplyRGBService_Request_b(msg_);
  }

private:
  ::best_camera_app_msgs::srv::ApplyRGBService_Request msg_;
};

class Init_ApplyRGBService_Request_r
{
public:
  Init_ApplyRGBService_Request_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApplyRGBService_Request_g r(::best_camera_app_msgs::srv::ApplyRGBService_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ApplyRGBService_Request_g(msg_);
  }

private:
  ::best_camera_app_msgs::srv::ApplyRGBService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::ApplyRGBService_Request>()
{
  return best_camera_app_msgs::srv::builder::Init_ApplyRGBService_Request_r();
}

}  // namespace best_camera_app_msgs


namespace best_camera_app_msgs
{

namespace srv
{

namespace builder
{

class Init_ApplyRGBService_Response_result
{
public:
  Init_ApplyRGBService_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::best_camera_app_msgs::srv::ApplyRGBService_Response result(::best_camera_app_msgs::srv::ApplyRGBService_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::best_camera_app_msgs::srv::ApplyRGBService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::best_camera_app_msgs::srv::ApplyRGBService_Response>()
{
  return best_camera_app_msgs::srv::builder::Init_ApplyRGBService_Response_result();
}

}  // namespace best_camera_app_msgs

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__BUILDER_HPP_
