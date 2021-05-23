/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class HDMCAnalysisManager, HDProfile, HDRestorableAlarm, HKMCAnalysis, HKMCSettingsManager, NSString;

@protocol OS_dispatch_queue;

@interface HDMCNotificationManager : NSObject

{
    HDProfile *_profile;
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _observingAnalysisUpdates;
    HKMCAnalysis *_lastAnalysis;
    HDRestorableAlarm *_scheduler;
}

@property (nonatomic, readonly) HDRestorableAlarm *scheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)invalidate;
- (void)start;
- (void)settingsManagerDidUpdateNotificationSettings:(id)arg1;
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;
- (void)_queue_alarm:(id)arg1 didReceiveDueEvents:(id)arg2;
- (void)_queue_rescheduleNotificationsForAnalysis:(id)arg1;
- (void)_queue_removeAllScheduledNotifications;
- (id)initWithProfile:(id)arg1 analysisManager:(id)arg2 settingsManager:(id)arg3;
- (id)scheduledNotificationsWithError:(id *)arg1;

@end
