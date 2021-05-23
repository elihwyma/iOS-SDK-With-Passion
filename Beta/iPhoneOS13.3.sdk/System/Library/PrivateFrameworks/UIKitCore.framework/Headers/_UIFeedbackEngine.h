/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString, NSTimer;

@interface _UIFeedbackEngine : NSObject

{
    NSMutableDictionary *_completionBlocks;
    NSTimer *_suspensionTimer;
    _Bool _suspended;
    _Bool _enabled;
    long long _prewarmCount;
    long long _state;
    unsigned long long _numberOfClients;
    NSMapTable *_playerDequeueBlocks;
    unsigned long long _backgroundTaskIdentifier;
    long long _suspensionState;
}

@property (nonatomic) long long prewarmCount;
@property (nonatomic, getter=isEnabled, setter=_setEnabled:) _Bool enabled;
@property (nonatomic, getter=_state, setter=_setState:) long long state;
@property (nonatomic, readonly) unsigned long long numberOfClients;
@property (retain, nonatomic, getter=_playerDequeueBlocks, setter=_setPlayerDequeueBlocks:) NSMapTable *playerDequeueBlocks;
@property (nonatomic, getter=_backgroundTaskIdentifier, setter=_setBackgroundTaskIdentifier:) unsigned long long backgroundTaskIdentifier;
@property (nonatomic, readonly, getter=_suspensionState) long long suspensionState;
@property (nonatomic, readonly) double currentTime;
@property (nonatomic, readonly) NSString *_stats_key;

+ (id)_internalQueue;
+ (id)engineForFeedback:(id)arg1;
+ (_Bool)_supportsPlayingFeedbackPatternsDirectly;
+ (id)sharedEngine;
+ (_Bool)_supportsPlayingIndividualFeedback:(id)arg1;
+ (_Bool)_supportsAbortingDeactivation;
+ (_Bool)_supportsPlayingFeedback:(id)arg1;

- (id)init;
- (id)description;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_prewarm:(_Bool)arg1 andPerformWhenPrewarmed:(CDUnknownBlockType)arg2;
- (void)_activate:(_Bool)arg1 andPerformWhenRunning:(CDUnknownBlockType)arg2;
- (void)_startWarmingFeedbacks:(id)arg1;
- (void)_stopWarmingFeedbacks:(id)arg1;
- (void)_cooldown;
- (void)_deactivate;
- (id)_statsSuffix;
- (id)_activationCountStatistics;
- (id)_activationDurationStatistics;
- (id)_prewarmCountStatistics;
- (id)_prewarmDurationStatistics;
- (id)_outOfChannelsCountStatistics;
- (void)_stats_stateDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (void)_stats_outOfChannels;
- (void)_playFeedback:(id)arg1 atTime:(double)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_internal_teardownBackgroundTask;
- (void)_internal_performAtState:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_internal_prewarmUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_cooldownUnderlyingPlayerIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_teardownUnderlyingPlayerIfPossibleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_internal_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_internal_willPlayFeedback:(id)arg1 atTime:(double)arg2;
- (void)_internal_willCancelFeedback:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_removeViewControllerWillDisconnect:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_applicationDidResume:(id)arg1;
- (_Bool)_internal_isSuspended;
- (void)_internal_setSuspended:(_Bool)arg1;
- (void)_internal_updateSuspension;
- (void)_internal_deactivateEngineIfPossible;
- (void)_internal_cooldownEngineIfPossible;
- (void)_internal_setupBackgroundTask;
- (void)_internal_prewarmEngine;
- (void)_internal_activateEngine;
- (void)_internal_activate:(_Bool)arg1 andPerformWhenRunning:(CDUnknownBlockType)arg2;
- (void)_internal_serviceBlocksForState:(long long)arg1 withSuccess:(_Bool)arg2;
- (void)_internal_deactivate;
- (void)_internal_startWarmingFeedbacks:(id)arg1;
- (void)_internal_stopWarmingFeedbacks:(id)arg1;
- (void)_internal_prewarm:(_Bool)arg1 andPerformWhenPrewarmed:(CDUnknownBlockType)arg2;
- (void)_internal_cooldown;
- (void)_internal_playFeedbackData:(id)arg1 atTime:(double)arg2 feedback:(id)arg3 effectiveFeedbackType:(unsigned long long)arg4 existingPlayer:(id)arg5 withCompletionBlock:(CDUnknownBlockType)arg6;
- (void)_suspendEngineNow;
- (void)_setSuspended:(_Bool)arg1;
- (void)runWhenReady:(CDUnknownBlockType)arg1;

@end
