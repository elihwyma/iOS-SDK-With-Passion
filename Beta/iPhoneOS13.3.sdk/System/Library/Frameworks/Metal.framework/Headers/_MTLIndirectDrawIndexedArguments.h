/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@interface _MTLIndirectDrawIndexedArguments : NSObject

{
    unsigned long long _primitiveType;
    unsigned long long _indexCount;
    unsigned long long _indexType;
    void *_indexBufferVirtualAddress;
    unsigned long long _indexBufferOffset;
    unsigned long long _instanceCount;
    unsigned long long _baseVertex;
    unsigned long long _baseInstance;
}

@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic) unsigned long long indexCount;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) void *indexBufferVirtualAddress;
@property (nonatomic) unsigned long long indexBufferOffset;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long baseVertex;
@property (nonatomic) unsigned long long baseInstance;

@end
