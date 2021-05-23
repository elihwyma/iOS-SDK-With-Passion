/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <NeutrinoCore/NURenderNode.h>

@interface PIAutoLoopVideoNode : NURenderNode

{
    int _loopStart;
    int _loopPeriod;
    int _fadeLength;
    CDStruct_1b6d18a9 _frameDuration;
}

@property (nonatomic, readonly) NURenderNode *input;
@property (nonatomic, readonly) int loopStart;
@property (nonatomic, readonly) int loopPeriod;
@property (nonatomic, readonly) int fadeLength;
@property (nonatomic, readonly) CDStruct_1b6d18a9 frameDuration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 startTime;
@property (nonatomic, readonly) CDStruct_1b6d18a9 loopDuration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 fadeDuration;
@property (nonatomic, readonly) CDStruct_1b6d18a9 fadeStartTime;

+ (id)loopParamsForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;
+ (int)loopStartForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;
+ (int)loopPeriodForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;
+ (int)fadeLengthForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (id)_evaluateVideo:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (_Bool)requiresAudioMix;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)_evaluateAudioMix:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithInput:(id)arg1 frameDuration:(CDStruct_1b6d18a9)arg2 trimRange:(CDStruct_5c5366e1)arg3 settings:(id)arg4;

@end
