/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMProbe.h>

@class NSThread;

@interface MXMResourceProbe : MXMProbe

{
    NSThread *_pollingThread;
}

@property (retain) NSThread *pollingThread;

+ (id)probe;
+ (int)_processIdentifierWithProcessName:(const char *)arg1 error:(id *)arg2;

- (id)init;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (_Bool)performPreIterationActions;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long *)arg2;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 rusage_v4:(struct rusage_info_v4 *)arg3;
- (id)_pollMainBody;
- (void)_pollProcessWithData:(id)arg1 pid:(int)arg2;
- (void)_pollAllProcesses:(id)arg1;
- (void)_pollProcessResourceUsageWithData:(id)arg1 pid:(int)arg2;
- (void)_pollTaskMachPortInformation:(id)arg1 task:(unsigned int)arg2;
- (void)_pollProcessNetworkingStatsWithData:(id)arg1 pid:(int)arg2 task:(unsigned int)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 pm_networking_stats:(CDStruct_cee916e5 *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 rusage:(struct rusage_info_v4 *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 mach_space_basicinfo:(struct ipc_info_space_basic *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 taskinfo:(struct proc_taskinfo *)arg3;
- (void)_pollBasicTaskInformation:(id)arg1 pid:(int)arg2;

@end
