/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <CoreSpeech/CSEventMonitor.h>

@class MTAlarmManager, NSObject;

@protocol OS_dispatch_queue;

@interface CSAlarmMonitor : CSEventMonitor

{
    long long _alarmFiringState;
    NSObject<OS_dispatch_queue> *_queue;
    MTAlarmManager *_alarmManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;
- (long long)alarmState;
- (void)_notifyObserver:(id)arg1 alarmIsFiringState:(long long)arg2;
- (void)_alarmIsFiring:(id)arg1;
- (void)_alarmDismissed:(id)arg1;
- (void)_alarmStateReset:(id)arg1;
- (void)initializeAlarmState;

@end
