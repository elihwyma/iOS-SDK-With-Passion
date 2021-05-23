/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackEngine.h>

@class NSCountedSet;

__attribute__((visibility("hidden")))
@interface _UIFeedbackSystemSoundEngine : _UIFeedbackEngine

{
    CDUnknownBlockType _invalidationBlock;
    NSCountedSet *_warmSSIDs;
    NSCountedSet *_suspendedSSIDs;
}

@property (nonatomic, readonly) NSCountedSet *suspendedSSIDs;
@property (nonatomic, readonly) NSCountedSet *warmSSIDs;
@property (copy, nonatomic) CDUnknownBlockType invalidationBlock;

+ (id)_internalQueue;
+ (id)sharedEngine;
+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1;

- (void)_stopFeedback:(id)arg1;
- (id)_stats_key;
- (void)_updateValueForParameters:(id)arg1 withKey:(id)arg2;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_internal_playFeedbackData:(id)arg1 forFeedback:(id)arg2 atTime:(double)arg3;
- (void)_internal_stopFeedbackData:(id)arg1 forFeedback:(id)arg2;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2;
- (void)_internal_updateSuspension;
- (void)_internal_startWarmingFeedbacks:(id)arg1;
- (void)_internal_stopWarmingFeedbacks:(id)arg1;
- (_Bool)_internal_prepareSystemSoundID:(unsigned int)arg1 forBeingActive:(_Bool)arg2;
- (void)_internal_performForEachSSIDsInFeedbacks:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_internal_playFeedbackDataNow:(id)arg1 forFeedback:(id)arg2 withOptions:(id)arg3;

@end
