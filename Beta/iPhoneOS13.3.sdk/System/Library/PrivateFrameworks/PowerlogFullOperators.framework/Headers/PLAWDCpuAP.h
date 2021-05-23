/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <PowerlogFullOperators/PLAWDAuxMetrics.h>

@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLAWDCpuAP : PLAWDAuxMetrics

{
    _Bool _isIoreportEnergy;
    PLEntryNotificationOperatorComposition *_monitorEventCallback;
    PLEntryNotificationOperatorComposition *_wakeEventCallback;
    PLEntryNotificationOperatorComposition *_ioreportEnergyEventCallback;
    NSDate *_sleepStartTime;
    long long _apSubmitCnt;
    long long _cpuLoadSubmitCnt;
}

@property (retain) PLEntryNotificationOperatorComposition *monitorEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *wakeEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *ioreportEnergyEventCallback;
@property (retain) NSDate *sleepStartTime;
@property _Bool isIoreportEnergy;
@property long long apSubmitCnt;
@property long long cpuLoadSubmitCnt;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryAggregateDefinitionAwdAp;
+ (id)entryAggregateDefinitionAwdCpu;

- (void)startMetricCollection:(id)arg1;
- (void)stopMetricCollection:(id)arg1;
- (_Bool)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)startApMetricCollection:(id)arg1;
- (void)startCpuMetricCollection:(id)arg1;
- (_Bool)submitApDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (_Bool)submitCpuDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)resetApTable;
- (void)handleMonitorCallback:(id)arg1;
- (void)handleIOReportEnergyCallback:(id)arg1;
- (void)handleWakeCallback:(id)arg1;
- (void)addEntryToApMetricsTable:(id)arg1 withValue:(double)arg2;

@end
