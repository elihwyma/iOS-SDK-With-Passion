/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXCellularConditionMetric : MXMetric

{
    MXHistogram *_histogrammedCellularConditionTime;
}

@property (readonly) MXHistogram *histogrammedCellularConditionTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithCellularConditionTime:(id)arg1;

@end
