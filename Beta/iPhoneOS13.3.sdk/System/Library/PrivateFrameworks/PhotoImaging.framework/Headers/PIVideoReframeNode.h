/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderNode.h>

@class PIReframeKeyframeSequence;

@protocol NUVideoProperties;

@interface PIVideoReframeNode : NURenderNode

{
    PIReframeKeyframeSequence *_keyframeSequence;
    id <NUVideoProperties> _inputVideoProperties;
    CDStruct_1b6d18a9 _frameDuration;
    CDStruct_996ac03c _stabCropRect;
}

@property (retain, nonatomic) PIReframeKeyframeSequence *keyframeSequence;
@property (nonatomic) CDStruct_996ac03c stabCropRect;
@property (retain, nonatomic) id <NUVideoProperties> inputVideoProperties;
@property (nonatomic) CDStruct_1b6d18a9 frameDuration;

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (_Bool)requiresVideoComposition;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)initWithKeyframes:(id)arg1 stabCropRect:(CDStruct_996ac03c)arg2 input:(id)arg3;
- (id)_stabilizeImage:(id)arg1 cleanRect:(struct CGRect)arg2 cropRect:(struct CGRect)arg3 transform:(CDStruct_8e0628e6)arg4 geometry:(id)arg5;

@end
