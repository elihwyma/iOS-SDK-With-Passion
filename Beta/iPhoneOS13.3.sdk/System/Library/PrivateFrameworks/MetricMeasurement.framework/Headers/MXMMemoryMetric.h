/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMMetric.h>

@class MXMInstrument, NSNumber, NSString;

@interface MXMMemoryMetric : MXMMetric

@property (copy, nonatomic, readonly) NSString *processName;
@property (copy, nonatomic, readonly) NSNumber *processIdentifier;
@property (copy, nonatomic, readonly) MXMInstrument *instrument;

+ (id)currentProcess;

- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (void)willStartAtEstimatedTime:(unsigned long long)arg1;
- (_Bool)_shouldConstructProbe;
- (id)_constructProbe;

@end
