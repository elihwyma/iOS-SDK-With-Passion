/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMProbe.h>

@class MXMMutableSampleData, NSThread;

@interface MXMSystemProbe : MXMProbe

{
    MXMMutableSampleData *_data;
    NSThread *_updateThread;
}

+ (id)probe;

- (id)init;
- (void)_beginUpdates;
- (void)_stopUpdates;
- (void)_pollSystemLoop;
- (void)_gatherConstantSystemProperties;
- (void)_pollSystemMainBody;
- (void)_pollSystemHostProcessorInfoWithData:(id)arg1;
- (void)_pollProcessorLoadInformationWithData:(id)arg1;
- (void)_pollSystemLoadInformationWithData:(id)arg1;
- (void)_pollSystemThermalsWithData:(id)arg1;
- (void)_pollSystemBatteryWithData:(id)arg1;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 processorCount:(unsigned int)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuInfo:(struct processor_basic_info *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuLoad:(struct processor_cpu_load_info *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 loadInfo:(struct processor_set_load_info *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 hostInfo:(struct vm_statistics64 *)arg3;
- (void)_prepareData;

@end
