//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileTimer/MTAgentDiagnosticDelegate-Protocol.h>
#import <MobileTimer/MTAlarmObserver-Protocol.h>
#import <MobileTimer/MTSleepCoordinatorStateMachineDelegate-Protocol.h>
#import <MobileTimer/MTSleepCoordinatorStateMachineInfoProvider-Protocol.h>
#import <MobileTimer/MTSource-Protocol.h>
#import <MobileTimer/MTTimeObserver-Protocol.h>

@class MTAlarm, MTBedtimeDNDMonitor, MTObserverStore, MTSleepCoordinatorStateMachine, MTXPCScheduler, NAFuture, NSDate;
@protocol MTAlarmStorage, NAScheduler;

@interface MTSleepCoordinator : NSObject <MTSource, MTSleepCoordinatorStateMachineDelegate, MTSleepCoordinatorStateMachineInfoProvider, MTAlarmObserver, MTTimeObserver, MTAgentDiagnosticDelegate>
{
    MTSleepCoordinatorStateMachine *_stateMachine;
    MTAlarm *_cachedSleepAlarm;
    id <NAScheduler> _serializer;
    NAFuture *_sleepStateResolved;
    MTObserverStore *_observers;
    id <MTAlarmStorage> _alarmStorage;
    MTXPCScheduler *_alarmTimeoutScheduler;
    MTBedtimeDNDMonitor *_bedtimeDNDMonitor;
    id /* CDUnknownBlockType */ _currentDateProvider;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
@property(retain, nonatomic) MTBedtimeDNDMonitor *bedtimeDNDMonitor; // @synthesize bedtimeDNDMonitor=_bedtimeDNDMonitor;
@property(retain, nonatomic) MTXPCScheduler *alarmTimeoutScheduler; // @synthesize alarmTimeoutScheduler=_alarmTimeoutScheduler;
@property(copy, nonatomic) id <MTAlarmStorage> alarmStorage; // @synthesize alarmStorage=_alarmStorage;
@property(retain, nonatomic) MTObserverStore *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NAFuture *sleepStateResolved; // @synthesize sleepStateResolved=_sleepStateResolved;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTAlarm *cachedSleepAlarm; // @synthesize cachedSleepAlarm=_cachedSleepAlarm;
@property(retain, nonatomic) MTSleepCoordinatorStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
// - (void).cxx_destruct;
- (id)gatherDiagnostics;
- (void)printDiagnostics;
- (id)sourceIdentifier;
- (void)pairedDevicePreferencesChanged:(id)arg1;
- (void)handleNotification:(id)arg1 ofType:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)handlesNotification:(id)arg1 ofType:(long long)arg2;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)handleBedtimeSessionEndedForAlarm:(id)arg1 date:(id)arg2 reason:(NSUInteger)arg3;
- (void)handleDismissForAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 date:(id)arg3;
- (void)handleSnoozeForAlarm:(id)arg1 date:(id)arg2;
- (void)handleWakeUpAlarmForAlarm:(id)arg1 date:(id)arg2;
- (void)handleWakeUpTimeForAlarm:(id)arg1 date:(id)arg2;
- (void)handleBedtimeForAlarm:(id)arg1 date:(id)arg2;
- (void)handleSnoozeOfGoToBedNotificationForAlarm:(id)arg1 date:(id)arg2;
- (void)handleConfirmationOfGoToBedNotificationForAlarm:(id)arg1 date:(id)arg2;
- (void)handleBedtimeReminderForAlarm:(id)arg1 date:(id)arg2;
- (void)bedtimeSessionTracker:(id)arg1 sessionDidComplete:(id)arg2;
- (void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(NSUInteger)arg3;
- (void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(NSUInteger)arg3;
- (void)source:(id)arg1 didChangeNextAlarm:(id)arg2;
- (void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(NSUInteger)arg3;
- (void)notifyObserversForSleepAlarmChangeIfNecessary:(id)arg1;
- (void)_notifyObserversForSleepAlarmChange:(id)arg1;
- (void)notifyObserversForSleepAlarmChange:(id)arg1;
- (void)source:(id)arg1 didUpdateAlarms:(id)arg2;
- (void)source:(id)arg1 didRemoveAlarms:(id)arg2;
- (void)source:(id)arg1 didAddAlarms:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)stateMachine:(id)arg1 shouldScheduleAlarmTimeoutForSecondsFromNow:(double)arg2;
- (void)stateMachine:(id)arg1 dismissWakeUpAlarm:(id)arg2 dismissAction:(NSUInteger)arg3;
- (void)stateMachineUserWokeUp:(id)arg1;
- (void)stateMachineUserWentToBed:(id)arg1;
@property(readonly, nonatomic) NSUInteger sleepTimeOutMinutes;
@property(readonly, nonatomic) NSDate *currentDate;
@property(readonly, nonatomic) MTAlarm *sleepAlarm;
- (BOOL)isBedtimeDNDOn;
- (BOOL)inUserDefinedSleepWindow;
- (void)updateSleepStateWithSleepAlarm:(id)arg1;
- (void)updateSleepState;
- (id)initWithAlarmStorage:(id)arg1 currentDateProvider:(id /* CDUnknownBlockType */)arg2;
- (id)initWithAlarmStorage:(id)arg1;

@end

