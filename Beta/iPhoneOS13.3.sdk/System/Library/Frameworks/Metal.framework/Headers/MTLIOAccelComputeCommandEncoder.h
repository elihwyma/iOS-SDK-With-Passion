/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLIOAccelCommandEncoder.h>

@interface MTLIOAccelComputeCommandEncoder : MTLIOAccelCommandEncoder

- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)updateFence:(id)arg1;
- (void)waitForFence:(id)arg1;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)getType;
- (id)getComputePipelineState;
- (void *)getBufferContentsAtIndex:(unsigned long long)arg1;
- (void)setEmulationBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setEmulationTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setEmulationSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)bindEmulationArguments;

@end
