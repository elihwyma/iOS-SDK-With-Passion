/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsRenderPipelineState.h>

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor, MTLToolsFunction;

@interface MTLGPUDebugRenderPipelineState : MTLToolsRenderPipelineState

{
    MTLRenderPipelineDescriptor *_descriptor;
    MTLTileRenderPipelineDescriptor *_tileDescriptor;
    MTLRenderPipelineReflection *_reflection;
}

@property (nonatomic, readonly) MTLToolsFunction *vertexFunction;
@property (nonatomic, readonly) MTLToolsFunction *fragmentFunction;
@property (nonatomic, readonly) MTLRenderPipelineReflection *reflection;

- (void)dealloc;
- (id)initWithRenderPipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;
- (id)initWithRenderPipelineState:(id)arg1 tileDescriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;
- (id)vertexLibrary;
- (id)fragmentLibrary;

@end
