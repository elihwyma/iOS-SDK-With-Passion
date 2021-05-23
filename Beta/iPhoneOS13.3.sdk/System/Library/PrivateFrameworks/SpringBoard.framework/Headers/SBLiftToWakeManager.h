/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBBacklightController, SBIdleTimerGlobalCoordinator, SBLiftToWakeController, SBLockScreenManager, SBMainDisplayPolicyAggregator;

@interface SBLiftToWakeManager : NSObject

{
    SBLiftToWakeController *_liftToWakeController;
    SBLockScreenManager *_accessor_lockScreenManager;
    SBBacklightController *_accessor_backlightController;
    SBMainDisplayPolicyAggregator *_accessor_policyAggregator;
    SBIdleTimerGlobalCoordinator *_accessor_idleTimerCoordinator;
    _Bool _gestureWokeScreen;
    _Bool _observing;
    _Bool _significantUserInteractionOccuredSinceWake;
    _Bool _invalidated;
}

@property (retain, nonatomic, getter=_liftToWakeController, setter=_setLiftToWakeController:) SBLiftToWakeController *liftToWakeController;
@property (retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator;
@property (retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController;
@property (retain, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) SBIdleTimerGlobalCoordinator *idleTimerCoordinator;
@property (nonatomic, getter=_gestureWokeScreen, setter=_setGestureWokeScreen:) _Bool gestureWokeScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (_Bool)handleEvent:(id)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;
- (void)_ignoredTransition:(long long)arg1;
- (id)_initWithLiftToWakeController:(id)arg1;
- (void)_backlightWillTurnOn:(id)arg1;
- (_Bool)_isLockScreenMainPageVisible;

@end
