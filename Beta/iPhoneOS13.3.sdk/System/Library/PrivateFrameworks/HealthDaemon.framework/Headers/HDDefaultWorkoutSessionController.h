/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSessionAssertionGroup, HDWorkoutEventsManager, HDWorkoutSessionConfiguration;

@protocol HDWorkoutSessionStateController, OS_dispatch_queue;

@interface HDDefaultWorkoutSessionController : NSObject

{
    HDProfile *_profile;
    id <HDWorkoutSessionStateController> _sessionStateController;
    NSObject<OS_dispatch_queue> *_queue;
    HDWorkoutSessionConfiguration *_sessionConfiguration;
    HDSessionAssertionGroup *_assertionGroup;
    HDWorkoutEventsManager *_eventsManager;
    long long _sessionServerState;
    CDUnknownBlockType _hkTestTransitionCompletionHandler;
}

+ (id)recoveryIdentifier;
+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;

- (void)dealloc;
- (id)_ownerIdentifier;
- (void)receivedWorkoutEvent:(id)arg1;
- (void)_queue_setupAssertionGroup;
- (id)_queue_assertionsPerStateForActivityType:(unsigned long long)arg1;
- (id)_relaunchPayloadOptions;
- (id)_takeAlertSuppressionAssertion;
- (id)_takeBackgroundRunningAssertion;
- (id)_takeCarouselAssertion;
- (id)_takeClientKeepAliveAssertion;
- (id)_takeCoreMotionAssertion;
- (id)_takeDataCollectionAssertion;
- (id)_takeEventsCollectionAssertion;
- (id)_takeHeartRateRecoveryAssertion;
- (id)_takePlatinumAssertion;
- (id)_takePowerSavingAssertion;
- (id)_takeQuietModeAssertion;
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;
- (void)hktest_setStateTransitionCompletionHandler:(CDUnknownBlockType)arg1;

@end
