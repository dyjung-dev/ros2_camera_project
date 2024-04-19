# generated from rosidl_generator_py/resource/_idl.py.em
# with input from best_camera_app_msgs:srv/ApplyBlurrService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApplyBlurrService_Request(type):
    """Metaclass of message 'ApplyBlurrService_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('best_camera_app_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'best_camera_app_msgs.srv.ApplyBlurrService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_blurr_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_blurr_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_blurr_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_blurr_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_blurr_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyBlurrService_Request(metaclass=Metaclass_ApplyBlurrService_Request):
    """Message class 'ApplyBlurrService_Request'."""

    __slots__ = [
        '_apply_blurr_true_false',
    ]

    _fields_and_field_types = {
        'apply_blurr_true_false': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.apply_blurr_true_false = kwargs.get('apply_blurr_true_false', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.apply_blurr_true_false != other.apply_blurr_true_false:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def apply_blurr_true_false(self):
        """Message field 'apply_blurr_true_false'."""
        return self._apply_blurr_true_false

    @apply_blurr_true_false.setter
    def apply_blurr_true_false(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'apply_blurr_true_false' field must be of type 'bool'"
        self._apply_blurr_true_false = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApplyBlurrService_Response(type):
    """Metaclass of message 'ApplyBlurrService_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('best_camera_app_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'best_camera_app_msgs.srv.ApplyBlurrService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_blurr_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_blurr_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_blurr_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_blurr_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_blurr_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyBlurrService_Response(metaclass=Metaclass_ApplyBlurrService_Response):
    """Message class 'ApplyBlurrService_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value


class Metaclass_ApplyBlurrService(type):
    """Metaclass of service 'ApplyBlurrService'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('best_camera_app_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'best_camera_app_msgs.srv.ApplyBlurrService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__apply_blurr_service

            from best_camera_app_msgs.srv import _apply_blurr_service
            if _apply_blurr_service.Metaclass_ApplyBlurrService_Request._TYPE_SUPPORT is None:
                _apply_blurr_service.Metaclass_ApplyBlurrService_Request.__import_type_support__()
            if _apply_blurr_service.Metaclass_ApplyBlurrService_Response._TYPE_SUPPORT is None:
                _apply_blurr_service.Metaclass_ApplyBlurrService_Response.__import_type_support__()


class ApplyBlurrService(metaclass=Metaclass_ApplyBlurrService):
    from best_camera_app_msgs.srv._apply_blurr_service import ApplyBlurrService_Request as Request
    from best_camera_app_msgs.srv._apply_blurr_service import ApplyBlurrService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
