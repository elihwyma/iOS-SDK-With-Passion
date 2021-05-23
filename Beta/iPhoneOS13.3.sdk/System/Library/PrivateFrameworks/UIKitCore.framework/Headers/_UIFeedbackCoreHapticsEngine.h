/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIFeedbackEngine.h>

@class CHHapticEngine, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIFeedbackCoreHapticsEngine : _UIFeedbackEngine

{
    NSMutableSet *_playersInUse;
    NSMutableSet *_playersToInvalidate;
    CHHapticEngine *_coreHapticsEngine;
}

@property (nonatomic, readonly) CHHapticEngine *coreHapticsEngine;

+ (id)_internalQueue;
+ (_Bool)_supportsPlayingFeedbackPatternsDirectly;
+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1 allowsIgnoreCapture:(_Bool)arg2;
+ (id)sharedEngine;
+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (_Bool)_supportsAbortingDeactivation;
+ (void)_loadHapticEngineClass;
+ (void)_setHapticEngineCreationBlock:(CDUnknownBlockType)arg1;
+ (void)_setHapticPatternClass:(Class)arg1;

- (id)init;
- (id)_stats_key;
- (void)_internal_resetCoreHapticsEngine;
- (void)_internal_coreHapticsEngineStoppedForReason:(long long)arg1;
- (void)_coreHapticsEngineStoppedForReason:(long long)arg1;
- (void)_resetCoreHapticsEngine;
- (id)_internal_createCoreHapticsEngine;
- (_Bool)_internal_initializeCoreHapticsEngine;
- (void)_internal_startRunningFeedbackPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_coreHapticsEngineFinishedWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_internal_prewarmUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;

@end
