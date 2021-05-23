/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsCommandBuffer.h>

@class MTLCountersTraceCommandBuffer;

@interface MTLCountersCommandBuffer : MTLToolsCommandBuffer

{
    MTLCountersTraceCommandBuffer *_traceBuffer;
}

@property (nonatomic, readonly) MTLCountersTraceCommandBuffer *traceBuffer;

- (void)dealloc;
- (id)computeCommandEncoder;
- (void)waitUntilCompleted;
- (id)blitCommandEncoder;
- (id)renderCommandEncoderWithDescriptor:(id)arg1;
- (void)presentDrawable:(id)arg1;
- (void)waitUntilScheduled;
- (void)presentDrawable:(id)arg1 atTime:(double)arg2;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)arg1;
- (id)parallelRenderCommandEncoderWithDescriptor:(id)arg1;
- (id)resourceStateCommandEncoder;
- (void)addPurgedResource:(id)arg1;
- (void)addPurgedHeap:(id)arg1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
- (id)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDStruct_4af8c268 *)arg2 capacity:(unsigned long long)arg3;
- (id)initWithCommandBuffer:(id)arg1 commandQueue:(id)arg2;

@end
