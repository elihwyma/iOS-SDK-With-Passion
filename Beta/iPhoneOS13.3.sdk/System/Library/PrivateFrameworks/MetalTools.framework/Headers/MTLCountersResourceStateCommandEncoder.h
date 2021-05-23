/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsResourceStateCommandEncoder.h>

@class MTLCountersTraceResourceStateCommandEncoder;

@interface MTLCountersResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder

{
    MTLCountersTraceResourceStateCommandEncoder *_traceEncoder;
}

- (void)dealloc;
- (void)endEncoding;
- (void)setLabel:(id)arg1;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (void)insertDebugSignpost:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)waitForFence:(id)arg1;
- (void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const CDStruct_1e3be3a8 *)arg3 mipLevels:(const unsigned long long *)arg4 slices:(const unsigned long long *)arg5 numRegions:(unsigned long long)arg6;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(CDStruct_1e3be3a8)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4;
- (void)copyMappingStateFromTexture:(id)arg1 mipLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 toBuffer:(id)arg4 offset:(unsigned long long)arg5 numTiles:(unsigned long long)arg6;
- (id)initWithResourceStateCommandEncoder:(id)arg1 commandBuffer:(id)arg2;

@end
