/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, PLLocationOfInterestVisit;

@interface PLLocationOfInterestCache : NSObject

{
    NSMutableDictionary *_visitsCache;
    NSMutableSet *_allLocationsOfInterest;
    NSMutableSet *_homeLocations;
    NSMutableSet *_workLocations;
    unsigned long long _numberOfLocationsOfInterestVisits;
    NSDate *_earliestVisitStartDate;
    PLLocationOfInterestVisit *_lastLocationOfInterestVisit;
    unsigned long long _numberOfLocationsOfInterestTransitions;
}

@property (retain, nonatomic) NSMutableDictionary *visitsCache;
@property (retain, nonatomic) NSMutableSet *allLocationsOfInterest;
@property (retain, nonatomic) NSMutableSet *homeLocations;
@property (retain, nonatomic) NSMutableSet *workLocations;
@property (readonly) unsigned long long numberOfLocationsOfInterest;
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions;
@property (readonly) NSDate *earliestVisitStartDate;
@property (readonly) PLLocationOfInterestVisit *lastLocationOfInterestVisit;

- (id)init;
- (void)addLocationOfInterest:(id)arg1;
- (id)locationsOfInterestOfType:(long long)arg1;
- (id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationsOfInterestVisitsInDateInterval:(id)arg1;

@end
