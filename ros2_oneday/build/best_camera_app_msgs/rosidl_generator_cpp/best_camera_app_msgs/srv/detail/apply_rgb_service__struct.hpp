// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from best_camera_app_msgs:srv/ApplyRGBService.idl
// generated code does not contain a copyright notice

#ifndef BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__STRUCT_HPP_
#define BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__best_camera_app_msgs__srv__ApplyRGBService_Request __attribute__((deprecated))
#else
# define DEPRECATED__best_camera_app_msgs__srv__ApplyRGBService_Request __declspec(deprecated)
#endif

namespace best_camera_app_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyRGBService_Request_
{
  using Type = ApplyRGBService_Request_<ContainerAllocator>;

  explicit ApplyRGBService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0.0;
      this->g = 0.0;
      this->b = 0.0;
    }
  }

  explicit ApplyRGBService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r = 0.0;
      this->g = 0.0;
      this->b = 0.0;
    }
  }

  // field types and members
  using _r_type =
    double;
  _r_type r;
  using _g_type =
    double;
  _g_type g;
  using _b_type =
    double;
  _b_type b;

  // setters for named parameter idiom
  Type & set__r(
    const double & _arg)
  {
    this->r = _arg;
    return *this;
  }
  Type & set__g(
    const double & _arg)
  {
    this->g = _arg;
    return *this;
  }
  Type & set__b(
    const double & _arg)
  {
    this->b = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__best_camera_app_msgs__srv__ApplyRGBService_Request
    std::shared_ptr<best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__best_camera_app_msgs__srv__ApplyRGBService_Request
    std::shared_ptr<best_camera_app_msgs::srv::ApplyRGBService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyRGBService_Request_ & other) const
  {
    if (this->r != other.r) {
      return false;
    }
    if (this->g != other.g) {
      return false;
    }
    if (this->b != other.b) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyRGBService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyRGBService_Request_

// alias to use template instance with default allocator
using ApplyRGBService_Request =
  best_camera_app_msgs::srv::ApplyRGBService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace best_camera_app_msgs


#ifndef _WIN32
# define DEPRECATED__best_camera_app_msgs__srv__ApplyRGBService_Response __attribute__((deprecated))
#else
# define DEPRECATED__best_camera_app_msgs__srv__ApplyRGBService_Response __declspec(deprecated)
#endif

namespace best_camera_app_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ApplyRGBService_Response_
{
  using Type = ApplyRGBService_Response_<ContainerAllocator>;

  explicit ApplyRGBService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  explicit ApplyRGBService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = "";
    }
  }

  // field types and members
  using _result_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__best_camera_app_msgs__srv__ApplyRGBService_Response
    std::shared_ptr<best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__best_camera_app_msgs__srv__ApplyRGBService_Response
    std::shared_ptr<best_camera_app_msgs::srv::ApplyRGBService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ApplyRGBService_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const ApplyRGBService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ApplyRGBService_Response_

// alias to use template instance with default allocator
using ApplyRGBService_Response =
  best_camera_app_msgs::srv::ApplyRGBService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace best_camera_app_msgs

namespace best_camera_app_msgs
{

namespace srv
{

struct ApplyRGBService
{
  using Request = best_camera_app_msgs::srv::ApplyRGBService_Request;
  using Response = best_camera_app_msgs::srv::ApplyRGBService_Response;
};

}  // namespace srv

}  // namespace best_camera_app_msgs

#endif  // BEST_CAMERA_APP_MSGS__SRV__DETAIL__APPLY_RGB_SERVICE__STRUCT_HPP_
