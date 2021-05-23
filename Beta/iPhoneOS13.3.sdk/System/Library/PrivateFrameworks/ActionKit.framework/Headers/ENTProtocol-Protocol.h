/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/Swift-Protocol.h>

@protocol ENTProtocol <Swift>

- (unsigned short)transport;
- (unsigned short)readDouble;
- (unsigned short)readString;
- (unsigned short)readByte;
- (unsigned short)writeString: /* Error: Ran out of types for this method. */;
- (unsigned short)readBool;
- (unsigned short)readMessageBeginReturningName:type:sequenceID: /* Error: Ran out of types for this method. */;
- (unsigned short)readMessageEnd;
- (unsigned short)readStructBeginReturningName: /* Error: Ran out of types for this method. */;
- (unsigned short)readStructEnd;
- (unsigned short)readFieldBeginReturningName:type:fieldID: /* Error: Ran out of types for this method. */;
- (unsigned short)readFieldEnd;
- (unsigned short)readI16;
- (unsigned short)readI32;
- (unsigned short)readI64;
- (unsigned short)readBinary;
- (unsigned short)readMapBeginReturningKeyType:valueType:size: /* Error: Ran out of types for this method. */;
- (unsigned short)readMapEnd;
- (unsigned short)readSetBeginReturningElementType:size: /* Error: Ran out of types for this method. */;
- (unsigned short)readSetEnd;
- (unsigned short)readListBeginReturningElementType:size: /* Error: Ran out of types for this method. */;
- (unsigned short)readListEnd;
- (unsigned short)writeMessageBeginWithName:type:sequenceID: /* Error: Ran out of types for this method. */;
- (unsigned short)writeMessageEnd;
- (unsigned short)writeStructBeginWithName: /* Error: Ran out of types for this method. */;
- (unsigned short)writeStructEnd;
- (unsigned short)writeFieldBeginWithName:type:fieldID: /* Error: Ran out of types for this method. */;
- (unsigned short)writeI32: /* Error: Ran out of types for this method. */;
- (unsigned short)writeI64: /* Error: Ran out of types for this method. */;
- (unsigned short)writeI16: /* Error: Ran out of types for this method. */;
- (unsigned short)writeByte: /* Error: Ran out of types for this method. */;
- (unsigned short)writeDouble: /* Error: Ran out of types for this method. */;
- (unsigned short)writeBool: /* Error: Ran out of types for this method. */;
- (unsigned short)writeBinary: /* Error: Ran out of types for this method. */;
- (unsigned short)writeFieldStop;
- (unsigned short)writeFieldEnd;
- (unsigned short)writeMapBeginWithKeyType:valueType:size: /* Error: Ran out of types for this method. */;
- (unsigned short)writeMapEnd;
- (unsigned short)writeSetBeginWithElementType:size: /* Error: Ran out of types for this method. */;
- (unsigned short)writeSetEnd;
- (unsigned short)writeListBeginWithElementType:size: /* Error: Ran out of types for this method. */;
- (unsigned short)writeListEnd;

@end
