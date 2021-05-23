/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class NSDate, NSRunLoop, NSString, PCDispatchTimer;

@protocol OS_dispatch_queue;

@interface PCSimpleTimer : NSObject

{
    double _fireTime;
    double _startTime;
    double _lastUpdateTime;
    double _earlyFireDelta;
    _Bool _triggerOnGMTChange;
    _Bool _disableSystemWaking;
    NSDate *_scheduledWakeDate;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    _Bool _userVisible;
    PCDispatchTimer *_preventSleepTimer;
    PCDispatchTimer *_fireTimer;
    _Bool _sleepIsImminent;
    unsigned int _powerAssertionID;
    id _timeChangeSource;
    NSRunLoop *_timerRunLoop;
    NSString *_timerMode;
    int _significantTimeChangeToken;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) _Bool disableSystemWaking;
@property (nonatomic, getter=isUserVisible) _Bool userVisible;

+ (id)lastSystemWakeDate;
+ (double)currentMachTimeInterval;

- (void)dealloc;
- (id)debugDescription;
- (void)invalidate;
- (id)userInfo;
- (_Bool)isValid;
- (void)scheduleInQueue:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)_significantTimeChange;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)scheduleInRunLoop:(id)arg1;
- (void)_updateTimers;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)_fireTimerFired;
- (id)initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 triggerOnGMTChange:(_Bool)arg6;
- (_Bool)firingIsImminent;
- (void)updateFireTime:(double)arg1 triggerOnGMTChange:(_Bool)arg2;
- (void)_scheduleTimer;
- (void)_preventSleepFired;
- (void)_setPowerMonitoringEnabled:(_Bool)arg1;
- (void)_setSignificantTimeChangeMonitoringEnabled:(_Bool)arg1;
- (id)_getTimerRunLoop;
- (id)_getTimerMode;
- (void)_performBlockOnQueue:(CDUnknownBlockType)arg1;
- (void)_powerNotificationSleepIsNotImminent;
- (void)_powerNotificationSleepIsImminent;

@end
