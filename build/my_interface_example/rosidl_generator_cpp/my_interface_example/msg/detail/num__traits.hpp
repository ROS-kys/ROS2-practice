// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interface_example:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE_EXAMPLE__MSG__DETAIL__NUM__TRAITS_HPP_
#define MY_INTERFACE_EXAMPLE__MSG__DETAIL__NUM__TRAITS_HPP_

#include "my_interface_example/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interface_example::msg::Num>()
{
  return "my_interface_example::msg::Num";
}

template<>
inline const char * name<my_interface_example::msg::Num>()
{
  return "my_interface_example/msg/Num";
}

template<>
struct has_fixed_size<my_interface_example::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interface_example::msg::Num>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interface_example::msg::Num>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACE_EXAMPLE__MSG__DETAIL__NUM__TRAITS_HPP_
