/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXDiskIOMetric : MXMetric

{
    NSMeasurement *_cumulativeLogicalWrites;
}

@property (readonly) NSMeasurement *cumulativeLogicalWrites;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithCumulativeLogicalWritesMeasurement:(id)arg1;

@end
