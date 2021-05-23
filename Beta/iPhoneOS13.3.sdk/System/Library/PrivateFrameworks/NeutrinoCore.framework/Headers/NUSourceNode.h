/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderNode.h>

@protocol NUSourceDerivation;

@interface NUSourceNode : NURenderNode

{
    NURenderNode *_originalNode;
    id <NUSourceDerivation> _sourceDerivation;
}

@property (weak) NURenderNode *originalNode;
@property (retain) id <NUSourceDerivation> sourceDerivation;
@property (readonly) long long sourceOrientation;

- (id)initWithSettings:(id)arg1;
- (_Bool)load:(out id *)arg1;
- (_Bool)isValid:(out id *)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageGeometryWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (id)sourceOptionsForSettings:(id)arg1 error:(out id *)arg2;
- (id)preparedNodeWithSourceContainer:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4 error:(out id *)arg5;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)_evaluateVideoCompositionWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (_Bool)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (id)_evaluateVideoPropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (long long)normalizeSubsampleFactor:(long long)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (_Bool)isGeometryNode;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)_addResampleNode:(id)arg1 subsampleNode:(id)arg2;
- (id)_addScaleNode:(id)arg1 pipelineState:(id)arg2 pipelineSettings:(id)arg3 sourceSettings:(id)arg4;
- (id)_addOrientationNode:(id)arg1 sourceSettings:(id)arg2 error:(out id *)arg3;
- (id)preparedNodeWithSourceNode:(id)arg1 sourceSettings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateGeometrySpaceMap:(out id *)arg1;
- (id)_evaluateImageProperties:(out id *)arg1;

@end
