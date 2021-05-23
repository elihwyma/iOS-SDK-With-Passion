/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUAbstractScaleNode.h>

@class NSDictionary, NUSourceContainerNode;

@interface NUSubsampleNode : NUAbstractScaleNode

{
    long long _subsampleFactor;
    long long _appliedSubsampleFactor;
    NUSourceContainerNode *_sourceContainer;
    NSDictionary *_pipelineSettings;
    NSDictionary *_sourceOptions;
}

@property (readonly) NUSourceContainerNode *sourceContainer;
@property (readonly) NSDictionary *pipelineSettings;
@property (readonly) NSDictionary *sourceOptions;
@property (readonly) long long subsampleFactor;
@property (readonly) long long appliedSubsampleFactor;

+ (long long)subsampleFactorForScale:(CDStruct_912cb5d2)arg1 additionalScale:(CDStruct_912cb5d2 *)arg2;

- (id)debugQuickLookObject;
- (id)_sourceNode;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)_evaluateImageProperties:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithPreparedSource:(id)arg1 container:(id)arg2 pipelineSettings:(id)arg3 sourceOptions:(id)arg4;
- (id)initWithSubsampleFactor:(long long)arg1 source:(id)arg2 container:(id)arg3 pipelineSettings:(id)arg4 sourceOptions:(id)arg5;
- (long long)resolveSubsampleFactorForPipelineState:(id)arg1 error:(out id *)arg2;
- (long long)resolveSubsampleFactorForPipelineState:(id)arg1 sourceScale:(CDStruct_912cb5d2)arg2;

@end
