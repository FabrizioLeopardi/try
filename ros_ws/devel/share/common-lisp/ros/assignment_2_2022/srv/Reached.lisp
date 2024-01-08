; Auto-generated. Do not edit!


(cl:in-package assignment_2_2022-srv)


;//! \htmlinclude Reached-request.msg.html

(cl:defclass <Reached-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass Reached-request (<Reached-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Reached-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Reached-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name assignment_2_2022-srv:<Reached-request> is deprecated: use assignment_2_2022-srv:Reached-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Reached-request>) ostream)
  "Serializes a message object of type '<Reached-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Reached-request>) istream)
  "Deserializes a message object of type '<Reached-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Reached-request>)))
  "Returns string type for a service object of type '<Reached-request>"
  "assignment_2_2022/ReachedRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Reached-request)))
  "Returns string type for a service object of type 'Reached-request"
  "assignment_2_2022/ReachedRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Reached-request>)))
  "Returns md5sum for a message object of type '<Reached-request>"
  "d21c4923e63883c429d739eacdfb354d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Reached-request)))
  "Returns md5sum for a message object of type 'Reached-request"
  "d21c4923e63883c429d739eacdfb354d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Reached-request>)))
  "Returns full string definition for message of type '<Reached-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Reached-request)))
  "Returns full string definition for message of type 'Reached-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Reached-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Reached-request>))
  "Converts a ROS message object to a list"
  (cl:list 'Reached-request
))
;//! \htmlinclude Reached-response.msg.html

(cl:defclass <Reached-response> (roslisp-msg-protocol:ros-message)
  ((reached
    :reader reached
    :initarg :reached
    :type cl:integer
    :initform 0)
   (cancelled
    :reader cancelled
    :initarg :cancelled
    :type cl:integer
    :initform 0))
)

(cl:defclass Reached-response (<Reached-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <Reached-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'Reached-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name assignment_2_2022-srv:<Reached-response> is deprecated: use assignment_2_2022-srv:Reached-response instead.")))

(cl:ensure-generic-function 'reached-val :lambda-list '(m))
(cl:defmethod reached-val ((m <Reached-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader assignment_2_2022-srv:reached-val is deprecated.  Use assignment_2_2022-srv:reached instead.")
  (reached m))

(cl:ensure-generic-function 'cancelled-val :lambda-list '(m))
(cl:defmethod cancelled-val ((m <Reached-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader assignment_2_2022-srv:cancelled-val is deprecated.  Use assignment_2_2022-srv:cancelled instead.")
  (cancelled m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <Reached-response>) ostream)
  "Serializes a message object of type '<Reached-response>"
  (cl:let* ((signed (cl:slot-value msg 'reached)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
  (cl:let* ((signed (cl:slot-value msg 'cancelled)) (unsigned (cl:if (cl:< signed 0) (cl:+ signed 4294967296) signed)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) unsigned) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) unsigned) ostream)
    )
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <Reached-response>) istream)
  "Deserializes a message object of type '<Reached-response>"
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'reached) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
    (cl:let ((unsigned 0))
      (cl:setf (cl:ldb (cl:byte 8 0) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) unsigned) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) unsigned) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'cancelled) (cl:if (cl:< unsigned 2147483648) unsigned (cl:- unsigned 4294967296))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<Reached-response>)))
  "Returns string type for a service object of type '<Reached-response>"
  "assignment_2_2022/ReachedResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Reached-response)))
  "Returns string type for a service object of type 'Reached-response"
  "assignment_2_2022/ReachedResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<Reached-response>)))
  "Returns md5sum for a message object of type '<Reached-response>"
  "d21c4923e63883c429d739eacdfb354d")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'Reached-response)))
  "Returns md5sum for a message object of type 'Reached-response"
  "d21c4923e63883c429d739eacdfb354d")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<Reached-response>)))
  "Returns full string definition for message of type '<Reached-response>"
  (cl:format cl:nil "int32 reached~%int32 cancelled~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'Reached-response)))
  "Returns full string definition for message of type 'Reached-response"
  (cl:format cl:nil "int32 reached~%int32 cancelled~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <Reached-response>))
  (cl:+ 0
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <Reached-response>))
  "Converts a ROS message object to a list"
  (cl:list 'Reached-response
    (cl:cons ':reached (reached msg))
    (cl:cons ':cancelled (cancelled msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'Reached)))
  'Reached-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'Reached)))
  'Reached-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'Reached)))
  "Returns string type for a service object of type '<Reached>"
  "assignment_2_2022/Reached")