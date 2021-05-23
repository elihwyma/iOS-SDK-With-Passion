/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUTransformNode.h>

@class NUGeometryTransform;

@interface NUSlowMotionNode : NUTransformNode

{
    float _rate;
    NUGeometryTransform *_geomTransform;
    CDStruct_e83c9415 _range;
}

@property (readonly) NUGeometryTransform *geomTransform;
@property (readonly) CDStruct_e83c9415 range;
@property (readonly) float rate;

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (_Bool)requiresAudioMix;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateImage:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)initWithTimeRange:(CDStruct_e83c9415)arg1 rate:(float)arg2 input:(id)arg3;
- (id)_evaluateAudioMix:(out id *)arg1;

@end
