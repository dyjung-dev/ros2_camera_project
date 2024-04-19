# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_best_camera_app_msgs_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED best_camera_app_msgs_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(best_camera_app_msgs_FOUND FALSE)
  elseif(NOT best_camera_app_msgs_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(best_camera_app_msgs_FOUND FALSE)
  endif()
  return()
endif()
set(_best_camera_app_msgs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT best_camera_app_msgs_FIND_QUIETLY)
  message(STATUS "Found best_camera_app_msgs: 0.0.0 (${best_camera_app_msgs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'best_camera_app_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${best_camera_app_msgs_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(best_camera_app_msgs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_targets-extras.cmake;rosidl_cmake_export_typesupport_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake;rosidl_cmake_export_typesupport_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${best_camera_app_msgs_DIR}/${_extra}")
endforeach()
