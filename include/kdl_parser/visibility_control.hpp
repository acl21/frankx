#pragma once

#if __has_include(<kdl_parser/kdl_parser/visibility_control.hpp>)
#include <kdl_parser/kdl_parser/visibility_control.hpp>
#elif __has_include("/opt/ros/jazzy/include/kdl_parser/kdl_parser/visibility_control.hpp")
#include "/opt/ros/jazzy/include/kdl_parser/kdl_parser/visibility_control.hpp"
#else
#define KDL_PARSER_EXPORT
#define KDL_PARSER_IMPORT
#define KDL_PARSER_PUBLIC
#define KDL_PARSER_PUBLIC_TYPE
#define KDL_PARSER_LOCAL
#endif
