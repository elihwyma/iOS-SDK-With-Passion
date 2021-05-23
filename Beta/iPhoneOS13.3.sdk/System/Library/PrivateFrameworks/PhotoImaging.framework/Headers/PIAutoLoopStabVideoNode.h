/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderNode.h>

@class NSDictionary;

@interface PIAutoLoopStabVideoNode : NURenderNode

{
    NSDictionary *_bakedRecipe;
}

@property (nonatomic, readonly) NSDictionary *bakedRecipe;

+ (id)nodeWithInput:(id)arg1 recipe:(id)arg2 error:(out id *)arg3;

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (_Bool)requiresAudioMix;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2 bakedRecipe:(id)arg3;

@end
