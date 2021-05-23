/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAlarm, MTBedtimeDNDMonitor, MTObserverStore, MTSleepCoordinatorStateMachine, MTXPCScheduler, NAFuture, NSDate, NSString;

@protocol MTAlarmStorage, NAScheduler;

@interface MTSleepCoordinator : NSObject

{
    MTSleepCoordinatorStateMachine *_stateMachine;
    MTAlarm *_cachedSleepAlarm;
    id <NAScheduler> _serializer;
    NAFuture *_sleepStateResolved;
    MTObserverStore *_observers;
    id <MTAlarmStorage> _alarmStorage;
    MTXPCScheduler *_alarmTimeoutScheduler;
    MTBedtimeDNDMonitor *_bedtimeDNDMonitor;
    CDUnknownBlockType _currentDateProvider;
}

@property (retain, nonatomic) MTSleepCoordinatorStateMachine *stateMachine;
@property (retain, nonatomic) MTAlarm *cachedSleepAlarm;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) NAFuture *sleepStateResolved;
@property (retain, nonatomic) MTObserverStore *observers;
@property (copy, nonatomic) id <MTAlarmStorage> alarmStorage;
@property (retain, nonatomic) MTXPCScheduler *alarmTimeoutScheduler;
@property (retain, nonatomic) MTBedtimeDNDMonitor *bedtimeDNDMonitor;
@property (copy, nonatomic) CDUnknownBlockType currentDateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MTAlarm *sleepAlarm;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) unsigned long long sleepTimeOutMinutes;

- (id)sourceIdentifier;
- (void)registerObserver:(id)arg1;
- (_Bool)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stateMachineUserWentToBed:(id)arg1;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)stateMachine:(id)arg1 dismissWakeUpAlarm:(id)arg2 dismissAction:(unsigned long long)arg3;
- (void)stateMachine:(id)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2;
- (_Bool)inUserDefinedSleepWindow;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAlarmStorage:(id)arg1;
- (void)bedtimeSessionTracker:(id)arg1 sessionDidComplete:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1 currentDateProvider:(CDUnknownBlockType)arg2;
- (void)updateSleepStateWithSleepAlarm:(id)arg1;
- (void)notifyObserversForSleepAlarmChange:(id)arg1;
- (void)notifyObserversForSleepAlarmChangeIfNecessary:(id)arg1;
- (void)_notifyObserversForSleepAlarmChange:(id)arg1;
- (void)handleBedtimeForAlarm:(id)arg1 date:(id)arg2;
- (void)handleBedtimeReminderForAlarm:(id)arg1 date:(id)arg2;
- (void)handleWakeUpAlarmForAlarm:(id)arg1 date:(id)arg2;
- (void)handleWakeUpTimeForAlarm:(id)arg1 date:(id)arg2;
- (void)handleSnoozeOfGoToBedNotificationForAlarm:(id)arg1 date:(id)arg2;
- (void)handleSnoozeForAlarm:(id)arg1 date:(id)arg2;
- (void)handleConfirmationOfGoToBedNotificationForAlarm:(id)arg1 date:(id)arg2;
- (void)handleDismissForAlarm:(id)arg1 dismissAction:(unsigned long long)arg2 date:(id)arg3;
- (void)handleBedtimeSessionEndedForAlarm:(id)arg1 date:(id)arg2 reason:(unsigned long long)arg3;
- (void)updateSleepState;
- (void)stateMachineUserWokeUp:(id)arg1;
- (_Bool)isBedtimeDNDOn;
- (void)pairedDevicePreferencesChanged:(id)arg1;

@end
