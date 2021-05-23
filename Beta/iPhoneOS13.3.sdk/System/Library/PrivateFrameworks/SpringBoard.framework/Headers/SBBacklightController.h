/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, SBHIDUILockAssertion, SBIdleTimerDefaults;

@interface SBBacklightController : NSObject

{
    SBIdleTimerDefaults *_idleTimerDefaults;
    _Bool _isPendingScreenUnblankAfterCACommit;
    NSHashTable *_observers;
    NSHashTable *_informers;
    long long _lastBacklightChangeSource;
    SBHIDUILockAssertion *_currentHIDUILockAssertion;
}

@property (nonatomic, readonly) _Bool isPendingScreenUnblankAfterCACommit;
@property (nonatomic, readonly) _Bool screenIsOn;
@property (nonatomic, readonly) _Bool screenIsDim;
@property (nonatomic, readonly) long long lastBacklightChangeSource;
@property (retain, nonatomic) SBHIDUILockAssertion *currentHIDUILockAssertion;
@property (nonatomic, readonly) double backlightFactor;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;
+ (id)sharedInstanceIfExists;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)preventIdleSleep;
- (void)_undimFromSource:(long long)arg1;
- (void)setBacklightFactor:(float)arg1 source:(long long)arg2;
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;
- (_Bool)shouldTurnOnScreenForBacklightSource:(long long)arg1;
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_startFadeOutAnimationFromLockSource:(int)arg1;
- (void)setBacklightFactorPending:(float)arg1;
- (void)_deferredScreenUnblankDone;
- (void)reloadDefaults;
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;
- (void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 silently:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_notifyObserversWillAnimateToFactor:(float)arg1 source:(long long)arg2;
- (void)_notifyObserversDidAnimateToFactor:(float)arg1 source:(long long)arg2;
- (void)_suspendProxAndMultitouch:(_Bool)arg1 source:(long long)arg2;
- (void)allowIdleSleep;
- (void)turnOnScreenFullyWithBacklightSource:(long long)arg1;
- (void)registerInformer:(id)arg1;
- (void)unregisterInformer:(id)arg1;
- (double)defaultLockScreenDimInterval;

@end
