/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUAbstractScaleNode.h>

@interface NUScaleNode : NUAbstractScaleNode

{
    long long _sampleMode;
    CDStruct_1e2b2e48 _targetScale;
    CDStruct_1e2b2e48 _effectiveScale;
}

@property (readonly) CDStruct_912cb5d2 targetScale;
@property (readonly) CDStruct_912cb5d2 effectiveScale;

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithScale:(CDStruct_912cb5d2)arg1 sampleMode:(long long)arg2 input:(id)arg3;
- (id)initWithTargetScale:(CDStruct_912cb5d2)arg1 effectiveScale:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3 input:(id)arg4;
- (id)initWithPipelineState:(id)arg1 input:(id)arg2;
- (id)_settingsWithTargetScale:(CDStruct_912cb5d2)arg1 effectiveScale:(CDStruct_912cb5d2)arg2 sampleMode:(long long)arg3;

@end
