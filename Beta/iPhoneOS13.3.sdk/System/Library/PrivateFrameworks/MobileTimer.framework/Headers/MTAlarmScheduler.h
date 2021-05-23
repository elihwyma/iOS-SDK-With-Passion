/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTScheduledList, NSString;

@protocol MTAlarmScheduleDelegate, MTAlarmStorage, MTNotificationCenter, MTPersistence, MTSchedulingDelegate, MTTaskScheduler, NAScheduler;

@interface MTAlarmScheduler : NSObject

{
    id <MTAlarmScheduleDelegate> _delegate;
    id <MTAlarmStorage> _storage;
    MTScheduledList *_scheduledAlarms;
    id <NAScheduler> _serializer;
    id <MTNotificationCenter> _notificationCenter;
    CDUnknownBlockType _currentDateProvider;
    id <MTSchedulingDelegate> _schedulingDelegate;
    id <MTTaskScheduler> _taskScheduler;
    id <MTPersistence> _defaults;
}

@property (nonatomic, readonly) id <MTAlarmStorage> storage;
@property (nonatomic, readonly) MTScheduledList *scheduledAlarms;
@property (nonatomic, readonly) id <NAScheduler> serializer;
@property (nonatomic, readonly) id <MTNotificationCenter> notificationCenter;
@property (copy, nonatomic, readonly) CDUnknownBlockType currentDateProvider;
@property (nonatomic, readonly) id <MTSchedulingDelegate> schedulingDelegate;
@property (nonatomic, readonly) id <MTTaskScheduler> taskScheduler;
@property (retain, nonatomic) id <MTPersistence> defaults;
@property (weak, nonatomic) id <MTAlarmScheduleDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intervalToCheckForAlarmsToFireBeforeDate:(id)arg1;

- (id)sourceIdentifier;
- (id)nextTriggerDate;
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scheduledListDidChange:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)cleanDeliveredNotifications;
- (id)nextAlarm;
- (void)rescheduleAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 schedulingDelegate:(id)arg5 taskScheduler:(id)arg6 currentDateProvider:(CDUnknownBlockType)arg7;
- (void)_rescheduleAlarmsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_scheduleAlarms:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_lastAlarmTriggerDate;
- (void)_setLastAlarmTriggerDate:(id)arg1;
- (void)_unscheduleAlarms:(id)arg1;
- (void)_queue_updateNextAlarmTimerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_nextTriggerDateForScheduling;
- (void)_queue_fireTriggeredAlarmsWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_queue_unregisterTimer;
- (_Bool)_shouldPostNotificationForScheduledAlarm:(id)arg1;
- (void)_fireScheduledAlarm:(id)arg1 firedDate:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)nextAlarmIncludingBedtimeNotification:(_Bool)arg1;
- (id)nextScheduledAlarmIncludingBedtimeNotification:(_Bool)arg1;
- (id)nextTriggerDateIncludingBedtimeNotification:(_Bool)arg1;
- (id)_nextScheduledAlertIncludingBedtimeNotification:(_Bool)arg1;
- (void)scheduleAlarms:(id)arg1;
- (void)unscheduleAlarms:(id)arg1;
- (void)_queue_triggerDidFireForAlarmWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2;

@end
