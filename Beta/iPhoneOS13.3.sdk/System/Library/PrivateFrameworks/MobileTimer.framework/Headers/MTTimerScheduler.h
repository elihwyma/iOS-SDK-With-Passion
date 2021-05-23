/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTScheduledList, NSString;

@protocol MTNotificationCenter, MTPersistence, MTSchedulingDelegate, MTTaskScheduler, MTTimerSchedulerDelegate, MTTimerStorage, NAScheduler;

@interface MTTimerScheduler : NSObject

{
    id <MTTimerSchedulerDelegate> _delegate;
    id <MTTimerStorage> _storage;
    id <MTNotificationCenter> _notificationCenter;
    MTScheduledList *_scheduledTimers;
    id <NAScheduler> _serializer;
    CDUnknownBlockType _currentDateProvider;
    id <MTSchedulingDelegate> _schedulingDelegate;
    id <MTTaskScheduler> _taskScheduler;
    id <MTPersistence> _defaults;
}

@property (retain, nonatomic) id <MTTimerStorage> storage;
@property (retain, nonatomic) id <MTNotificationCenter> notificationCenter;
@property (nonatomic, readonly) MTScheduledList *scheduledTimers;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (copy, nonatomic, readonly) CDUnknownBlockType currentDateProvider;
@property (nonatomic, readonly) id <MTSchedulingDelegate> schedulingDelegate;
@property (nonatomic, readonly) id <MTTaskScheduler> taskScheduler;
@property (retain, nonatomic) id <MTPersistence> defaults;
@property (weak, nonatomic) id <MTTimerSchedulerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_intervalToCheckForTimersToFireBeforeDate:(id)arg1;

- (id)sourceIdentifier;
- (id)nextTriggerDate;
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scheduledListDidChange:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)nextTimer;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)nextTimerDidChange:(id)arg1;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2 scheduler:(id)arg3 defaults:(id)arg4 schedulingDelegate:(id)arg5 taskScheduler:(id)arg6 currentDateProvider:(CDUnknownBlockType)arg7;
- (void)_queue_unregisterTimer;
- (id)initWithStorage:(id)arg1 notificationCenter:(id)arg2;
- (void)rescheduleTimers;
- (id)_queue_nextTimer;
- (id)_queue_nextScheduledTimer;
- (void)rescheduleTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_rescheduleTimersWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_scheduleTimers:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_queue_unscheduleTimers:(id)arg1;
- (id)_queue_lastTimerTriggerDate;
- (void)_queue_setLastTimerTriggerDate:(id)arg1;
- (void)_queue_updatePersistentTimerForNextTimerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_queue_fireTriggeredTimersWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fireScheduledTimer:(id)arg1 firedDate:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_queue_triggerDidFireForTimerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)scheduleTimers:(id)arg1;
- (void)unscheduleTimers:(id)arg1;

@end
