/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLObject.h>

@class NSArray, NUGLBuffer, NUGLVertexLayout;

@interface NUGLVertexArray : NUGLObject

{
    NUGLBuffer *_buffer;
    NSArray *_locations;
    _Bool _needsUpdate;
    NUGLVertexLayout *_layout;
    long long _capacity;
    long long _count;
    NSArray *_attributeLocations;
}

@property (nonatomic, readonly) NUGLVertexLayout *layout;
@property (nonatomic, readonly) long long capacity;
@property (nonatomic, readonly) long long count;
@property (copy, nonatomic) NSArray *attributeLocations;

- (id)init;
- (void)reset;
- (void)delete;
- (void)generate:(id)arg1;
- (void)ensure:(id)arg1;
- (id)initWithLayout:(id)arg1 capacity:(long long)arg2;
- (void)_updateAttributesWithContext:(id)arg1;
- (void)readVertexDataInRange:(struct _NSRange)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (struct _NSRange)bufferRangeForVertexRange:(struct _NSRange)arg1;
- (struct _NSRange)writeVertexData:(long long)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_growToCapacity:(long long)arg1 context:(id)arg2;

@end
