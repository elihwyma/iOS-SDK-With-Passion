/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol MTLCommandBuffer, MTLCommandQueue, MTLComputeCommandEncoder, MTLRenderCommandEncoder, MTLTexture;

@interface PKMetalRenderState : NSObject

{
    NSMutableArray *_commandBuffers;
    _Bool _liveRendering;
    _Bool _waitUntilCompletedOnCommit;
    _Bool _msaaRendering;
    _Bool _renderOnPaper;
    _Bool _needRenderMask;
    id <MTLCommandQueue> _commandQueue;
    id <MTLCommandBuffer> _commandBuffer;
    id <MTLCommandBuffer> _computeCommandBuffer;
    id <MTLCommandBuffer> _maskCommandBuffer;
    id <MTLRenderCommandEncoder> _renderEncoder;
    id <MTLComputeCommandEncoder> _computeEncoder;
    id <MTLRenderCommandEncoder> _maskRenderEncoder;
    unsigned long long _vertexEncodeCount;
    id <MTLTexture> _destinationTexture;
    unsigned long long _destinationColorAttachmentIndex;
    CDStruct_5f3a0cd7 _scissorRect;
}

@property (nonatomic, readonly) id <MTLCommandQueue> commandQueue;
@property (nonatomic, readonly) id <MTLCommandBuffer> commandBuffer;
@property (nonatomic, readonly) id <MTLCommandBuffer> computeCommandBuffer;
@property (nonatomic, readonly) id <MTLCommandBuffer> maskCommandBuffer;
@property (retain, nonatomic) id <MTLRenderCommandEncoder> renderEncoder;
@property (retain, nonatomic) id <MTLComputeCommandEncoder> computeEncoder;
@property (retain, nonatomic) id <MTLRenderCommandEncoder> maskRenderEncoder;
@property (nonatomic) unsigned long long vertexEncodeCount;
@property (retain, nonatomic) id <MTLTexture> destinationTexture;
@property (nonatomic) unsigned long long destinationColorAttachmentIndex;
@property (nonatomic) _Bool liveRendering;
@property (nonatomic) _Bool waitUntilCompletedOnCommit;
@property (nonatomic) _Bool msaaRendering;
@property (nonatomic) _Bool renderOnPaper;
@property (nonatomic) _Bool needRenderMask;
@property (nonatomic) CDStruct_5f3a0cd7 scissorRect;

+ (void)renderTargetBarrierForRenderEncoder:(id)arg1;

- (void)dealloc;
- (void)cancel;
- (void)commit;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)commitAndPurgeResourceSet:(id)arg1;
- (void)renderTargetBarrier;
- (void)commitMaskCommandBuffer;
- (id)initWithCommandQueue:(id)arg1 liveRendering:(_Bool)arg2;
- (id)commandBufferCreateIfNecessary;
- (id)computeCommandBufferCreateIfNecessary;
- (id)maskCommandBufferCreateIfNecessary;
- (void)addCommandBuffer:(id)arg1;

@end
