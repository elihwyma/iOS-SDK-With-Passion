/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceNode.h>

@class NUComposition, NURenderPipeline;

@interface NUCompositionSourceNode : NUSourceNode

{
    NURenderPipeline *_renderPipeline;
    NUComposition *_composition;
    CDStruct_d58201db _pixelSize;
}

- (id)initWithSettings:(id)arg1;
- (_Bool)load:(out id *)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)initWithComposition:(id)arg1 renderPipeline:(id)arg2 settings:(id)arg3;
- (id)_compositionRenderNodeForPipelineState:(id)arg1 error:(out id *)arg2;

@end
