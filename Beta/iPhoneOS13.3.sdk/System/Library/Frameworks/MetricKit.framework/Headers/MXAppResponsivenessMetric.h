/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXAppResponsivenessMetric : MXMetric

{
    MXHistogram *_histogrammedApplicationHangTime;
}

@property (readonly) MXHistogram *histogrammedApplicationHangTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithAppResponsivenessData:(id)arg1;

@end
