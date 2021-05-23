/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface _MTLIndirectDrawArguments : NSObject

{
    unsigned long long _primitiveType;
    unsigned long long _vertexStart;
    unsigned long long _vertexCount;
    unsigned long long _instanceCount;
    unsigned long long _baseInstance;
}

@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic) unsigned long long vertexStart;
@property (nonatomic) unsigned long long vertexCount;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long baseInstance;

@end
