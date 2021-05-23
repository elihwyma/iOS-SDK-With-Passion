/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class DNDModeAssertionService, MTAlarm, MTBedtimeDNDStateMachine, MTSleepCoordinator, NSDate, NSString;

@protocol MTAlarmStorage, NAScheduler;

@interface MTBedtimeDNDMonitor : NSObject

{
    id <MTAlarmStorage> _alarmStorage;
    MTSleepCoordinator *_sleepCoordinator;
    CDUnknownBlockType _currentDateProvider;
    MTBedtimeDNDStateMachine *_stateMachine;
    DNDModeAssertionService *_assertionService;
    id <NAScheduler> _serializer;
}

@property (retain, nonatomic) id <MTAlarmStorage> alarmStorage;
@property (weak, nonatomic) MTSleepCoordinator *sleepCoordinator;
@property (copy, nonatomic) CDUnknownBlockType currentDateProvider;
@property (retain, nonatomic) MTBedtimeDNDStateMachine *stateMachine;
@property (retain, nonatomic) DNDModeAssertionService *assertionService;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MTAlarm *sleepAlarm;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) NSDate *keepOffUntilDate;
@property (nonatomic, readonly) _Bool inUserDefinedSleepWindow;

- (void)dealloc;
- (_Bool)isEnabled;
- (void)modeAssertionService:(id)arg1 didReceiveModeAssertionInvalidation:(id)arg2;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (_Bool)stateMachine:(id)arg1 disengageBedtimeDNDUserRequested:(_Bool)arg2;
- (void)stateMachine:(id)arg1 keepBedtimeDNDOffUntilDate:(id)arg2;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2 currentDateProvider:(CDUnknownBlockType)arg3;
- (_Bool)isBedtimeDNDEnabled:(_Bool *)arg1 error:(id *)arg2;
- (unsigned long long)bedtimeDNDTimeoutMinutes;
- (_Bool)isBedtimeDNDEnabled:(_Bool *)arg1;
- (void)userDisengagedBedtimeDNDOnDate:(id)arg1;
- (void)updateMonitorState;
- (_Bool)stateMachine:(id)arg1 engageBedtimeDNDUntilDate:(id)arg2 userEngaged:(_Bool)arg3;
- (void)stateMachineClearKeepBedtimeDNDOff:(id)arg1;
- (void)stateMachine:(id)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)sleepCoordinator:(id)arg1 userWentToBed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 userWokeUp:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderDidFire:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 bedtimeWasReached:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmDidFire:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 wakeUpAlarmWasSnoozed:(id)arg2 sleepAlarm:(id)arg3;
- (void)sleepCoordinator:(id)arg1 sleepAlarmDidChange:(id)arg2;
- (void)timeListener:(id)arg1 didDetectSignificantTimeChangeWithCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithAlarmStorage:(id)arg1 sleepCoordinator:(id)arg2;
- (_Bool)bedtimeDoNotDisturb:(id *)arg1;
- (void)userDisengagedBedtimeDND;

@end
