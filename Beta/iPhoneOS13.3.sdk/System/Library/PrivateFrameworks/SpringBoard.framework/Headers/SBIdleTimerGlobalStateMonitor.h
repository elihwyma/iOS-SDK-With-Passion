/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSNumber, NSString, SBIdleTimerAggregateClientConfiguration, SBIdleTimerService, SBLocalDefaults, _SBIdleTimerGlobalBoolSettingMonitor, _SBIdleTimerGlobalNumericSettingMonitor;

@protocol BSInvalidatable;

@interface SBIdleTimerGlobalStateMonitor : NSObject

{
    struct os_unfair_lock_s _observerLock;
    NSHashTable *_observers;
    SBIdleTimerService *_idleTimerService;
    SBLocalDefaults *_localDefaults;
    CDUnknownBlockType _dontLockEver;
    CDUnknownBlockType _dontDimOrLockOnAC;
    CDUnknownBlockType _disableAttentionAwareness;
    CDUnknownBlockType _minimumLockscreenIdleTime;
    _SBIdleTimerGlobalNumericSettingMonitor *_autoLockTimeoutMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_batterySaverModeMonitor;
    _SBIdleTimerGlobalBoolSettingMonitor *_onACPowerMonitor;
    long long _pocketState;
    _Bool _autoDimDisabled;
    SBIdleTimerAggregateClientConfiguration *_aggregateClientConfiguration;
    id <BSInvalidatable> _stateCaptureAssertion;
}

@property (nonatomic, readonly) _Bool dontLockEver;
@property (nonatomic, readonly) _Bool dontDimOrLockOnAC;
@property (nonatomic, readonly) _Bool disableAttentionAwareness;
@property (nonatomic, readonly) double minimumLockscreenIdleTime;
@property (nonatomic, readonly) NSNumber *autoLockTimeout;
@property (nonatomic, readonly, getter=isBatterySaverModeActive) _Bool batterySaverModeActive;
@property (nonatomic, readonly, getter=isOnACPower) _Bool onACPower;
@property (nonatomic, readonly) long long pocketState;
@property (nonatomic, readonly, getter=isAutoDimDisabled) _Bool autoDimDisabled;
@property (nonatomic, readonly) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)_addStateCaptureHandlers;
- (void)idleTimerServiceTimeoutAssertionsDidChange:(id)arg1;
- (id)_stateCaptureDescription;
- (void)pocketStateMonitor:(id)arg1 pocketStateDidChangeFrom:(long long)arg2 to:(long long)arg3;
- (CDUnknownBlockType)_boolMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(CDUnknownBlockType)arg3;
- (CDUnknownBlockType)_timeIntervalMonitorForProperty:(id)arg1 inDefaults:(id)arg2 fetchingWith:(CDUnknownBlockType)arg3;
- (void)_updateAutoDimDisabled;
- (id)_initWithLocalDefaults:(id)arg1 profileConnection:(id)arg2 pocketStateMonitor:(id)arg3 uiController:(id)arg4 idleTimerService:(id)arg5;
- (void)_updateObserversForReason:(id)arg1;
- (void)idleTimerGlobalSettingMonitor:(id)arg1 changedForReason:(id)arg2;

@end
