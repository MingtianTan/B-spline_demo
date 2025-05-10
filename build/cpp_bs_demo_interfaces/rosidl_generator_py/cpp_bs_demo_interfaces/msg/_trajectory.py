# generated from rosidl_generator_py/resource/_idl.py.em
# with input from cpp_bs_demo_interfaces:msg/Trajectory.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'u'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Trajectory(type):
    """Metaclass of message 'Trajectory'."""

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
            module = import_type_support('cpp_bs_demo_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'cpp_bs_demo_interfaces.msg.Trajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trajectory

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Trajectory(metaclass=Metaclass_Trajectory):
    """Message class 'Trajectory'."""

    __slots__ = [
        '_header',
        '_traj_start_time',
        '_control_points',
        '_u',
        '_init_p',
        '_init_v',
        '_init_a',
        '_tail_p',
        '_tail_v',
        '_tail_a',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'traj_start_time': 'builtin_interfaces/Time',
        'control_points': 'sequence<geometry_msgs/Vector3>',
        'u': 'sequence<double>',
        'init_p': 'geometry_msgs/Vector3',
        'init_v': 'geometry_msgs/Vector3',
        'init_a': 'geometry_msgs/Vector3',
        'tail_p': 'geometry_msgs/Vector3',
        'tail_v': 'geometry_msgs/Vector3',
        'tail_a': 'geometry_msgs/Vector3',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from builtin_interfaces.msg import Time
        self.traj_start_time = kwargs.get('traj_start_time', Time())
        self.control_points = kwargs.get('control_points', [])
        self.u = array.array('d', kwargs.get('u', []))
        from geometry_msgs.msg import Vector3
        self.init_p = kwargs.get('init_p', Vector3())
        from geometry_msgs.msg import Vector3
        self.init_v = kwargs.get('init_v', Vector3())
        from geometry_msgs.msg import Vector3
        self.init_a = kwargs.get('init_a', Vector3())
        from geometry_msgs.msg import Vector3
        self.tail_p = kwargs.get('tail_p', Vector3())
        from geometry_msgs.msg import Vector3
        self.tail_v = kwargs.get('tail_v', Vector3())
        from geometry_msgs.msg import Vector3
        self.tail_a = kwargs.get('tail_a', Vector3())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.traj_start_time != other.traj_start_time:
            return False
        if self.control_points != other.control_points:
            return False
        if self.u != other.u:
            return False
        if self.init_p != other.init_p:
            return False
        if self.init_v != other.init_v:
            return False
        if self.init_a != other.init_a:
            return False
        if self.tail_p != other.tail_p:
            return False
        if self.tail_v != other.tail_v:
            return False
        if self.tail_a != other.tail_a:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def traj_start_time(self):
        """Message field 'traj_start_time'."""
        return self._traj_start_time

    @traj_start_time.setter
    def traj_start_time(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'traj_start_time' field must be a sub message of type 'Time'"
        self._traj_start_time = value

    @builtins.property
    def control_points(self):
        """Message field 'control_points'."""
        return self._control_points

    @control_points.setter
    def control_points(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'control_points' field must be a set or sequence and each value of type 'Vector3'"
        self._control_points = value

    @builtins.property
    def u(self):
        """Message field 'u'."""
        return self._u

    @u.setter
    def u(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'u' array.array() must have the type code of 'd'"
                self._u = value
                return
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'u' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._u = array.array('d', value)

    @builtins.property
    def init_p(self):
        """Message field 'init_p'."""
        return self._init_p

    @init_p.setter
    def init_p(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'init_p' field must be a sub message of type 'Vector3'"
        self._init_p = value

    @builtins.property
    def init_v(self):
        """Message field 'init_v'."""
        return self._init_v

    @init_v.setter
    def init_v(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'init_v' field must be a sub message of type 'Vector3'"
        self._init_v = value

    @builtins.property
    def init_a(self):
        """Message field 'init_a'."""
        return self._init_a

    @init_a.setter
    def init_a(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'init_a' field must be a sub message of type 'Vector3'"
        self._init_a = value

    @builtins.property
    def tail_p(self):
        """Message field 'tail_p'."""
        return self._tail_p

    @tail_p.setter
    def tail_p(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'tail_p' field must be a sub message of type 'Vector3'"
        self._tail_p = value

    @builtins.property
    def tail_v(self):
        """Message field 'tail_v'."""
        return self._tail_v

    @tail_v.setter
    def tail_v(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'tail_v' field must be a sub message of type 'Vector3'"
        self._tail_v = value

    @builtins.property
    def tail_a(self):
        """Message field 'tail_a'."""
        return self._tail_a

    @tail_a.setter
    def tail_a(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'tail_a' field must be a sub message of type 'Vector3'"
        self._tail_a = value
