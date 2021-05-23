/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsIndirectComputeCommand.h>

@class MTLIndirectCommandBufferDescriptor;

@protocol MTLIndirectCommandBuffer, MTLIndirectCommandBufferSPI;

@interface MTLDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand

{
    MTLIndirectCommandBufferDescriptor *_desc;
    unsigned long long _index;
    id <MTLIndirectCommandBufferSPI> _iCB;
}

@property (readonly) unsigned long long index;
@property (readonly) id <MTLIndirectCommandBuffer> indirectCommandBuffer;

- (void)dealloc;
- (void)setComputePipelineState:(id)arg1;
- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)concurrentDispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)concurrentDispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (id)initWithBaseObject:(id)arg1 descriptor:(id)arg2 indexCount:(unsigned long long)arg3 indirectCommandBuffer:(id)arg4;

@end
