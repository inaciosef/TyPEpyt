; Auto-generated. Do not edit!


(cl:in-package typepyt-msg)


;//! \htmlinclude ArmJointAnglesResult.msg.html

(cl:defclass <ArmJointAnglesResult> (roslisp-msg-protocol:ros-message)
  ((angles
    :reader angles
    :initarg :angles
    :type typepyt-msg:JointAngles
    :initform (cl:make-instance 'typepyt-msg:JointAngles)))
)

(cl:defclass ArmJointAnglesResult (<ArmJointAnglesResult>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ArmJointAnglesResult>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ArmJointAnglesResult)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name typepyt-msg:<ArmJointAnglesResult> is deprecated: use typepyt-msg:ArmJointAnglesResult instead.")))

(cl:ensure-generic-function 'angles-val :lambda-list '(m))
(cl:defmethod angles-val ((m <ArmJointAnglesResult>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader typepyt-msg:angles-val is deprecated.  Use typepyt-msg:angles instead.")
  (angles m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ArmJointAnglesResult>) ostream)
  "Serializes a message object of type '<ArmJointAnglesResult>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'angles) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ArmJointAnglesResult>) istream)
  "Deserializes a message object of type '<ArmJointAnglesResult>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'angles) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ArmJointAnglesResult>)))
  "Returns string type for a message object of type '<ArmJointAnglesResult>"
  "typepyt/ArmJointAnglesResult")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ArmJointAnglesResult)))
  "Returns string type for a message object of type 'ArmJointAnglesResult"
  "typepyt/ArmJointAnglesResult")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ArmJointAnglesResult>)))
  "Returns md5sum for a message object of type '<ArmJointAnglesResult>"
  "2b177ebe4b350b7b614560d610addf92")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ArmJointAnglesResult)))
  "Returns md5sum for a message object of type 'ArmJointAnglesResult"
  "2b177ebe4b350b7b614560d610addf92")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ArmJointAnglesResult>)))
  "Returns full string definition for message of type '<ArmJointAnglesResult>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Result~%JointAngles angles~%~%================================================================================~%MSG: typepyt/JointAngles~%float32 hip~%float32 shoulder~%float32 elbow~%float32 wrist~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ArmJointAnglesResult)))
  "Returns full string definition for message of type 'ArmJointAnglesResult"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%# Result~%JointAngles angles~%~%================================================================================~%MSG: typepyt/JointAngles~%float32 hip~%float32 shoulder~%float32 elbow~%float32 wrist~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ArmJointAnglesResult>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'angles))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ArmJointAnglesResult>))
  "Converts a ROS message object to a list"
  (cl:list 'ArmJointAnglesResult
    (cl:cons ':angles (angles msg))
))