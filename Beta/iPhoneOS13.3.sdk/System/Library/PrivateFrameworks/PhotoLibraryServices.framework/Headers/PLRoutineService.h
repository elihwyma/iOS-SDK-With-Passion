/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDateInterval, NSMutableSet, NSSet, PLLocationOfInterestCache;

@interface PLRoutineService : NSObject

{
    _Bool _routineIsAvailable;
    NSDateInterval *_fetchDateInterval;
    PLLocationOfInterestCache *_visitsCache;
    NSMutableSet *_pendingPinningVisitIdentifiers;
}

@property (retain, nonatomic) NSDateInterval *fetchDateInterval;
@property (retain, nonatomic) NSMutableSet *pendingPinningVisitIdentifiers;
@property (retain, nonatomic) PLLocationOfInterestCache *visitsCache;
@property (nonatomic, readonly) NSSet *allLocationsOfInterest;
@property (nonatomic, readonly) NSSet *homeLocations;
@property (nonatomic, readonly) NSSet *workLocations;
@property (nonatomic, readonly) _Bool routineIsAvailable;

- (void)fetchLocationsOfInterestIfNeeded;
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

@end
