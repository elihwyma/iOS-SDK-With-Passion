/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, _PASLock;

@protocol ATXLocationManagerGPS, ATXLocationManagerRoutine, ATXLocationManagerStateStore;

@interface ATXLocationManager : NSObject

{
    id <ATXLocationManagerGPS> _gps;
    id <ATXLocationManagerRoutine> _routine;
    id <ATXLocationManagerStateStore> _stateStore;
    _PASLock *_lock;
    NSDate *_now;
    double _predictedNextLOITimeout;
    double _predictedExitDateTimeout;
}

@property (retain, nonatomic) NSDate *now;
@property (nonatomic) double predictedNextLOITimeout;
@property (nonatomic) double predictedExitDateTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)stringForLOIType:(long long)arg1;

- (id)init;
- (id)getCurrentLocation;
- (id)predictedExitTimes;
- (_Bool)locationEnabled;
- (_Bool)isAvailableLocationOfInterestType:(long long)arg1;
- (id)predictedLocationsOfInterest;
- (id)getPredictedLocationsOfInterestFromLOIName:(id)arg1 startDate:(id)arg2;
- (id)getPredictedExitTimesFromLOIName:(id)arg1 startDate:(id)arg2;
- (id)locationOfInterestAtCurrentLocation;
- (double)distanceFromHomeOfCurrentLocationInMeters;
- (double)distanceFromWorkOfCurrentLocationInMeters;
- (double)distanceFromSchoolOfCurrentLocationInMeters;
- (double)distanceFromGymOfCurrentLocationInMeters;
- (void)fetchAllLocationsOfInterest:(CDUnknownBlockType)arg1;
- (void)clearLocationOfInterest;
- (void)didChangeLocationEnabled:(_Bool)arg1;
- (id)initWithGPS:(id)arg1 routine:(id)arg2 stateStore:(id)arg3 now:(id)arg4;
- (void)updateCurrentLocationOfInterest;
- (void)_fetchLocationOfInterest:(long long)arg1 inGroup:(id)arg2;
- (void)gotLocation:(id)arg1 forLocationOfInterest:(long long)arg2;
- (void)gotState:(id)arg1;
- (void)_handleRoutineError:(id)arg1 forThing:(id)arg2;
- (void)_updateLocationOfInterestIfTimeElapsed;
- (id)previousLOIAndCurrentLOI;
- (void)_updatePredictedLocationsOfInterestIfTimeElapsed;
- (void)_updatePredictedExitTimesIfTimeElapsed;
- (void)updatePredictedLocationsOfInterest;
- (void)updatePredictedExitTimes;
- (double)_distanceOfCurrentLocationFrom:(id)arg1;
- (void)didGetLocationUpdate:(id)arg1;

@end
