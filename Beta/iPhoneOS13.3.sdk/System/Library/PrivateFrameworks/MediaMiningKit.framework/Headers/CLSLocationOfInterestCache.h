/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSObject.h>

@class CLSLocationOfInterestVisit, NSDate, NSMutableDictionary, NSMutableSet;

@interface CLSLocationOfInterestCache : NSObject

{
    NSMutableDictionary *_visitsCache;
    NSMutableDictionary *_transitionsCache;
    NSMutableSet *_allLocationsOfInterest;
    NSMutableSet *_allLocationsOfInterestTransitionIdentifiers;
    NSMutableSet *_homeLocations;
    NSMutableSet *_workLocations;
    unsigned long long _numberOfLocationsOfInterestVisits;
    NSDate *_earliestVisitStartDate;
    CLSLocationOfInterestVisit *_lastLocationOfInterestVisit;
}

@property (retain, nonatomic) NSMutableDictionary *visitsCache;
@property (retain, nonatomic) NSMutableSet *allLocationsOfInterest;
@property (retain, nonatomic) NSMutableSet *homeLocations;
@property (retain, nonatomic) NSMutableSet *workLocations;
@property (retain, nonatomic) NSMutableDictionary *transitionsCache;
@property (retain, nonatomic) NSMutableSet *allLocationsOfInterestTransitionIdentifiers;
@property (readonly) unsigned long long numberOfLocationsOfInterest;
@property (readonly) unsigned long long numberOfLocationsOfInterestVisits;
@property (readonly) unsigned long long numberOfLocationsOfInterestTransitions;
@property (readonly) NSDate *earliestVisitStartDate;
@property (readonly) CLSLocationOfInterestVisit *lastLocationOfInterestVisit;

- (id)init;
- (void)addLocationOfInterest:(id)arg1;
- (id)locationsOfInterestOfType:(long long)arg1;
- (id)closestLocationOfInterestVisitToLocation:(id)arg1 withinDistance:(double)arg2 inDateInterval:(id)arg3;
- (id)locationOfInterestAtLocation:(id)arg1;
- (id)locationsOfInterestVisitsAtLocation:(id)arg1 inDateInterval:(id)arg2;
- (id)locationsOfInterestVisitsInDateInterval:(id)arg1;
- (void)addLocationOfInterestTransition:(id)arg1;
- (id)locationsOfInterestTransitionInDateInterval:(id)arg1;

@end
