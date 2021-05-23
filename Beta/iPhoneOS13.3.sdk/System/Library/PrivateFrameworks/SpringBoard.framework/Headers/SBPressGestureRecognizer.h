/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIGestureRecognizer.h>

@class BSMonotonicReferenceTime, BSTimer, NSMutableArray, NSSet;

@interface SBPressGestureRecognizer : UIGestureRecognizer

{
    NSSet *_delayablePressTypes;
    NSSet *_precedencePressTypes;
    long long _internalGestureState;
    NSMutableArray *_delayedPressesInfo;
    double _latestDispatchedPressTimestamp;
    long long _latestDispatchedPressPhase;
    long long _latestDispatchedPressType;
    NSMutableArray *_unbalancedPressBeganTypes;
    BSTimer *_waitingGestureStateExpirationTimer;
    _Bool _isDispatchingPresses;
    BSTimer *_waitingForPreemptionTimer;
    BSMonotonicReferenceTime *_precedencePressesReferenceTime;
    double _waitForPreemptionTimeInterval;
}

- (id)name;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setAllowedPressTypes:(id)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_processPresses:(id)arg1;
- (id)_allowedPressTypes;
- (void)_resetState;
- (void)setPressTypesWithPrecedence:(id)arg1;
- (long long)latestPressType;
- (double)latestPressTimestamp;
- (long long)latestPressPhase;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)arg1 previousCount:(long long)arg2;
- (long long)requiredPressTypesCount;
- (void)_processPrecedencePresses:(id)arg1;
- (void)_processDelayablePresses:(id)arg1;
- (void)_cancelGesture;
- (_Bool)_didGestureBegin;
- (void)_addDelayedPress:(id)arg1;
- (void)_startDispatchingDelayedPresses;
- (_Bool)_isDispatchingDelayedPresses;
- (long long)_delayedPressesCount;
- (void)_reallyStartDispatchingDelayedPresses;
- (_Bool)_shouldStopDispatching;
- (void)_updatePublicPressInfo:(id)arg1;
- (id)_gestureStateInfoForPressInfo:(id)arg1;
- (void)_applyGestureStateInfo:(id)arg1;
- (_Bool)_isGestureFailedOrCancelled;
- (void)_updateUnbalancedPressBeganTypesWithCurrentPressType:(long long)arg1 andPhase:(long long)arg2 result:(long long *)arg3;
- (void)_stopWaitingGestureStateExpiration;
- (void)_waitGestureStateExpirationWithFireInterval:(double)arg1 timerExpiredActionBlock:(CDUnknownBlockType)arg2;
- (void)_resetPublishedPressInfo;
- (void)_resetDelayedPresses;
- (id)pressTypesWithPrecedence;
- (double)waitForPreemptionTimeInterval;
- (void)setWaitForPreemptionTimeInterval:(double)arg1;

@end
