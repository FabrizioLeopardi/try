# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from rosplan_dispatch_msgs/EsterelPlan.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import diagnostic_msgs.msg
import rosplan_dispatch_msgs.msg

class EsterelPlan(genpy.Message):
  _md5sum = "1e103f349c0e055ed599b6701e869ea7"
  _type = "rosplan_dispatch_msgs/EsterelPlan"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#EsterelPlan message
EsterelPlanNode[] nodes
EsterelPlanEdge[] edges

================================================================================
MSG: rosplan_dispatch_msgs/EsterelPlanNode
#EsterelPlanNode message

byte ACTION_START = 0
byte ACTION_END   = 1
byte PLAN_START   = 2

byte node_type
int32 node_id
string name
rosplan_dispatch_msgs/ActionDispatch action

int32[] edges_out
int32[] edges_in

================================================================================
MSG: rosplan_dispatch_msgs/ActionDispatch
#actionDispatch message
int32 action_id
int32 plan_id
string name
diagnostic_msgs/KeyValue[] parameters
float32 duration
float32 dispatch_time

================================================================================
MSG: diagnostic_msgs/KeyValue
string key # what to label this value when viewing
string value # a value to track over time

================================================================================
MSG: rosplan_dispatch_msgs/EsterelPlanEdge
#EsterelPlanEdge message

byte CONDITION_EDGE   = 0
byte START_END_ACTION_EDGE = 1
byte INTERFERENCE_EDGE = 2

byte edge_type
int32 edge_id
string edge_name
int32 signal_type
int32[] source_ids
int32[] sink_ids
float64 duration_lower_bound
float64 duration_upper_bound
"""
  __slots__ = ['nodes','edges']
  _slot_types = ['rosplan_dispatch_msgs/EsterelPlanNode[]','rosplan_dispatch_msgs/EsterelPlanEdge[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       nodes,edges

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(EsterelPlan, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.nodes is None:
        self.nodes = []
      if self.edges is None:
        self.edges = []
    else:
      self.nodes = []
      self.edges = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.nodes)
      buff.write(_struct_I.pack(length))
      for val1 in self.nodes:
        _x = val1
        buff.write(_get_struct_bi().pack(_x.node_type, _x.node_id))
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _v1 = val1.action
        _x = _v1
        buff.write(_get_struct_2i().pack(_x.action_id, _x.plan_id))
        _x = _v1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(_v1.parameters)
        buff.write(_struct_I.pack(length))
        for val3 in _v1.parameters:
          _x = val3.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val3.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = _v1
        buff.write(_get_struct_2f().pack(_x.duration, _x.dispatch_time))
        length = len(val1.edges_out)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(struct.Struct(pattern).pack(*val1.edges_out))
        length = len(val1.edges_in)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(struct.Struct(pattern).pack(*val1.edges_in))
      length = len(self.edges)
      buff.write(_struct_I.pack(length))
      for val1 in self.edges:
        _x = val1
        buff.write(_get_struct_bi().pack(_x.edge_type, _x.edge_id))
        _x = val1.edge_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.signal_type
        buff.write(_get_struct_i().pack(_x))
        length = len(val1.source_ids)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(struct.Struct(pattern).pack(*val1.source_ids))
        length = len(val1.sink_ids)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(struct.Struct(pattern).pack(*val1.sink_ids))
        _x = val1
        buff.write(_get_struct_2d().pack(_x.duration_lower_bound, _x.duration_upper_bound))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.nodes is None:
        self.nodes = None
      if self.edges is None:
        self.edges = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.nodes = []
      for i in range(0, length):
        val1 = rosplan_dispatch_msgs.msg.EsterelPlanNode()
        _x = val1
        start = end
        end += 5
        (_x.node_type, _x.node_id,) = _get_struct_bi().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        _v2 = val1.action
        _x = _v2
        start = end
        end += 8
        (_x.action_id, _x.plan_id,) = _get_struct_2i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v2.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v2.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v2.parameters = []
        for i in range(0, length):
          val3 = diagnostic_msgs.msg.KeyValue()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.key = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.value = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.value = str[start:end]
          _v2.parameters.append(val3)
        _x = _v2
        start = end
        end += 8
        (_x.duration, _x.dispatch_time,) = _get_struct_2f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.edges_out = s.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.edges_in = s.unpack(str[start:end])
        self.nodes.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.edges = []
      for i in range(0, length):
        val1 = rosplan_dispatch_msgs.msg.EsterelPlanEdge()
        _x = val1
        start = end
        end += 5
        (_x.edge_type, _x.edge_id,) = _get_struct_bi().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.edge_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.edge_name = str[start:end]
        start = end
        end += 4
        (val1.signal_type,) = _get_struct_i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.source_ids = s.unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.sink_ids = s.unpack(str[start:end])
        _x = val1
        start = end
        end += 16
        (_x.duration_lower_bound, _x.duration_upper_bound,) = _get_struct_2d().unpack(str[start:end])
        self.edges.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.nodes)
      buff.write(_struct_I.pack(length))
      for val1 in self.nodes:
        _x = val1
        buff.write(_get_struct_bi().pack(_x.node_type, _x.node_id))
        _x = val1.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _v3 = val1.action
        _x = _v3
        buff.write(_get_struct_2i().pack(_x.action_id, _x.plan_id))
        _x = _v3.name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        length = len(_v3.parameters)
        buff.write(_struct_I.pack(length))
        for val3 in _v3.parameters:
          _x = val3.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
          _x = val3.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = _v3
        buff.write(_get_struct_2f().pack(_x.duration, _x.dispatch_time))
        length = len(val1.edges_out)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(val1.edges_out.tostring())
        length = len(val1.edges_in)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(val1.edges_in.tostring())
      length = len(self.edges)
      buff.write(_struct_I.pack(length))
      for val1 in self.edges:
        _x = val1
        buff.write(_get_struct_bi().pack(_x.edge_type, _x.edge_id))
        _x = val1.edge_name
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
        _x = val1.signal_type
        buff.write(_get_struct_i().pack(_x))
        length = len(val1.source_ids)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(val1.source_ids.tostring())
        length = len(val1.sink_ids)
        buff.write(_struct_I.pack(length))
        pattern = '<%si'%length
        buff.write(val1.sink_ids.tostring())
        _x = val1
        buff.write(_get_struct_2d().pack(_x.duration_lower_bound, _x.duration_upper_bound))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.nodes is None:
        self.nodes = None
      if self.edges is None:
        self.edges = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.nodes = []
      for i in range(0, length):
        val1 = rosplan_dispatch_msgs.msg.EsterelPlanNode()
        _x = val1
        start = end
        end += 5
        (_x.node_type, _x.node_id,) = _get_struct_bi().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.name = str[start:end]
        _v4 = val1.action
        _x = _v4
        start = end
        end += 8
        (_x.action_id, _x.plan_id,) = _get_struct_2i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          _v4.name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          _v4.name = str[start:end]
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        _v4.parameters = []
        for i in range(0, length):
          val3 = diagnostic_msgs.msg.KeyValue()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.key = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val3.value = str[start:end].decode('utf-8', 'rosmsg')
          else:
            val3.value = str[start:end]
          _v4.parameters.append(val3)
        _x = _v4
        start = end
        end += 8
        (_x.duration, _x.dispatch_time,) = _get_struct_2f().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.edges_out = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.edges_in = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
        self.nodes.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.edges = []
      for i in range(0, length):
        val1 = rosplan_dispatch_msgs.msg.EsterelPlanEdge()
        _x = val1
        start = end
        end += 5
        (_x.edge_type, _x.edge_id,) = _get_struct_bi().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.edge_name = str[start:end].decode('utf-8', 'rosmsg')
        else:
          val1.edge_name = str[start:end]
        start = end
        end += 4
        (val1.signal_type,) = _get_struct_i().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.source_ids = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        pattern = '<%si'%length
        start = end
        s = struct.Struct(pattern)
        end += s.size
        val1.sink_ids = numpy.frombuffer(str[start:end], dtype=numpy.int32, count=length)
        _x = val1
        start = end
        end += 16
        (_x.duration_lower_bound, _x.duration_upper_bound,) = _get_struct_2d().unpack(str[start:end])
        self.edges.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2d = None
def _get_struct_2d():
    global _struct_2d
    if _struct_2d is None:
        _struct_2d = struct.Struct("<2d")
    return _struct_2d
_struct_2f = None
def _get_struct_2f():
    global _struct_2f
    if _struct_2f is None:
        _struct_2f = struct.Struct("<2f")
    return _struct_2f
_struct_2i = None
def _get_struct_2i():
    global _struct_2i
    if _struct_2i is None:
        _struct_2i = struct.Struct("<2i")
    return _struct_2i
_struct_bi = None
def _get_struct_bi():
    global _struct_bi
    if _struct_bi is None:
        _struct_bi = struct.Struct("<bi")
    return _struct_bi
_struct_i = None
def _get_struct_i():
    global _struct_i
    if _struct_i is None:
        _struct_i = struct.Struct("<i")
    return _struct_i
