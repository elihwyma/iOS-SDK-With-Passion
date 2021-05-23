/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSLocationOfInterestCache, NSDateInterval, NSMutableSet;

@interface CLSRoutineService : NSObject

{
    CLSLocationOfInterestCache *_visitsCache;
    _Bool _routineIsAvailable;
    NSDateInterval *_fetchDateInterval;
    NSMutableSet *_pendingPinningVisitIdentifiers;
    struct CLSRoutineServiceStatisticsStruct _statistics;
}

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (nonatomic, readonly) CLSLocationOfInterestCache *visitsCache;
@property (nonatomic) _Bool routineIsAvailable;
@property (readonly) struct CLSRoutineServiceStatisticsStruct statistics;

- (id)locationsOfInterestOfType:(long long)arg1;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)initWithFetchDateInterval:(id)arg1;
- (void)invalidateLocationsOfInterest;
- (void)postProcessLocationsOfInterest;
- (_Bool)hasLocationsOfInterestInformation;
- (id)locationOfInterestCloseToLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (_Bool)isRemoteLocation:(id)arg1 inDateInterval:(id)arg2;
- (unsigned long long)_devicePlacementTypeForLocationsOfInterestVisits:(id)arg1;
- (double)_disambiguationDistanceForDevicePlacementType:(unsigned long long)arg1;
- (void)_buildLocationsOfInterestCache;
- (id)_fetchLocationsOfInterestWithinDateInterval:(id)arg1 routineManager:(id)arg2;
- (id)_fetchHomeAndWorkLocationsOfInterestWithRoutineManager:(id)arg1;
- (void)_pinPendingVisits;
- (id)placemarksOfInterestOfType:(long long)arg1;
- (long long)predominantTransportationModeForDateInterval:(id)arg1 confidence:(double *)arg2;
- (id)_fetchLocationOfInterestTransitionsWithinDateInterval:(id)arg1 routineManager:(id)arg2;
- (id)_placemarksFromLocationsOfInterest:(id)arg1;

@end
