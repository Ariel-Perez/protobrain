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

goog.exportSymbol('proto.protobrain.SparseDistributedRepresentation', null, global);
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
proto.protobrain.SparseDistributedRepresentation = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.protobrain.SparseDistributedRepresentation.repeatedFields_, null);
};
goog.inherits(proto.protobrain.SparseDistributedRepresentation, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.protobrain.SparseDistributedRepresentation.displayName = 'proto.protobrain.SparseDistributedRepresentation';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.protobrain.SparseDistributedRepresentation.repeatedFields_ = [1,2];



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
proto.protobrain.SparseDistributedRepresentation.prototype.toObject = function(opt_includeInstance) {
  return proto.protobrain.SparseDistributedRepresentation.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.protobrain.SparseDistributedRepresentation} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protobrain.SparseDistributedRepresentation.toObject = function(includeInstance, msg) {
  var f, obj = {
    shapeList: jspb.Message.getRepeatedField(msg, 1),
    onBitsList: jspb.Message.getRepeatedField(msg, 2)
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
 * @return {!proto.protobrain.SparseDistributedRepresentation}
 */
proto.protobrain.SparseDistributedRepresentation.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.protobrain.SparseDistributedRepresentation;
  return proto.protobrain.SparseDistributedRepresentation.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.protobrain.SparseDistributedRepresentation} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.protobrain.SparseDistributedRepresentation}
 */
proto.protobrain.SparseDistributedRepresentation.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {number} */ (reader.readInt32());
      msg.addShape(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readInt32());
      msg.addOnBits(value);
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
proto.protobrain.SparseDistributedRepresentation.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.protobrain.SparseDistributedRepresentation.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.protobrain.SparseDistributedRepresentation} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.protobrain.SparseDistributedRepresentation.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getShapeList();
  if (f.length > 0) {
    writer.writeRepeatedInt32(
      1,
      f
    );
  }
  f = message.getOnBitsList();
  if (f.length > 0) {
    writer.writeRepeatedInt32(
      2,
      f
    );
  }
};


/**
 * repeated int32 shape = 1;
 * @return {!Array<number>}
 */
proto.protobrain.SparseDistributedRepresentation.prototype.getShapeList = function() {
  return /** @type {!Array<number>} */ (jspb.Message.getRepeatedField(this, 1));
};


/** @param {!Array<number>} value */
proto.protobrain.SparseDistributedRepresentation.prototype.setShapeList = function(value) {
  jspb.Message.setField(this, 1, value || []);
};


/**
 * @param {number} value
 * @param {number=} opt_index
 */
proto.protobrain.SparseDistributedRepresentation.prototype.addShape = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 1, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.protobrain.SparseDistributedRepresentation.prototype.clearShapeList = function() {
  this.setShapeList([]);
};


/**
 * repeated int32 on_bits = 2;
 * @return {!Array<number>}
 */
proto.protobrain.SparseDistributedRepresentation.prototype.getOnBitsList = function() {
  return /** @type {!Array<number>} */ (jspb.Message.getRepeatedField(this, 2));
};


/** @param {!Array<number>} value */
proto.protobrain.SparseDistributedRepresentation.prototype.setOnBitsList = function(value) {
  jspb.Message.setField(this, 2, value || []);
};


/**
 * @param {number} value
 * @param {number=} opt_index
 */
proto.protobrain.SparseDistributedRepresentation.prototype.addOnBits = function(value, opt_index) {
  jspb.Message.addToRepeatedField(this, 2, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 */
proto.protobrain.SparseDistributedRepresentation.prototype.clearOnBitsList = function() {
  this.setOnBitsList([]);
};


goog.object.extend(exports, proto.protobrain);
