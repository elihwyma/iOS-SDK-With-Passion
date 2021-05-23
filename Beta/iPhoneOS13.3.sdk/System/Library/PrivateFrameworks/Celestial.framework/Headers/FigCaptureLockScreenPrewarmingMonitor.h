/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FigCaptureLockScreenPrewarmingMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _biometricEnrollmentChangedToken;
    _Bool _haveEnrolledBiometricIdentities;
    int _activeBiometricOperationChangedToken;
    int _activeBiometricOperationType;
    long long _lastBiometricMatchCompleteTime;
    int _deviceLockStateChangedToken;
    int _deviceLockState;
    long long _lastDeviceUnlockTime;
    _Bool _onLockScreen;
    _Bool _addingLayoutObserver;
    _Bool _observingLayoutChanges;
    _Bool _isPrewarming;
    NSObject<OS_dispatch_source> *_delayedPrewarmTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (void)stop;
+ (void)start;

- (void)dealloc;
- (void)_invalidate;
- (id)_init;
- (void)_stopMonitoring;
- (void)_startMonitoring;
- (void)layoutMonitor:(id)arg1 didUpdateLayoutWithForegroundApps:(id)arg2 obscuredApps:(id)arg3;
- (void)_registerForBiometricEnrollmentChangesAndStartMonitoring;
- (void)_updateActiveBiometricOperation:(int)arg1;
- (void)_updateDeviceLockState;
- (void)_evaluatePrewarmingConditions;
- (_Bool)_shouldPrewarmForHostTime:(long long)arg1;
- (void)_setIsPrewarming:(_Bool)arg1;
- (void)_prewarmAfterDelay:(float)arg1;
- (void)_cancelDelayedPrewarmTimer;

@end
