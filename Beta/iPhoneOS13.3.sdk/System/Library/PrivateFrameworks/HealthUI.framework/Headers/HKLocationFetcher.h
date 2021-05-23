/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKAnchoredObjectQuery, HKHealthStore, _HKLocationShifter, _HKWorkoutRouteStore;

@interface HKLocationFetcher : NSObject

{
    _HKLocationShifter *_shifter;
    _HKWorkoutRouteStore *_routesStore;
    HKHealthStore *_healthStore;
    HKAnchoredObjectQuery *_routesQuery;
}

@property (retain, nonatomic) _HKWorkoutRouteStore *routesStore;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKAnchoredObjectQuery *routesQuery;
@property (retain, nonatomic) _HKLocationShifter *shifter;

- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;
- (void)fetchLocationsFromWorkout:(id)arg1 applyThreshold:(_Bool)arg2 withSamplesHandler:(CDUnknownBlockType)arg3;
- (void)_handleAndShiftLocations:(id)arg1 forWorkout:(id)arg2 withSamplesHandler:(CDUnknownBlockType)arg3;
- (void)fetchRoutesFromWorkout:(id)arg1 withUpdateHandler:(CDUnknownBlockType)arg2;
- (id)_workoutRoutesQueryForWorkout:(id)arg1 withUpdateHandler:(CDUnknownBlockType)arg2;
- (_Bool)_routesAreSmoothed:(id)arg1;
- (void)fetchLocationsFromWorkout:(id)arg1 withSamplesHandler:(CDUnknownBlockType)arg2;

@end
