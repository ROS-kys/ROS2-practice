// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from final_project_interface:action/Controller.idl
// generated code does not contain a copyright notice

#ifndef FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__BUILDER_HPP_
#define FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__BUILDER_HPP_

#include "final_project_interface/action/detail/controller__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace final_project_interface
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
  ::final_project_interface::action::Controller_Goal goal_point(::final_project_interface::action::Controller_Goal::_goal_point_type arg)
  {
    msg_.goal_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::final_project_interface::action::Controller_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::final_project_interface::action::Controller_Goal>()
{
  return final_project_interface::action::builder::Init_Controller_Goal_goal_point();
}

}  // namespace final_project_interface


namespace final_project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_Result_now_point
{
public:
  Init_Controller_Result_now_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::final_project_interface::action::Controller_Result now_point(::final_project_interface::action::Controller_Result::_now_point_type arg)
  {
    msg_.now_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::final_project_interface::action::Controller_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::final_project_interface::action::Controller_Result>()
{
  return final_project_interface::action::builder::Init_Controller_Result_now_point();
}

}  // namespace final_project_interface


namespace final_project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_Feedback_end
{
public:
  Init_Controller_Feedback_end()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::final_project_interface::action::Controller_Feedback end(::final_project_interface::action::Controller_Feedback::_end_type arg)
  {
    msg_.end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::final_project_interface::action::Controller_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::final_project_interface::action::Controller_Feedback>()
{
  return final_project_interface::action::builder::Init_Controller_Feedback_end();
}

}  // namespace final_project_interface


namespace final_project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_SendGoal_Request_goal
{
public:
  explicit Init_Controller_SendGoal_Request_goal(::final_project_interface::action::Controller_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::final_project_interface::action::Controller_SendGoal_Request goal(::final_project_interface::action::Controller_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::final_project_interface::action::Controller_SendGoal_Request msg_;
};

class Init_Controller_SendGoal_Request_goal_id
{
public:
  Init_Controller_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_SendGoal_Request_goal goal_id(::final_project_interface::action::Controller_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Controller_SendGoal_Request_goal(msg_);
  }

private:
  ::final_project_interface::action::Controller_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::final_project_interface::action::Controller_SendGoal_Request>()
{
  return final_project_interface::action::builder::Init_Controller_SendGoal_Request_goal_id();
}

}  // namespace final_project_interface


namespace final_project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_SendGoal_Response_stamp
{
public:
  explicit Init_Controller_SendGoal_Response_stamp(::final_project_interface::action::Controller_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::final_project_interface::action::Controller_SendGoal_Response stamp(::final_project_interface::action::Controller_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::final_project_interface::action::Controller_SendGoal_Response msg_;
};

class Init_Controller_SendGoal_Response_accepted
{
public:
  Init_Controller_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_SendGoal_Response_stamp accepted(::final_project_interface::action::Controller_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Controller_SendGoal_Response_stamp(msg_);
  }

private:
  ::final_project_interface::action::Controller_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::final_project_interface::action::Controller_SendGoal_Response>()
{
  return final_project_interface::action::builder::Init_Controller_SendGoal_Response_accepted();
}

}  // namespace final_project_interface


namespace final_project_interface
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
  ::final_project_interface::action::Controller_GetResult_Request goal_id(::final_project_interface::action::Controller_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::final_project_interface::action::Controller_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::final_project_interface::action::Controller_GetResult_Request>()
{
  return final_project_interface::action::builder::Init_Controller_GetResult_Request_goal_id();
}

}  // namespace final_project_interface


namespace final_project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_GetResult_Response_result
{
public:
  explicit Init_Controller_GetResult_Response_result(::final_project_interface::action::Controller_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::final_project_interface::action::Controller_GetResult_Response result(::final_project_interface::action::Controller_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::final_project_interface::action::Controller_GetResult_Response msg_;
};

class Init_Controller_GetResult_Response_status
{
public:
  Init_Controller_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_GetResult_Response_result status(::final_project_interface::action::Controller_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Controller_GetResult_Response_result(msg_);
  }

private:
  ::final_project_interface::action::Controller_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::final_project_interface::action::Controller_GetResult_Response>()
{
  return final_project_interface::action::builder::Init_Controller_GetResult_Response_status();
}

}  // namespace final_project_interface


namespace final_project_interface
{

namespace action
{

namespace builder
{

class Init_Controller_FeedbackMessage_feedback
{
public:
  explicit Init_Controller_FeedbackMessage_feedback(::final_project_interface::action::Controller_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::final_project_interface::action::Controller_FeedbackMessage feedback(::final_project_interface::action::Controller_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::final_project_interface::action::Controller_FeedbackMessage msg_;
};

class Init_Controller_FeedbackMessage_goal_id
{
public:
  Init_Controller_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Controller_FeedbackMessage_feedback goal_id(::final_project_interface::action::Controller_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Controller_FeedbackMessage_feedback(msg_);
  }

private:
  ::final_project_interface::action::Controller_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::final_project_interface::action::Controller_FeedbackMessage>()
{
  return final_project_interface::action::builder::Init_Controller_FeedbackMessage_goal_id();
}

}  // namespace final_project_interface

#endif  // FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__BUILDER_HPP_
