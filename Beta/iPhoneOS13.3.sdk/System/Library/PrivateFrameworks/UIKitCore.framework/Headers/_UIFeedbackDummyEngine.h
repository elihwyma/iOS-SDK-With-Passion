/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackEngine.h>

__attribute__((visibility("hidden")))
@interface _UIFeedbackDummyEngine : _UIFeedbackEngine

{
    CDUnknownBlockType _invalidationBlock;
}

@property (copy, nonatomic) CDUnknownBlockType invalidationBlock;

+ (id)sharedEngine;
+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1;

- (void)_stopFeedback:(id)arg1;
- (id)_stats_key;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;

@end
