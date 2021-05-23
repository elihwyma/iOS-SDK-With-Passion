/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLService.h>

@class PLEntryNotificationOperatorComposition, PLIOReportStats;

@interface PLAPEnergyService : PLService

{
    PLEntryNotificationOperatorComposition *_displayOnNotification;
    PLEntryNotificationOperatorComposition *_displayOffNotification;
    PLEntryNotificationOperatorComposition *_wakeEntryNotification;
    PLEntryNotificationOperatorComposition *_canSleepEntryNotification;
    unsigned long long _currentState;
    unsigned long long _currentEvent;
    PLIOReportStats *_energyModelIOReport;
    PLIOReportStats *_deviceStatsIOReport;
}

@property (retain) PLEntryNotificationOperatorComposition *displayOnNotification;
@property (retain) PLEntryNotificationOperatorComposition *displayOffNotification;
@property (retain) PLEntryNotificationOperatorComposition *wakeEntryNotification;
@property (retain) PLEntryNotificationOperatorComposition *canSleepEntryNotification;
@property unsigned long long currentState;
@property unsigned long long currentEvent;
@property (retain) PLIOReportStats *energyModelIOReport;
@property (retain) PLIOReportStats *deviceStatsIOReport;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventIntervalDefinitionCPUEnergyStats;

- (id)init;
- (void)initTaskOperatorDependancies;
- (void)handleEventNotification:(unsigned long long)arg1;
- (unsigned long long)getEventStateForEndEvent:(unsigned long long)arg1 withBeginEvent:(unsigned long long)arg2;
- (id)updateEnergyMetrics;
- (id)updateDutyCycleMetrics;
- (void)logPLEnergies:(id)arg1 withCpuDutyCycle:(id)arg2 andDuration:(id)arg3;

@end
