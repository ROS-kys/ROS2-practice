// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interface_example:srv/AddThreeInts.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE_EXAMPLE__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
#define MY_INTERFACE_EXAMPLE__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_

#include "my_interface_example/srv/detail/add_three_ints__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_interface_example
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Request_c
{
public:
  explicit Init_AddThreeInts_Request_c(::my_interface_example::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  ::my_interface_example::srv::AddThreeInts_Request c(::my_interface_example::srv::AddThreeInts_Request::_c_type arg)
  {
    msg_.c = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interface_example::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_b
{
public:
  explicit Init_AddThreeInts_Request_b(::my_interface_example::srv::AddThreeInts_Request & msg)
  : msg_(msg)
  {}
  Init_AddThreeInts_Request_c b(::my_interface_example::srv::AddThreeInts_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_AddThreeInts_Request_c(msg_);
  }

private:
  ::my_interface_example::srv::AddThreeInts_Request msg_;
};

class Init_AddThreeInts_Request_a
{
public:
  Init_AddThreeInts_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddThreeInts_Request_b a(::my_interface_example::srv::AddThreeInts_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddThreeInts_Request_b(msg_);
  }

private:
  ::my_interface_example::srv::AddThreeInts_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interface_example::srv::AddThreeInts_Request>()
{
  return my_interface_example::srv::builder::Init_AddThreeInts_Request_a();
}

}  // namespace my_interface_example


namespace my_interface_example
{

namespace srv
{

namespace builder
{

class Init_AddThreeInts_Response_sum
{
public:
  Init_AddThreeInts_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_interface_example::srv::AddThreeInts_Response sum(::my_interface_example::srv::AddThreeInts_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interface_example::srv::AddThreeInts_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interface_example::srv::AddThreeInts_Response>()
{
  return my_interface_example::srv::builder::Init_AddThreeInts_Response_sum();
}

}  // namespace my_interface_example

#endif  // MY_INTERFACE_EXAMPLE__SRV__DETAIL__ADD_THREE_INTS__BUILDER_HPP_
