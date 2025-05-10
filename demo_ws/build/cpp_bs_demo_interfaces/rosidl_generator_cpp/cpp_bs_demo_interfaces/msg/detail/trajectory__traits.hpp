// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "cpp_bs_demo_interfaces/msg/trajectory.hpp"


#ifndef CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
#define CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "cpp_bs_demo_interfaces/msg/detail/trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'traj_start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'control_points'
// Member 'init_p'
// Member 'init_v'
// Member 'init_a'
// Member 'tail_p'
// Member 'tail_v'
// Member 'tail_a'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace cpp_bs_demo_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: traj_start_time
  {
    out << "traj_start_time: ";
    to_flow_style_yaml(msg.traj_start_time, out);
    out << ", ";
  }

  // member: control_points
  {
    if (msg.control_points.size() == 0) {
      out << "control_points: []";
    } else {
      out << "control_points: [";
      size_t pending_items = msg.control_points.size();
      for (auto item : msg.control_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: u
  {
    if (msg.u.size() == 0) {
      out << "u: []";
    } else {
      out << "u: [";
      size_t pending_items = msg.u.size();
      for (auto item : msg.u) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: init_p
  {
    out << "init_p: ";
    to_flow_style_yaml(msg.init_p, out);
    out << ", ";
  }

  // member: init_v
  {
    out << "init_v: ";
    to_flow_style_yaml(msg.init_v, out);
    out << ", ";
  }

  // member: init_a
  {
    out << "init_a: ";
    to_flow_style_yaml(msg.init_a, out);
    out << ", ";
  }

  // member: tail_p
  {
    out << "tail_p: ";
    to_flow_style_yaml(msg.tail_p, out);
    out << ", ";
  }

  // member: tail_v
  {
    out << "tail_v: ";
    to_flow_style_yaml(msg.tail_v, out);
    out << ", ";
  }

  // member: tail_a
  {
    out << "tail_a: ";
    to_flow_style_yaml(msg.tail_a, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: traj_start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traj_start_time:\n";
    to_block_style_yaml(msg.traj_start_time, out, indentation + 2);
  }

  // member: control_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.control_points.size() == 0) {
      out << "control_points: []\n";
    } else {
      out << "control_points:\n";
      for (auto item : msg.control_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: u
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.u.size() == 0) {
      out << "u: []\n";
    } else {
      out << "u:\n";
      for (auto item : msg.u) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: init_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_p:\n";
    to_block_style_yaml(msg.init_p, out, indentation + 2);
  }

  // member: init_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_v:\n";
    to_block_style_yaml(msg.init_v, out, indentation + 2);
  }

  // member: init_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "init_a:\n";
    to_block_style_yaml(msg.init_a, out, indentation + 2);
  }

  // member: tail_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_p:\n";
    to_block_style_yaml(msg.tail_p, out, indentation + 2);
  }

  // member: tail_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_v:\n";
    to_block_style_yaml(msg.tail_v, out, indentation + 2);
  }

  // member: tail_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tail_a:\n";
    to_block_style_yaml(msg.tail_a, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Trajectory & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace cpp_bs_demo_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use cpp_bs_demo_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const cpp_bs_demo_interfaces::msg::Trajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  cpp_bs_demo_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use cpp_bs_demo_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const cpp_bs_demo_interfaces::msg::Trajectory & msg)
{
  return cpp_bs_demo_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<cpp_bs_demo_interfaces::msg::Trajectory>()
{
  return "cpp_bs_demo_interfaces::msg::Trajectory";
}

template<>
inline const char * name<cpp_bs_demo_interfaces::msg::Trajectory>()
{
  return "cpp_bs_demo_interfaces/msg/Trajectory";
}

template<>
struct has_fixed_size<cpp_bs_demo_interfaces::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cpp_bs_demo_interfaces::msg::Trajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cpp_bs_demo_interfaces::msg::Trajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CPP_BS_DEMO_INTERFACES__MSG__DETAIL__TRAJECTORY__TRAITS_HPP_
