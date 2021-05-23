/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSeriesSample.h>

@class HDCodableLocationSeries;

@interface HKWorkoutRoute : HKSeriesSample

{
    HDCodableLocationSeries *__codableWorkoutRoute;
}

@property (retain, nonatomic, setter=_setCodableWorkoutRoute:) HDCodableLocationSeries *_codableWorkoutRoute;

+ (id)_workoutRouteWithDevice:(id)arg1 metadata:(id)arg2;

- (id)_valueDescription;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (id)_validateSample;
- (_Bool)_isSmoothed;
- (_Bool)_requiresPrivateEntitlementForQueries;

@end
