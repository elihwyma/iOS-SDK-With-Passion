/*
 Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

#import <Foundation/NSObject.h>

@interface BSProtobufSerialization : NSObject

+ (id)decodeObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;
+ (id)encodeObject:(id)arg1 error:(id *)arg2;
+ (id)buildSchemaForClass:(Class)arg1 builder:(CDUnknownBlockType)arg2;

@end
