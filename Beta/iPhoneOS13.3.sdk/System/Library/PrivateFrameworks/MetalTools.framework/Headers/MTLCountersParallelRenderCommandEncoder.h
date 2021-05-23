/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLCountersParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder

{
    MTLRenderPassDescriptor *_descriptor;
}

- (void)dealloc;
- (void)endEncoding;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;

@end
