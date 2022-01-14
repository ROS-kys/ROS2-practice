// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from project_interface:action/Controller.idl
// generated code does not contain a copyright notice

#ifndef PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__BUILDER_HPP_
#define PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__BUILDER_HPP_

#include "project_interface/action/detail/controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_Goal_goal_point
{
public:
  Init_Controller_Goal_goal_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project_interface::action::Controller_Goal goal_point(::project_interface::action::Controller_Goal::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::action::Controller_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::action::Controller_Goal>()
{
  return project_interface::action::builder::Init_Controller_Goal_goal_point();
}

}  // namespace project_interface


namespace project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_Result_result
{
public:
  Init_Controller_Result_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project_interface::action::Controller_Result result(::project_interface::action::Controller_Result::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::action::Controller_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::action::Controller_Result>()
{
  return project_interface::action::builder::Init_Controller_Result_result();
}

}  // namespace project_interface


namespace project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_Feedback_status
{
public:
  Init_Controller_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project_interface::action::Controller_Feedback status(::project_interface::action::Controller_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::action::Controller_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::action::Controller_Feedback>()
{
  return project_interface::action::builder::Init_Controller_Feedback_status();
}

}  // namespace project_interface


namespace project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_SendGoal_Request_goal
{
public:
  explicit Init_Controller_SendGoal_Request_goal(::project_interface::action::Controller_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::project_interface::action::Controller_SendGoal_Request goal(::project_interface::action::Controller_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::action::Controller_SendGoal_Request msg_;
};

class Init_Controller_SendGoal_Request_goal_id
{
public:
  Init_Controller_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_SendGoal_Request_goal goal_id(::project_interface::action::Controller_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Controller_SendGoal_Request_goal(msg_);
  }

private:
  ::project_interface::action::Controller_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::action::Controller_SendGoal_Request>()
{
  return project_interface::action::builder::Init_Controller_SendGoal_Request_goal_id();
}

}  // namespace project_interface


namespace project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_SendGoal_Response_stamp
{
public:
  explicit Init_Controller_SendGoal_Response_stamp(::project_interface::action::Controller_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::project_interface::action::Controller_SendGoal_Response stamp(::project_interface::action::Controller_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::action::Controller_SendGoal_Response msg_;
};

class Init_Controller_SendGoal_Response_accepted
{
public:
  Init_Controller_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_SendGoal_Response_stamp accepted(::project_interface::action::Controller_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Controller_SendGoal_Response_stamp(msg_);
  }

private:
  ::project_interface::action::Controller_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::action::Controller_SendGoal_Response>()
{
  return project_interface::action::builder::Init_Controller_SendGoal_Response_accepted();
}

}  // namespace project_interface


namespace project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_GetResult_Request_goal_id
{
public:
  Init_Controller_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::project_interface::action::Controller_GetResult_Request goal_id(::project_interface::action::Controller_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::action::Controller_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::action::Controller_GetResult_Request>()
{
  return project_interface::action::builder::Init_Controller_GetResult_Request_goal_id();
}

}  // namespace project_interface


namespace project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_GetResult_Response_result
{
public:
  explicit Init_Controller_GetResult_Response_result(::project_interface::action::Controller_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::project_interface::action::Controller_GetResult_Response result(::project_interface::action::Controller_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::action::Controller_GetResult_Response msg_;
};

class Init_Controller_GetResult_Response_status
{
public:
  Init_Controller_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_GetResult_Response_result status(::project_interface::action::Controller_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Controller_GetResult_Response_result(msg_);
  }

private:
  ::project_interface::action::Controller_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::action::Controller_GetResult_Response>()
{
  return project_interface::action::builder::Init_Controller_GetResult_Response_status();
}

}  // namespace project_interface


namespace project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_FeedbackMessage_feedback
{
public:
  explicit Init_Controller_FeedbackMessage_feedback(::project_interface::action::Controller_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::project_interface::action::Controller_FeedbackMessage feedback(::project_interface::action::Controller_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::project_interface::action::Controller_FeedbackMessage msg_;
};

class Init_Controller_FeedbackMessage_goal_id
{
public:
  Init_Controller_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_FeedbackMessage_feedback goal_id(::project_interface::action::Controller_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Controller_FeedbackMessage_feedback(msg_);
  }

private:
  ::project_interface::action::Controller_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::project_interface::action::Controller_FeedbackMessage>()
{
  return project_interface::action::builder::Init_Controller_FeedbackMessage_goal_id();
}

}  // namespace project_interface

#endif  // PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__BUILDER_HPP_
