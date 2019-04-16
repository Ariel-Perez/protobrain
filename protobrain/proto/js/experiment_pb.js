/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var encoder_pb = require('./encoder_pb.js');
goog.object.extend(proto, encoder_pb);
goog.exportSymbol('proto.protobrain.Cortex', null, global);
goog.exportSymbol('proto.protobrain.Experiment', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.protobrain.Experiment = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.protobrain.Experiment, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.protobrain.Experiment.displayName = 'proto.protobrain.Experiment';
}
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.protobrain.Cortex = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.protobrain.Cortex.repeatedFields_, null);
};
goog.inherits(proto.protobrain.Cortex, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.protobrain.Cortex.displayName = 'proto.protobrain.Cortex';
}



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.protobrain.Experiment.prototype.toObject = function(opt_includeInstance) {
  return proto.protobrain.Experiment.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protobrain.Experiment} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protobrain.Experiment.toObject = function(includeInstance, msg) {
  var f, obj = {
    encoder: (f = msg.getEncoder()) && encoder_pb.Encoder.toObject(includeInstance, f),
    cortex: (f = msg.getCortex()) && proto.protobrain.Cortex.toObject(includeInstance, f)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.protobrain.Experiment}
 */
proto.protobrain.Experiment.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protobrain.Experiment;
  return proto.protobrain.Experiment.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protobrain.Experiment} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protobrain.Experiment}
 */
proto.protobrain.Experiment.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new encoder_pb.Encoder;
      reader.readMessage(value,encoder_pb.Encoder.deserializeBinaryFromReader);
      msg.setEncoder(value);
      break;
    case 2:
      var value = new proto.protobrain.Cortex;
      reader.readMessage(value,proto.protobrain.Cortex.deserializeBinaryFromReader);
      msg.setCortex(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.protobrain.Experiment.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protobrain.Experiment.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protobrain.Experiment} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protobrain.Experiment.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getEncoder();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      encoder_pb.Encoder.serializeBinaryToWriter
    );
  }
  f = message.getCortex();
  if (f != null) {
    writer.writeMessage(
      2,
      f,
      proto.protobrain.Cortex.serializeBinaryToWriter
    );
  }
};


/**
 * optional Encoder encoder = 1;
 * @return {?proto.protobrain.Encoder}
 */
proto.protobrain.Experiment.prototype.getEncoder = function() {
  return /** @type{?proto.protobrain.Encoder} */ (
    jspb.Message.getWrapperField(this, encoder_pb.Encoder, 1));
};


/** @param {?proto.protobrain.Encoder|undefined} value */
proto.protobrain.Experiment.prototype.setEncoder = function(value) {
  jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.protobrain.Experiment.prototype.clearEncoder = function() {
  this.setEncoder(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.protobrain.Experiment.prototype.hasEncoder = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional Cortex cortex = 2;
 * @return {?proto.protobrain.Cortex}
 */
proto.protobrain.Experiment.prototype.getCortex = function() {
  return /** @type{?proto.protobrain.Cortex} */ (
    jspb.Message.getWrapperField(this, proto.protobrain.Cortex, 2));
};


/** @param {?proto.protobrain.Cortex|undefined} value */
proto.protobrain.Experiment.prototype.setCortex = function(value) {
  jspb.Message.setWrapperField(this, 2, value);
};


/**
 * Clears the message field making it undefined.
 */
proto.protobrain.Experiment.prototype.clearCortex = function() {
  this.setCortex(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.protobrain.Experiment.prototype.hasCortex = function() {
  return jspb.Message.getField(this, 2) != null;
};



/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.protobrain.Cortex.repeatedFields_ = [1];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.protobrain.Cortex.prototype.toObject = function(opt_includeInstance) {
  return proto.protobrain.Cortex.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protobrain.Cortex} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protobrain.Cortex.toObject = function(includeInstance, msg) {
  var f, obj = {
    layerList: jspb.Message.getRepeatedField(msg, 1)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.protobrain.Cortex}
 */
proto.protobrain.Cortex.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protobrain.Cortex;
  return proto.protobrain.Cortex.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protobrain.Cortex} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protobrain.Cortex}
 */
proto.protobrain.Cortex.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt32());
      msg.addLayer(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.protobrain.Cortex.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protobrain.Cortex.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protobrain.Cortex} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protobrain.Cortex.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getLayerList();
  if (f.length > 0) {
    writer.writeRepeatedInt32(
      1,
      f
    );
  }
};


/**
 * repeated int32 layer = 1;
 * @return {!Array<number>}
 */
proto.protobrain.Cortex.prototype.getLayerList = function() {
  return /** @type {!Array<number>} */ (jspb.Message.getRepeatedField(this, 1));
};


/** @param {!Array<number>} value */
proto.protobrain.Cortex.prototype.setLayerList = function(value) {
  jspb.Message.setField(this, 1, value || []);
};


/**
 * @param {number} value
 * @param {number=} opt_index
 */
proto.protobrain.Cortex.prototype.addLayer = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 1, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.protobrain.Cortex.prototype.clearLayerList = function() {
  this.setLayerList([]);
};


goog.object.extend(exports, proto.protobrain);
