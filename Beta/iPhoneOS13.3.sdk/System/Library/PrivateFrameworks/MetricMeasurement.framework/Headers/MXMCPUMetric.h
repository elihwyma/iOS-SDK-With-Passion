/*
 Image: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
 */

#import <MetricMeasurement/MXMMetric.h>

@class MXMInstrument, NSNumber, NSString;

@interface MXMCPUMetric : MXMMetric

@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) NSNumber *processIdentifier;
@property (copy, nonatomic, readonly) MXMInstrument *instrument;

+ (id)currentProcess;
+ (id)instrumentThread;

- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (_Bool)_shouldConstructProbe;
- (id)_constructProbe;
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;

@end
