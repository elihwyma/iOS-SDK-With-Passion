//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@class MTLCountersTraceComputeCommandEncoder;

@interface MTLCountersComputeCommandEncoder : MTLToolsComputeCommandEncoder
{
    MTLCountersTraceComputeCommandEncoder *_traceEncoder;
}

- (void)memoryBarrierWithResources:(const id )arg1 count:(NSUInteger)arg2;
- (void)memoryBarrierWithScope:(NSUInteger)arg1;
- (void)useHeaps:(const id )arg1 count:(NSUInteger)arg2;
- (void)useHeap:(id)arg1;
- (void)useResources:(const id )arg1 count:(NSUInteger)arg2 usage:(NSUInteger)arg3;
- (void)useResource:(id)arg1 usage:(NSUInteger)arg2;
- (void)endEncoding;
- (void)waitForFence:(id)arg1;
- (void)updateFence:(id)arg1;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2;
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;
- (void)setImageBlockWidth:(NSUInteger)arg1 height:(NSUInteger)arg2;
- (void)setThreadgroupMemoryLength:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setSamplerStates:(const id )arg1 lodMinClamps:(const float )arg2 lodMaxClamps:(const float )arg3 withRange:(NSRange)arg4;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(NSUInteger)arg4;
- (void)setSamplerStates:(const id )arg1 withRange:(NSRange)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setTextures:(const id )arg1 withRange:(NSRange)arg2;
- (void)setTexture:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)setBuffers:(const id )arg1 offsets:(const NSUInteger )arg2 withRange:(NSRange)arg3;
- (void)setBufferOffset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2;
- (void)setBuffer:(id)arg1 offset:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setBytes:(const void )arg1 length:(NSUInteger)arg2 atIndex:(NSUInteger)arg3;
- (void)setComputePipelineState:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)popDebugGroup;
- (void)pushDebugGroup:(id)arg1;
- (void)insertDebugSignpost:(id)arg1;
- (void)dealloc;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;

@end

