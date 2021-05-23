/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransform;

@interface NUOrientationNode : NUTransformNode

{
    long long _orientation;
    NUImageTransform *_transform;
}

@property (retain) NUImageTransform *transform;
@property (readonly) long long orientation;

+ (id)applyOrientation:(long long)arg1 to:(id)arg2;

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (_Bool)isGeometryNode;
- (id)initWithOrientation:(long long)arg1 input:(id)arg2;
- (id)_evaluateAuxiliaryImageForType:(long long)arg1 error:(out id *)arg2;
- (_Bool)canPropagateOriginalAuxiliaryData;
- (long long)outputImageOrientation:(long long)arg1;

@end
