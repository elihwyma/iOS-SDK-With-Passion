/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <Foundation/NSObject.h>

@class MXAverage, MXHistogram, NSMeasurement, NSMeasurementFormatter;

@interface MXSignpostIntervalData : NSObject

{
    MXHistogram *_histogrammedSignpostDuration;
    NSMeasurement *_cumulativeCPUTime;
    MXAverage *_averageMemory;
    NSMeasurement *_cumulativeLogicalWrites;
    NSMeasurementFormatter *_measurementFormatter;
    NSMeasurement *_peakMemory;
}

@property (retain) NSMeasurementFormatter *measurementFormatter;
@property (readonly) NSMeasurement *peakMemory;
@property (readonly) MXHistogram *histogrammedSignpostDuration;
@property (readonly) NSMeasurement *cumulativeCPUTime;
@property (readonly) MXAverage *averageMemory;
@property (readonly) NSMeasurement *cumulativeLogicalWrites;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withAverageMemory:(id)arg3 withCumulativeLogicalWrites:(id)arg4;
- (id)initWithHistogramDurationData:(id)arg1 withCumulativeCPUTime:(id)arg2 withPeakMemory:(id)arg3 withAverageMemory:(id)arg4 withCumulativeLogicalWrites:(id)arg5;

@end
