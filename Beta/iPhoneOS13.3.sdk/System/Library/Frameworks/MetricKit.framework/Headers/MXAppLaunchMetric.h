/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class MXHistogram;

@interface MXAppLaunchMetric : MXMetric

{
    MXHistogram *_histogrammedTimeToFirstDraw;
    MXHistogram *_histogrammedApplicationResumeTime;
}

@property (readonly) MXHistogram *histogrammedTimeToFirstDraw;
@property (readonly) MXHistogram *histogrammedApplicationResumeTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithLaunchTimeData:(id)arg1 withResumeTimeData:(id)arg2;

@end
