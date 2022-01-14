// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from final_project_interface:action/Controller.idl
// generated code does not contain a copyright notice

#ifndef FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_HPP_
#define FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__final_project_interface__action__Controller_Goal __attribute__((deprecated))
#else
# define DEPRECATED__final_project_interface__action__Controller_Goal __declspec(deprecated)
#endif

namespace final_project_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Controller_Goal_
{
  using Type = Controller_Goal_<ContainerAllocator>;

  explicit Controller_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_point = 0l;
    }
  }

  explicit Controller_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_point = 0l;
    }
  }

  // field types and members
  using _goal_point_type =
    int32_t;
  _goal_point_type goal_point;

  // setters for named parameter idiom
  Type & set__goal_point(
    const int32_t & _arg)
  {
    this->goal_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    final_project_interface::action::Controller_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const final_project_interface::action::Controller_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__final_project_interface__action__Controller_Goal
    std::shared_ptr<final_project_interface::action::Controller_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__final_project_interface__action__Controller_Goal
    std::shared_ptr<final_project_interface::action::Controller_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_Goal_ & other) const
  {
    if (this->goal_point != other.goal_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_Goal_

// alias to use template instance with default allocator
using Controller_Goal =
  final_project_interface::action::Controller_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace final_project_interface


#ifndef _WIN32
# define DEPRECATED__final_project_interface__action__Controller_Result __attribute__((deprecated))
#else
# define DEPRECATED__final_project_interface__action__Controller_Result __declspec(deprecated)
#endif

namespace final_project_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Controller_Result_
{
  using Type = Controller_Result_<ContainerAllocator>;

  explicit Controller_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_point = 0l;
    }
  }

  explicit Controller_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->end_point = 0l;
    }
  }

  // field types and members
  using _end_point_type =
    int32_t;
  _end_point_type end_point;

  // setters for named parameter idiom
  Type & set__end_point(
    const int32_t & _arg)
  {
    this->end_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    final_project_interface::action::Controller_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const final_project_interface::action::Controller_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__final_project_interface__action__Controller_Result
    std::shared_ptr<final_project_interface::action::Controller_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__final_project_interface__action__Controller_Result
    std::shared_ptr<final_project_interface::action::Controller_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_Result_ & other) const
  {
    if (this->end_point != other.end_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_Result_

// alias to use template instance with default allocator
using Controller_Result =
  final_project_interface::action::Controller_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace final_project_interface


#ifndef _WIN32
# define DEPRECATED__final_project_interface__action__Controller_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__final_project_interface__action__Controller_Feedback __declspec(deprecated)
#endif

namespace final_project_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Controller_Feedback_
{
  using Type = Controller_Feedback_<ContainerAllocator>;

  explicit Controller_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->now_point = 0l;
    }
  }

  explicit Controller_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->now_point = 0l;
    }
  }

  // field types and members
  using _now_point_type =
    int32_t;
  _now_point_type now_point;

  // setters for named parameter idiom
  Type & set__now_point(
    const int32_t & _arg)
  {
    this->now_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    final_project_interface::action::Controller_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const final_project_interface::action::Controller_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__final_project_interface__action__Controller_Feedback
    std::shared_ptr<final_project_interface::action::Controller_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__final_project_interface__action__Controller_Feedback
    std::shared_ptr<final_project_interface::action::Controller_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_Feedback_ & other) const
  {
    if (this->now_point != other.now_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_Feedback_

// alias to use template instance with default allocator
using Controller_Feedback =
  final_project_interface::action::Controller_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace final_project_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "final_project_interface/action/detail/controller__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__final_project_interface__action__Controller_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__final_project_interface__action__Controller_SendGoal_Request __declspec(deprecated)
#endif

namespace final_project_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Controller_SendGoal_Request_
{
  using Type = Controller_SendGoal_Request_<ContainerAllocator>;

  explicit Controller_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit Controller_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    final_project_interface::action::Controller_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const final_project_interface::action::Controller_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__final_project_interface__action__Controller_SendGoal_Request
    std::shared_ptr<final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__final_project_interface__action__Controller_SendGoal_Request
    std::shared_ptr<final_project_interface::action::Controller_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_SendGoal_Request_

// alias to use template instance with default allocator
using Controller_SendGoal_Request =
  final_project_interface::action::Controller_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace final_project_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__final_project_interface__action__Controller_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__final_project_interface__action__Controller_SendGoal_Response __declspec(deprecated)
#endif

namespace final_project_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Controller_SendGoal_Response_
{
  using Type = Controller_SendGoal_Response_<ContainerAllocator>;

  explicit Controller_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit Controller_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__final_project_interface__action__Controller_SendGoal_Response
    std::shared_ptr<final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__final_project_interface__action__Controller_SendGoal_Response
    std::shared_ptr<final_project_interface::action::Controller_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_SendGoal_Response_

// alias to use template instance with default allocator
using Controller_SendGoal_Response =
  final_project_interface::action::Controller_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace final_project_interface

namespace final_project_interface
{

namespace action
{

struct Controller_SendGoal
{
  using Request = final_project_interface::action::Controller_SendGoal_Request;
  using Response = final_project_interface::action::Controller_SendGoal_Response;
};

}  // namespace action

}  // namespace final_project_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__final_project_interface__action__Controller_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__final_project_interface__action__Controller_GetResult_Request __declspec(deprecated)
#endif

namespace final_project_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Controller_GetResult_Request_
{
  using Type = Controller_GetResult_Request_<ContainerAllocator>;

  explicit Controller_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit Controller_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__final_project_interface__action__Controller_GetResult_Request
    std::shared_ptr<final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__final_project_interface__action__Controller_GetResult_Request
    std::shared_ptr<final_project_interface::action::Controller_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_GetResult_Request_

// alias to use template instance with default allocator
using Controller_GetResult_Request =
  final_project_interface::action::Controller_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace final_project_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "final_project_interface/action/detail/controller__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__final_project_interface__action__Controller_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__final_project_interface__action__Controller_GetResult_Response __declspec(deprecated)
#endif

namespace final_project_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Controller_GetResult_Response_
{
  using Type = Controller_GetResult_Response_<ContainerAllocator>;

  explicit Controller_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit Controller_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    final_project_interface::action::Controller_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const final_project_interface::action::Controller_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__final_project_interface__action__Controller_GetResult_Response
    std::shared_ptr<final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__final_project_interface__action__Controller_GetResult_Response
    std::shared_ptr<final_project_interface::action::Controller_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_GetResult_Response_

// alias to use template instance with default allocator
using Controller_GetResult_Response =
  final_project_interface::action::Controller_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace final_project_interface

namespace final_project_interface
{

namespace action
{

struct Controller_GetResult
{
  using Request = final_project_interface::action::Controller_GetResult_Request;
  using Response = final_project_interface::action::Controller_GetResult_Response;
};

}  // namespace action

}  // namespace final_project_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "final_project_interface/action/detail/controller__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__final_project_interface__action__Controller_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__final_project_interface__action__Controller_FeedbackMessage __declspec(deprecated)
#endif

namespace final_project_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct Controller_FeedbackMessage_
{
  using Type = Controller_FeedbackMessage_<ContainerAllocator>;

  explicit Controller_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit Controller_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    final_project_interface::action::Controller_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const final_project_interface::action::Controller_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__final_project_interface__action__Controller_FeedbackMessage
    std::shared_ptr<final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__final_project_interface__action__Controller_FeedbackMessage
    std::shared_ptr<final_project_interface::action::Controller_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Controller_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const Controller_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Controller_FeedbackMessage_

// alias to use template instance with default allocator
using Controller_FeedbackMessage =
  final_project_interface::action::Controller_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace final_project_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace final_project_interface
{

namespace action
{

struct Controller
{
  /// The goal message defined in the action definition.
  using Goal = final_project_interface::action::Controller_Goal;
  /// The result message defined in the action definition.
  using Result = final_project_interface::action::Controller_Result;
  /// The feedback message defined in the action definition.
  using Feedback = final_project_interface::action::Controller_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = final_project_interface::action::Controller_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = final_project_interface::action::Controller_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = final_project_interface::action::Controller_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct Controller Controller;

}  // namespace action

}  // namespace final_project_interface

#endif  // FINAL_PROJECT_INTERFACE__ACTION__DETAIL__CONTROLLER__STRUCT_HPP_
