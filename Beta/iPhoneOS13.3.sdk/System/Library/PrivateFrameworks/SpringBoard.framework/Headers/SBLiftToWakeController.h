/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CMWakeGestureManager, NSHashTable, NSString, SBIdleTimerDefaults;

@interface SBLiftToWakeController : NSObject

{
    CMWakeGestureManager *_wakeGestureManager;
    long long _wakeGestureState;
    NSHashTable *_observers;
    SBIdleTimerDefaults *_idleTimerDefaults;
    _Bool _screenOn;
    _Bool _isEnabled;
    _Bool _observingCMWakeGestureManager;
}

@property (retain, nonatomic, getter=_idleTimerDefaults, setter=_setIdleTimerDefaults:) SBIdleTimerDefaults *idleTimerDefaults;
@property (nonatomic, readonly, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3;
- (void)wakeGestureManager:(id)arg1 didUpdateWakeGesture:(long long)arg2 orientation:(int)arg3 detectedAt:(unsigned long long)arg4;
- (void)_startObservingIfNecessary;
- (id)initWithBacklightController:(id)arg1 idleTimerDefaults:(id)arg2;
- (void)_handleBacklightLevelChanged:(id)arg1;
- (void)_reconsiderEnablement;
- (void)_stopObservingIfNecessary;
- (void)_screenTurnedOff;
- (void)_screenTurnedOn;
- (void)_sendTransitionToObservers:(long long)arg1 deviceOrientation:(long long)arg2;
- (void)_ignoredTransition:(long long)arg1;
- (_Bool)_isObservingWakeGestureManager;

@end
