/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@protocol MTLComputePipelineState;

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder

{
    CDStruct_0f4bf8df _buffers[31];
    CDStruct_0f4bf8df _textures[128];
    CDStruct_0f4bf8df _samplers[16];
    CDStruct_0f4bf8df _threadgroupMemoryLengths[31];
    CDStruct_da2e99ad _imageBlockSize;
    const CDStruct_886a8514 *_limits;
    _Bool canDealloc;
    _Bool canEndEncoding;
    _Bool canSetComputePipelineState;
    _Bool hasEndEncoding;
    _Bool hasSetComputePipelineState;
    _Bool hasSetStageInRegion;
    CDStruct_1e3be3a8 stageInRegion;
    _Bool hasIndirectSetStageInRegion;
    struct deque<id, std::__1::allocator<id>> updatedFences;
    id <MTLComputePipelineState> _computePipelineState;
}

@property (nonatomic, readonly) id <MTLComputePipelineState> computePipelineState;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)setComputePipelineState:(id)arg1;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)endEncoding;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setStageInRegion:(CDStruct_1e3be3a8)arg1;
- (void)setStageInRegionWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)updateFence:(id)arg1;
- (void)waitForFence:(id)arg1;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useHeap:(id)arg1;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)_setDefaults;
- (id)initWithComputeCommandEncoder:(id)arg1 commandBuffer:(id)arg2;
- (void)_validateThreadsPerThreadgroup:(CDStruct_14f26992)arg1;
- (void)validateStageInRegion:(CDStruct_14f26992)arg1;
- (void)_resourceTrackingRecordDispatchAccesses;
- (void)_validateAllFunctionArguments;
- (void)enumerateBuffersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateTexturesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSamplersUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateThreadgroupMemoryLengthsUsingBlock:(CDUnknownBlockType)arg1;

@end
