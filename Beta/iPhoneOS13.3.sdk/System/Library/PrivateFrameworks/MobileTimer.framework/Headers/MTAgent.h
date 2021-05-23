/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTAgentDiagnosticListener, MTAgentNotificationManager, MTAlarmIntentDonor, MTAlarmScheduler, MTAlarmServer, MTAlarmSnapshot, MTAlarmStorage, MTBedtimeDNDMonitor, MTBedtimeSessionManager, MTBedtimeSessionTracker, MTCoreDuetMonitor, MTLanguageChangeListener, MTSleepCoordinator, MTSystemStateListener, MTTimeListener, MTTimerIntentDonor, MTTimerScheduler, MTTimerServer, MTTimerSnapshot, MTTimerStorage, NSDate, NSString;

@protocol MTNotificationCenter, NAScheduler;

@interface MTAgent : NSObject

{
    _Bool _systemReady;
    NSDate *_launchDate;
    id <NAScheduler> _serializer;
    MTAgentNotificationManager *_notificationManager;
    MTSystemStateListener *_systemStateListener;
    MTLanguageChangeListener *_languageChangeListener;
    MTAgentDiagnosticListener *_diagnostics;
    MTTimeListener *_timeListener;
    MTAlarmServer *_alarmServer;
    MTAlarmScheduler *_alarmScheduler;
    MTAlarmSnapshot *_alarmSnapshot;
    MTAlarmStorage *_alarmStorage;
    MTTimerServer *_timerServer;
    MTTimerScheduler *_timerScheduler;
    MTTimerSnapshot *_timerSnapshot;
    MTTimerStorage *_timerStorage;
    id <MTNotificationCenter> _notificationCenter;
    MTAlarmIntentDonor *_alarmIntentDonor;
    MTTimerIntentDonor *_timerIntentDonor;
    MTCoreDuetMonitor *_coreDuetMonitor;
    MTSleepCoordinator *_sleepCoordinator;
    MTBedtimeDNDMonitor *_bedtimeDNDMonitor;
    MTBedtimeSessionManager *_bedtimeSessionManager;
    MTBedtimeSessionTracker *_bedtimeSessionTracker;
}

@property (retain, nonatomic) NSDate *launchDate;
@property (nonatomic) _Bool systemReady;
@property (retain, nonatomic) id <NAScheduler> serializer;
@property (retain, nonatomic) MTAgentNotificationManager *notificationManager;
@property (retain, nonatomic) MTSystemStateListener *systemStateListener;
@property (retain, nonatomic) MTLanguageChangeListener *languageChangeListener;
@property (retain, nonatomic) MTAgentDiagnosticListener *diagnostics;
@property (retain, nonatomic) MTTimeListener *timeListener;
@property (retain, nonatomic) MTAlarmServer *alarmServer;
@property (retain, nonatomic) MTAlarmScheduler *alarmScheduler;
@property (retain, nonatomic) MTAlarmSnapshot *alarmSnapshot;
@property (retain, nonatomic) MTAlarmStorage *alarmStorage;
@property (retain, nonatomic) MTTimerServer *timerServer;
@property (retain, nonatomic) MTTimerScheduler *timerScheduler;
@property (retain, nonatomic) MTTimerSnapshot *timerSnapshot;
@property (retain, nonatomic) MTTimerStorage *timerStorage;
@property (retain, nonatomic) id <MTNotificationCenter> notificationCenter;
@property (retain, nonatomic) MTAlarmIntentDonor *alarmIntentDonor;
@property (retain, nonatomic) MTTimerIntentDonor *timerIntentDonor;
@property (retain, nonatomic) MTCoreDuetMonitor *coreDuetMonitor;
@property (retain, nonatomic) MTSleepCoordinator *sleepCoordinator;
@property (retain, nonatomic) MTBedtimeDNDMonitor *bedtimeDNDMonitor;
@property (retain, nonatomic) MTBedtimeSessionManager *bedtimeSessionManager;
@property (retain, nonatomic) MTBedtimeSessionTracker *bedtimeSessionTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)agent;

- (id)init;
- (void)_setupNotificationCenter;
- (void)printDiagnostics;
- (id)gatherDiagnostics;
- (void)handleF5Reset;
- (void)handleMigrationFinish;
- (void)restoreDidFinish;
- (void)_setupAlarms;
- (void)_setupTimers;
- (void)_setupInitialListeners;
- (void)_setupSecondaryListeners;
- (id)_diagnosticProviders;

@end
