/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <PowerlogCore/PLAgent.h>

@class NSDate, NSDictionary, NSMutableSet, PLEntryNotificationOperatorComposition, PLMonotonicTimer, PLNSNotificationOperatorComposition;

@interface PLProcessMonitorAgent : PLAgent

{
    _Bool _firstBoot;
    _Bool _launchServiceStatsEnabled;
    NSDate *_currentCachedDate;
    NSDate *_previousCacheDate;
    double _currentCachedTotalCPUTime;
    PLMonotonicTimer *_logTimer;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLNSNotificationOperatorComposition *_asertionNotifications;
    NSMutableSet *_processes;
    NSDictionary *_lastThreadIdToKTMonitorEntryDict;
    NSDate *_lastEntryDate;
    long long _processExitSummaryCount;
}

@property (retain) NSDate *currentCachedDate;
@property (retain) NSDate *previousCacheDate;
@property double currentCachedTotalCPUTime;
@property _Bool firstBoot;
@property (retain) PLMonotonicTimer *logTimer;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *asertionNotifications;
@property (retain) NSMutableSet *processes;
@property (retain) NSDictionary *lastThreadIdToKTMonitorEntryDict;
@property (retain) NSDate *lastEntryDate;
@property _Bool launchServiceStatsEnabled;
@property long long processExitSummaryCount;

+ (void)load;
+ (id)defaults;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventPointMemoryTracking;
+ (id)entryEventPointProcessSnapshot;
+ (id)entryEventPointProcessExit;
+ (id)entryEventForwardProcessID;
+ (id)entryEventBackwardDefinitionProcessMonitor;
+ (id)entryEventBackwardProcessExitHistogram;
+ (id)entryEventBackwardDefinitionProcessPeakMemory;
+ (id)entryEventIntervalDefinitionProcessMonitorDiff;
+ (id)entryEventIntervalDefinitionKernelTaskMonitor;
+ (unsigned long long)PIDToCoalitionID:(int)arg1;

- (id)init;
- (void)log;
- (void)initOperatorDependancies;
- (void)initTaskOperatorDependancies;
- (void)processesOfInterest:(id)arg1;
- (void)disableProcessExitLogging;
- (void)logEventIntervalProcessMonitorInterval;
- (void)logEventBackwardProcessPeakMemoryUsingCache;
- (void)logEventPointMemoryTracking;
- (void)logEventIntervalKernelTaskMonitor;
- (void)logProcessExit;
- (_Bool)isCachedForProcessID:(int)arg1;
- (id)eventForwardProcessIDForPID:(int)arg1;
- (void)enableProcessExitLogging;
- (void)logEventPointProcessSnapshot;
- (void)getCpuUsageAndMemoryForPid:(int)arg1 withBuffer:(void *)arg2 withNewProcessArray:(id)arg3 withTotalCpu:(double *)arg4 withActiveProcesses:(id)arg5;
- (void)updateProcessMonitorCache;
- (void)logEventIntervalProcessMonitorIntervalUsingCache;
- (void)logEventBackwardProcessMonitorUsingCache;
- (void)logEventPointProcessExit:(id)arg1 withLabelCount:(id)arg2 withStats:(CDStruct_d790cdc7 *)arg3 withDate:(id)arg4 withNowInSec:(unsigned long long)arg5;
- (void)logEventBackwardProcessExitHistogram:(id)arg1 withStats:(CDStruct_d790cdc7 *)arg2 withDate:(id)arg3;
- (id)processMonitorMultiKeyFromProcessID:(id)arg1;
- (int)get_kthread_list:(unsigned long long **)arg1;
- (_Bool)isCachedForProcessID:(int)arg1 andName:(id)arg2;
- (void)logEventBackwardProcessMonitor;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;

@end
