/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol ENTTransport;

@interface ENTBinaryProtocol : NSObject

{
    _Bool _strictRead;
    _Bool _strictWrite;
    int _messageSizeLimit;
    id <ENTTransport> _transport;
}

@property (retain, nonatomic) id <ENTTransport> transport;
@property (nonatomic) _Bool strictRead;
@property (nonatomic) _Bool strictWrite;
@property (nonatomic) int messageSizeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)readDouble;
- (id)readString;
- (id)initWithTransport:(id)arg1;
- (unsigned char)readByte;
- (void)writeString:(id)arg1;
- (_Bool)readBool;
- (void)readMessageBeginReturningName:(id *)arg1 type:(int *)arg2 sequenceID:(int *)arg3;
- (void)readMessageEnd;
- (void)readStructBeginReturningName:(id *)arg1;
- (void)readStructEnd;
- (void)readFieldBeginReturningName:(id *)arg1 type:(int *)arg2 fieldID:(int *)arg3;
- (void)readFieldEnd;
- (short)readI16;
- (int)readI32;
- (long long)readI64;
- (id)readBinary;
- (void)readMapBeginReturningKeyType:(int *)arg1 valueType:(int *)arg2 size:(int *)arg3;
- (void)readMapEnd;
- (void)readSetBeginReturningElementType:(int *)arg1 size:(int *)arg2;
- (void)readSetEnd;
- (void)readListBeginReturningElementType:(int *)arg1 size:(int *)arg2;
- (void)readListEnd;
- (void)writeMessageBeginWithName:(id)arg1 type:(int)arg2 sequenceID:(int)arg3;
- (void)writeMessageEnd;
- (void)writeStructBeginWithName:(id)arg1;
- (void)writeStructEnd;
- (void)writeFieldBeginWithName:(id)arg1 type:(int)arg2 fieldID:(int)arg3;
- (void)writeI32:(int)arg1;
- (void)writeI64:(long long)arg1;
- (void)writeI16:(short)arg1;
- (void)writeByte:(unsigned char)arg1;
- (void)writeDouble:(double)arg1;
- (void)writeBool:(_Bool)arg1;
- (void)writeBinary:(id)arg1;
- (void)writeFieldStop;
- (void)writeFieldEnd;
- (void)writeMapBeginWithKeyType:(int)arg1 valueType:(int)arg2 size:(int)arg3;
- (void)writeMapEnd;
- (void)writeSetBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeSetEnd;
- (void)writeListBeginWithElementType:(int)arg1 size:(int)arg2;
- (void)writeListEnd;
- (id)initWithTransport:(id)arg1 strictRead:(_Bool)arg2 strictWrite:(_Bool)arg3;
- (id)readStringBody:(int)arg1;

@end
