# generated from rosidl_generator_py/resource/_idl.py.em
# with input from best_camera_app_msgs:srv/CaptureService.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CaptureService_Request(type):
    """Metaclass of message 'CaptureService_Request'."""

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
                'best_camera_app_msgs.srv.CaptureService_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture_service__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture_service__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture_service__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture_service__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture_service__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CaptureService_Request(metaclass=Metaclass_CaptureService_Request):
    """Message class 'CaptureService_Request'."""

    __slots__ = [
        '_capture_true',
    ]

    _fields_and_field_types = {
        'capture_true': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.capture_true = kwargs.get('capture_true', bool())

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
        if self.capture_true != other.capture_true:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def capture_true(self):
        """Message field 'capture_true'."""
        return self._capture_true

    @capture_true.setter
    def capture_true(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'capture_true' field must be of type 'bool'"
        self._capture_true = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CaptureService_Response(type):
    """Metaclass of message 'CaptureService_Response'."""

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
                'best_camera_app_msgs.srv.CaptureService_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture_service__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture_service__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture_service__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture_service__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture_service__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CaptureService_Response(metaclass=Metaclass_CaptureService_Response):
    """Message class 'CaptureService_Response'."""

    __slots__ = [
        '_result_path',
    ]

    _fields_and_field_types = {
        'result_path': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result_path = kwargs.get('result_path', str())

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
        if self.result_path != other.result_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result_path(self):
        """Message field 'result_path'."""
        return self._result_path

    @result_path.setter
    def result_path(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result_path' field must be of type 'str'"
        self._result_path = value


class Metaclass_CaptureService(type):
    """Metaclass of service 'CaptureService'."""

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
                'best_camera_app_msgs.srv.CaptureService')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__capture_service

            from best_camera_app_msgs.srv import _capture_service
            if _capture_service.Metaclass_CaptureService_Request._TYPE_SUPPORT is None:
                _capture_service.Metaclass_CaptureService_Request.__import_type_support__()
            if _capture_service.Metaclass_CaptureService_Response._TYPE_SUPPORT is None:
                _capture_service.Metaclass_CaptureService_Response.__import_type_support__()


class CaptureService(metaclass=Metaclass_CaptureService):
    from best_camera_app_msgs.srv._capture_service import CaptureService_Request as Request
    from best_camera_app_msgs.srv._capture_service import CaptureService_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
