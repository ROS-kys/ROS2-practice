// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interface_example:msg/Num.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE_EXAMPLE__MSG__DETAIL__NUM__BUILDER_HPP_
#define MY_INTERFACE_EXAMPLE__MSG__DETAIL__NUM__BUILDER_HPP_

#include "my_interface_example/msg/detail/num__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_interface_example
{

namespace msg
{

namespace builder
{

class Init_Num_num
{
public:
  Init_Num_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interface_example::msg::Num num(::my_interface_example::msg::Num::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interface_example::msg::Num msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interface_example::msg::Num>()
{
  return my_interface_example::msg::builder::Init_Num_num();
}

}  // namespace my_interface_example

#endif  // MY_INTERFACE_EXAMPLE__MSG__DETAIL__NUM__BUILDER_HPP_
