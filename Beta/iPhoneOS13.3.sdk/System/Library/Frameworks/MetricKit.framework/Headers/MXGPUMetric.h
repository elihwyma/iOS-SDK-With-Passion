/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXGPUMetric : MXMetric

{
    NSMeasurement *_cumulativeGPUTime;
}

@property (readonly) NSMeasurement *cumulativeGPUTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithCumulativeGPUTimeMeasurement:(id)arg1;

@end
