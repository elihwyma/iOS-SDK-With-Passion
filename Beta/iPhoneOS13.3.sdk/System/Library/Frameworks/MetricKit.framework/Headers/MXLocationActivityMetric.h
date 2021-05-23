/*
 Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

#import <MetricKit/MXMetric.h>

@class NSMeasurement;

@interface MXLocationActivityMetric : MXMetric

{
    NSMeasurement *_cumulativeBestAccuracyTime;
    NSMeasurement *_cumulativeBestAccuracyForNavigationTime;
    NSMeasurement *_cumulativeNearestTenMetersAccuracyTime;
    NSMeasurement *_cumulativeHundredMetersAccuracyTime;
    NSMeasurement *_cumulativeKilometerAccuracyTime;
    NSMeasurement *_cumulativeThreeKilometersAccuracyTime;
}

@property (readonly) NSMeasurement *cumulativeBestAccuracyTime;
@property (readonly) NSMeasurement *cumulativeBestAccuracyForNavigationTime;
@property (readonly) NSMeasurement *cumulativeNearestTenMetersAccuracyTime;
@property (readonly) NSMeasurement *cumulativeHundredMetersAccuracyTime;
@property (readonly) NSMeasurement *cumulativeKilometerAccuracyTime;
@property (readonly) NSMeasurement *cumulativeThreeKilometersAccuracyTime;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;
- (id)initWithCumulativeBestAccuracyTimeMeasurement:(id)arg1 cumulativeBestAccuracyForNavigationTimeMeasurement:(id)arg2 nearestTenMetersAccuracyTimeMeasurement:(id)arg3 hundredMetersAccuracyTimeMeasurement:(id)arg4 kilometerAccuracyTimeMeasurement:(id)arg5 threeKilometerAccuracyTimeMeasurement:(id)arg6;

@end
