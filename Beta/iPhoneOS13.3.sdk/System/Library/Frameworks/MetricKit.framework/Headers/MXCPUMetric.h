/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXCPUMetric : MXMetric

{
    NSMeasurement *_cumulativeCPUTime;
}

@property (readonly) NSMeasurement *cumulativeCPUTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithCumulativeCPUTimeMeasurement:(id)arg1;

@end
