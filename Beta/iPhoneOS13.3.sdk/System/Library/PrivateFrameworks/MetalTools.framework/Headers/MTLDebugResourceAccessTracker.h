/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MTLDebugResourceAccessTracker : NSObject

{
    unsigned int _accessedByGPUFrameCount;
    unsigned int _accessedByCPUFrameCount;
    unsigned int _prevFrameNumGPUAccessed;
    unsigned int _prevFrameNumCPUAccessed;
    unsigned int _firstAccessFrameByCPU;
    unsigned int _stateMask;
}

+ (void)recordResourceAccessesForColorAttachmentsWithDescriptor:(id)arg1 renderPipelineState:(id)arg2 forEndEncoding:(_Bool)arg3 deferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg4;
+ (void)recordResourceAccessesForDepthAttachmentWithDescriptor:(id)arg1 forEndEncoding:(_Bool)arg2 deferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg3;
+ (void)recordResourceAccessesForStencilAttachmentWithDescriptor:(id)arg1 forEndEncoding:(_Bool)arg2 deferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg3;
+ (void)recordResourceAccessesForAttachment:(const struct MTLRenderPassAttachmentDescriptorPrivate *)arg1 withStoreAction:(unsigned long long)arg2;
+ (void)_recordResourceAccessesForRenderTargetTexture:(id)arg1;
+ (void)resourceTrackingRecordAccessesToArguments:(id)arg1 bufferFuncArgsPtr:(CDStruct_0f4bf8df *)arg2 textureFuncArgsPtr:(CDStruct_0f4bf8df *)arg3 buffersBoundForWrite:(id)arg4 texturesBoundForWrite:(id)arg5;
+ (_Bool)hasValidViewports:(CDStruct_8727d297 *)arg1 viewportCount:(unsigned int)arg2 scissorRects:(CDStruct_5f3a0cd7 *)arg3 scissorRectCount:(unsigned int)arg4;
+ (void)recordRenderTargetAccessesForEndEncoding:(_Bool)arg1 descriptor:(id)arg2 renderPipelineState:(id)arg3 depthStencilState:(id)arg4 deferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg5;
+ (void)processDeferredAttachments:(struct ResourceTrackingDeferredAttachments *)arg1;

- (id)init;
- (void)reset;
- (void)accessedBy:(int)arg1 frame:(unsigned int)arg2 accessTypes:(unsigned int)arg3;
- (unsigned int)conclude;

@end
