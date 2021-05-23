/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLModelSerialize : NSObject

+ (id)verifySignature:(id)arg1;
+ (id)decode:(id)arg1;
+ (id)pack:(const struct ProtobufCMessage *)arg1;
+ (struct ProtobufCMessage *)unpackData:(id)arg1 withDescriptor:(const struct ProtobufCMessageDescriptor *)arg2;
+ (id)decodeZ85:(id)arg1;

@end
