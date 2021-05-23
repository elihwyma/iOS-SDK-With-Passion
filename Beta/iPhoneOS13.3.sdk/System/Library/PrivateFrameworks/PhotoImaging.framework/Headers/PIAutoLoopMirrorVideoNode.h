/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIAutoLoopVideoNode.h>

@interface PIAutoLoopMirrorVideoNode : PIAutoLoopVideoNode

+ (int)fadeLengthForTrimRange:(CDStruct_5c5366e1)arg1 frameDuration:(CDStruct_1b6d18a9)arg2;

- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateVideo:(out id *)arg1;
- (_Bool)requiresVideoComposition;
- (_Bool)requiresAudioMix;
- (id)_evaluateVideoComposition:(out id *)arg1;
- (id)_evaluateAudioMix:(out id *)arg1;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (CDStruct_1b6d18a9)_conformTime:(CDStruct_1b6d18a9)arg1;

@end
