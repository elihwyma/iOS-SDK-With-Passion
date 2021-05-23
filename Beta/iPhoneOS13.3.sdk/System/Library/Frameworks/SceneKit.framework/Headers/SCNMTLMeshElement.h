/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class SCNMTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLMeshElement : NSObject

{
    unsigned long long _primitiveType;
    long long _indexCount;
    unsigned long long _instanceCount;
    long long _sharedIndexBufferOffset;
    SCNMTLBuffer *_indexBuffer;
    unsigned long long _indexType;
    long long _effectiveIndexOffset;
    long long _effectiveIndexCount;
}

@property (nonatomic) long long indexCount;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) long long sharedIndexBufferOffset;
@property (retain, nonatomic) SCNMTLBuffer *indexBuffer;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic, readonly) long long primitiveCount;
@property (nonatomic, readonly) long long effectiveIndexOffset;
@property (nonatomic, readonly) long long effectiveIndexCount;

- (void)dealloc;
- (id)description;
- (void)setupWithElement:(struct __C3DMeshElement *)arg1;
- (void)setPrimitiveRange:(CDStruct_912cb5d2)arg1;

@end
