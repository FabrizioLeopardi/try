// Auto-generated. Do not edit!

// (in-package assignment_2_2022.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class ReachedRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
    }
    else {
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReachedRequest
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReachedRequest
    let len;
    let data = new ReachedRequest(null);
    return data;
  }

  static getMessageSize(object) {
    return 0;
  }

  static datatype() {
    // Returns string type for a service object
    return 'assignment_2_2022/ReachedRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd41d8cd98f00b204e9800998ecf8427e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReachedRequest(null);
    return resolved;
    }
};

class ReachedResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.reached = null;
      this.cancelled = null;
    }
    else {
      if (initObj.hasOwnProperty('reached')) {
        this.reached = initObj.reached
      }
      else {
        this.reached = 0;
      }
      if (initObj.hasOwnProperty('cancelled')) {
        this.cancelled = initObj.cancelled
      }
      else {
        this.cancelled = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type ReachedResponse
    // Serialize message field [reached]
    bufferOffset = _serializer.int32(obj.reached, buffer, bufferOffset);
    // Serialize message field [cancelled]
    bufferOffset = _serializer.int32(obj.cancelled, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type ReachedResponse
    let len;
    let data = new ReachedResponse(null);
    // Deserialize message field [reached]
    data.reached = _deserializer.int32(buffer, bufferOffset);
    // Deserialize message field [cancelled]
    data.cancelled = _deserializer.int32(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 8;
  }

  static datatype() {
    // Returns string type for a service object
    return 'assignment_2_2022/ReachedResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'd21c4923e63883c429d739eacdfb354d';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 reached
    int32 cancelled
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new ReachedResponse(null);
    if (msg.reached !== undefined) {
      resolved.reached = msg.reached;
    }
    else {
      resolved.reached = 0
    }

    if (msg.cancelled !== undefined) {
      resolved.cancelled = msg.cancelled;
    }
    else {
      resolved.cancelled = 0
    }

    return resolved;
    }
};

module.exports = {
  Request: ReachedRequest,
  Response: ReachedResponse,
  md5sum() { return 'd21c4923e63883c429d739eacdfb354d'; },
  datatype() { return 'assignment_2_2022/Reached'; }
};
