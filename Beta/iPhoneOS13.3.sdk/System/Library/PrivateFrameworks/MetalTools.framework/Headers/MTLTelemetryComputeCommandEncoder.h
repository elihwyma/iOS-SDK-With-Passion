/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@class MTLTelemetryCommandBuffer, MTLTelemetryDevice;

@interface MTLTelemetryComputeCommandEncoder : MTLToolsComputeCommandEncoder

{
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    unsigned int _ceDispatches;
}

- (void)setComputePipelineState:(id)arg1;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)endEncoding;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;
- (void)accumDispatchDistribution:(unsigned long long)arg1 threadgroupsPerGrid:(CDStruct_14f26992)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3 threadsPerGrid:(CDStruct_14f26992)arg4;

@end
