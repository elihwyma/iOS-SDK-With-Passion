/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

@class MTLRenderPassDescriptor, NSString, _MTLCommandBuffer;

@protocol MTLCommandBuffer, MTLCommandQueue, MTLDevice;

@interface _MTLParallelRenderCommandEncoder : _MTLObjectWithLabel

{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _queue;
    unsigned long long _globalTraceObjectID;
    unsigned long long _labelTraceID;
    _MTLCommandBuffer<MTLCommandBuffer> *_commandBuffer;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    struct _opaque_pthread_mutex_t _lock;
    unsigned long long _commandBuffersSize;
    unsigned long long _commandBuffersCount;
    id *_commandBuffers;
    _Bool _retainedReferences;
    _Bool _StatEnabled;
    unsigned long long _numThisEncoder;
}

@property (readonly) unsigned long long globalTraceObjectID;
@property (nonatomic, readonly, getter=getType) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;

- (void)dealloc;
- (void)endEncoding;
- (id)commandBuffer;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)insertDebugSignpost:(id)arg1;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)_renderCommandEncoderCommon;
- (id)renderCommandEncoder;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (_Bool)isMemorylessRender;

@end
