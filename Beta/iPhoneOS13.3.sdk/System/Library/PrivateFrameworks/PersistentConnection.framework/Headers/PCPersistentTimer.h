/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class NSString, PCSimpleTimer;

@protocol OS_dispatch_queue, OS_os_log;

@interface PCPersistentTimer : NSObject

{
    double _fireTime;
    double _startTime;
    unsigned long long _guidancePriority;
    double _minimumEarlyFireProportion;
    _Bool _triggerOnGMTChange;
    _Bool _disableSystemWaking;
    _Bool _userVisible;
    NSString *_serviceIdentifier;
    id _target;
    SEL _selector;
    id _userInfo;
    PCSimpleTimer *_simpleTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_os_log> *_logObject;
    double _earlyFireConstantInterval;
}

@property (nonatomic) double minimumEarlyFireProportion;
@property (nonatomic) double earlyFireConstantInterval;
@property (nonatomic) _Bool disableSystemWaking;
@property (nonatomic, getter=isUserVisible) _Bool userVisible;
@property (nonatomic, readonly) double fireTime;
@property (nonatomic, readonly) double startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)lastSystemWakeDate;
+ (id)_backgroundUpdateQueue;
+ (void)_updateTime:(double)arg1 forGuidancePriority:(unsigned long long)arg2;
+ (double)currentMachTimeInterval;
+ (double)_currentGuidanceTime;

- (void)dealloc;
- (void)invalidate;
- (id)userInfo;
- (_Bool)isValid;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)scheduleInQueue:(id)arg1;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (id)initWithFireDate:(id)arg1 serviceIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (void)scheduleInRunLoop:(id)arg1;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceChangedPowerState:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (id)_initWithAbsoluteTime:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6 triggerOnGMTChange:(_Bool)arg7;
- (void)_updateTimers;
- (void)scheduleInRunLoop:(id)arg1 inMode:(id)arg2;
- (void)_fireTimerFired;
- (_Bool)firingIsImminent;
- (double)_nextForcedAlignmentAbsoluteTime;
- (double)_earlyFireTime;
- (id)initWithTimeInterval:(double)arg1 serviceIdentifier:(id)arg2 guidancePriority:(unsigned long long)arg3 target:(id)arg4 selector:(SEL)arg5 userInfo:(id)arg6;

@end
