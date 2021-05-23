/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXAppRunTimeMetric : MXMetric

{
    NSMeasurement *_cumulativeForegroundTime;
    NSMeasurement *_cumulativeBackgroundTime;
    NSMeasurement *_cumulativeBackgroundAudioTime;
    NSMeasurement *_cumulativeBackgroundLocationTime;
}

@property (readonly) NSMeasurement *cumulativeForegroundTime;
@property (readonly) NSMeasurement *cumulativeBackgroundTime;
@property (readonly) NSMeasurement *cumulativeBackgroundAudioTime;
@property (readonly) NSMeasurement *cumulativeBackgroundLocationTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithCumulativeForegroundTimeMeasurement:(id)arg1 cumulativeBackgroundTimeMeasurement:(id)arg2 cumulativeBackgroundAudioTimeMeasurement:(id)arg3 cumulativeBackgroundLocationTimeMeasurement:(id)arg4;

@end
