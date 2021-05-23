/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsParallelRenderCommandEncoder.h>

@class MTLRenderPassDescriptor;

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder

{
    unsigned int _unknownStoreActions;
    MTLRenderPassDescriptor *_descriptor;
}

@property (copy, nonatomic, readonly) MTLRenderPassDescriptor *descriptor;

- (void)dealloc;
- (id)description;
- (void)endEncoding;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (id)initWithBaseRenderPass:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3;

@end
