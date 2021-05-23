/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceNode.h>

@class NUCGAuxiliaryImageProperties, NUCGImageSourceNode;

@interface NUCGAuxiliaryImageSourceNode : NUSourceNode

{
    NUCGAuxiliaryImageProperties *_auxiliaryImageProperties;
    NUCGImageSourceNode *_sourceNode;
}

@property (retain) NUCGImageSourceNode *sourceNode;

- (id)initWithSettings:(id)arg1;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (long long)sourceOrientation;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)pipelineOptionsForPipelineState:(id)arg1 error:(out id *)arg2;
- (id)initWithSourceNode:(id)arg1 auxiliaryImageProperties:(id)arg2;
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id *)arg2;
- (_Bool)canPropagateOriginalAuxiliaryData;

@end
