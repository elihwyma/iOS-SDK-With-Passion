/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class MXAverage;

@interface MXFramerateMetric : MXMetric

{
    MXAverage *_averageFramerate;
}

@property (readonly) MXAverage *averageFramerate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithAverageFramerate:(id)arg1;

@end
