/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class MXAverage;

@interface MXDisplayMetric : MXMetric

{
    MXAverage *_averagePixelLuminance;
}

@property (readonly) MXAverage *averagePixelLuminance;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithAveragePictureLevel:(id)arg1;

@end
