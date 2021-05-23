/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class MXAverage, NSMeasurement;

@interface MXMemoryMetric : MXMetric

{
    NSMeasurement *_peakMemoryUsage;
    MXAverage *_averageSuspendedMemory;
}

@property (readonly) NSMeasurement *peakMemoryUsage;
@property (readonly) MXAverage *averageSuspendedMemory;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithPeakMemoryUsageMeasurement:(id)arg1 averageMemoryUsageMeasurement:(id)arg2;

@end
