/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, MTLToolsFunction;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState

{
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
}

@property (nonatomic, readonly) MTLToolsFunction *computeFunction;
@property (nonatomic, readonly) MTLComputePipelineReflection *reflection;

- (void)dealloc;
- (id)initWithComputePipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;

@end
