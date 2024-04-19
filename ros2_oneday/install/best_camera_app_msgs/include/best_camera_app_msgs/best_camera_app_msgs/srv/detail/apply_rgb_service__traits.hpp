// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from best_camera_app_msgs:srv/ApplyRGBService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__TRAITS_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "best_camera_app_msgs/srv/detail/apply_rgb_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace best_camera_app_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyRGBService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: r
  {
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << ", ";
  }

  // member: g
  {
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << ", ";
  }

  // member: b
  {
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyRGBService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    rosidl_generator_traits::value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    rosidl_generator_traits::value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    rosidl_generator_traits::value_to_yaml(msg.b, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyRGBService_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace rosidl_generator_traits
{

[[deprecated("use best_camera_app_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const best_camera_app_msgs::srv::ApplyRGBService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  best_camera_app_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use best_camera_app_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const best_camera_app_msgs::srv::ApplyRGBService_Request & msg)
{
  return best_camera_app_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<best_camera_app_msgs::srv::ApplyRGBService_Request>()
{
  return "best_camera_app_msgs::srv::ApplyRGBService_Request";
}

template<>
inline const char * name<best_camera_app_msgs::srv::ApplyRGBService_Request>()
{
  return "best_camera_app_msgs/srv/ApplyRGBService_Request";
}

template<>
struct has_fixed_size<best_camera_app_msgs::srv::ApplyRGBService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<best_camera_app_msgs::srv::ApplyRGBService_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<best_camera_app_msgs::srv::ApplyRGBService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace best_camera_app_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApplyRGBService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApplyRGBService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApplyRGBService_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace rosidl_generator_traits
{

[[deprecated("use best_camera_app_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const best_camera_app_msgs::srv::ApplyRGBService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  best_camera_app_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use best_camera_app_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const best_camera_app_msgs::srv::ApplyRGBService_Response & msg)
{
  return best_camera_app_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<best_camera_app_msgs::srv::ApplyRGBService_Response>()
{
  return "best_camera_app_msgs::srv::ApplyRGBService_Response";
}

template<>
inline const char * name<best_camera_app_msgs::srv::ApplyRGBService_Response>()
{
  return "best_camera_app_msgs/srv/ApplyRGBService_Response";
}

template<>
struct has_fixed_size<best_camera_app_msgs::srv::ApplyRGBService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<best_camera_app_msgs::srv::ApplyRGBService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<best_camera_app_msgs::srv::ApplyRGBService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<best_camera_app_msgs::srv::ApplyRGBService>()
{
  return "best_camera_app_msgs::srv::ApplyRGBService";
}

template<>
inline const char * name<best_camera_app_msgs::srv::ApplyRGBService>()
{
  return "best_camera_app_msgs/srv/ApplyRGBService";
}

template<>
struct has_fixed_size<best_camera_app_msgs::srv::ApplyRGBService>
  : std::integral_constant<
    bool,
    has_fixed_size<best_camera_app_msgs::srv::ApplyRGBService_Request>::value &&
    has_fixed_size<best_camera_app_msgs::srv::ApplyRGBService_Response>::value
  >
{
};

template<>
struct has_bounded_size<best_camera_app_msgs::srv::ApplyRGBService>
  : std::integral_constant<
    bool,
    has_bounded_size<best_camera_app_msgs::srv::ApplyRGBService_Request>::value &&
    has_bounded_size<best_camera_app_msgs::srv::ApplyRGBService_Response>::value
  >
{
};

template<>
struct is_service<best_camera_app_msgs::srv::ApplyRGBService>
  : std::true_type
{
};

template<>
struct is_service_request<best_camera_app_msgs::srv::ApplyRGBService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<best_camera_app_msgs::srv::ApplyRGBService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__TRAITS_HPP_
