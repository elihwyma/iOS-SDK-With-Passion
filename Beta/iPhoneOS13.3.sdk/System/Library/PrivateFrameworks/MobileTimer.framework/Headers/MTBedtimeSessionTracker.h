/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarm, MTAlarmStorage, NSString;

@protocol MTBedtimeSessionTrackerDelegate;

@interface MTBedtimeSessionTracker : NSObject

{
    struct os_unfair_lock_s _alarmLock;
    id <MTBedtimeSessionTrackerDelegate> _bedtimeSessionTrackerDelegate;
    MTAlarm *_cachedAlarm;
    MTAlarmStorage *_alarmStorage;
}

@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) MTAlarm *cachedAlarm;
@property (nonatomic) struct os_unfair_lock_s alarmLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <MTBedtimeSessionTrackerDelegate> bedtimeSessionTrackerDelegate;
@property (nonatomic, readonly) _Bool trackingEnabled;

+ (_Bool)_trackingEnabledForSleepAlarm:(id)arg1;

- (void)prepare;
- (void)startSession;
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 waketimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 dismissAction:(unsigned long long)arg3 sleepAlarm:(id)arg4;
- (void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)endSessionWithDate:(id)arg1 reason:(unsigned long long)arg2;
- (Class)sessionClass;
- (id)initWithAlarmStorage:(id)arg1;

@end
