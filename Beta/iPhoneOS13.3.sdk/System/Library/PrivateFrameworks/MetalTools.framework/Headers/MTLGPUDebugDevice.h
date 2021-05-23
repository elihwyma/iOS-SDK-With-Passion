/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsDevice.h>

@class NSMutableArray;

@interface MTLGPUDebugDevice : MTLToolsDevice

{
    struct MetalBufferHeap bufferHeap;
    NSMutableArray *_argumentDescriptors;
    _Bool _enableBoundsChecking;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;
- (id)newCommandQueue;
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)newCommandQueueWithDescriptor:(id)arg1;
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (void)_modifyCompileOptions:(unsigned long long *)arg1;
- (void)onRenderPipelineCreated:(id)arg1;
- (void)onComputePipelineCreated:(id)arg1;
- (id)newStageBufferArgumentEncoder;
- (id)newStageArgumentBuffer;

@end
