/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsIndirectComputeCommand.h>

__attribute__((visibility("hidden")))
@interface MTLGPUDebugIndirectComputeCommand : MTLToolsIndirectComputeCommand

{
    unsigned long long _commandIndex;
}

- (void)setKernelBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)concurrentDispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)concurrentDispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)onDispatch;
- (id)initWithIndirectComputeCommand:(id)arg1 commandIndex:(unsigned long long)arg2 indirectCommandBuffer:(id)arg3;

@end
