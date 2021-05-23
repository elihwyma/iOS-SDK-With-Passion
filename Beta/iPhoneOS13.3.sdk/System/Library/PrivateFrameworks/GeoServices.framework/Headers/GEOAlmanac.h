/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject

{
    GEOAlmanacRiseTransitSet *_previousRiseTransitSet;
    GEOAlmanacRiseTransitSet *_currentRiseTransitSet;
    GEOAlmanacRiseTransitSet *_nextRiseTransitSet;
}

@property (nonatomic, readonly) _Bool isDayLight;
@property (nonatomic, readonly) NSDate *previousSunrise;
@property (nonatomic, readonly) NSDate *previousTransit;
@property (nonatomic, readonly) NSDate *previousSunset;
@property (nonatomic, readonly) NSDate *sunrise;
@property (nonatomic, readonly) NSDate *transit;
@property (nonatomic, readonly) NSDate *sunset;
@property (nonatomic, readonly) NSDate *nextSunrise;
@property (nonatomic, readonly) NSDate *nextTransit;
@property (nonatomic, readonly) NSDate *nextSunset;

- (id)description;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 altitudeInDegrees:(double)arg2;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 date:(id)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3;
- (void)calculateGeocentricDirectionForSunX:(double *)arg1 Y:(double *)arg2 Z:(double *)arg3 date:(id)arg4;
- (_Bool)isDayLightForDate:(id)arg1;
- (id)sortedTimesForDate:(id)arg1;
- (void)calculateAstronomicalTimeForLocation:(CDStruct_c3b9c2ee)arg1 time:(double)arg2;
- (void)calculateGeocentricDirectionForSunX:(double *)arg1 Y:(double *)arg2 Z:(double *)arg3;
- (_Bool)isDayLightForTime:(double)arg1;

@end
