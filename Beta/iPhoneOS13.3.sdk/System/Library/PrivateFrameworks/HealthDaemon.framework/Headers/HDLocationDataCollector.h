/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CMElevation, HDAssertion, HDProfile, HKWorkoutRoute, NSString, NSUUID;

@protocol HDLocationEventDelegate, HDSampleSaving, OS_dispatch_queue;

@interface HDLocationDataCollector : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    long long _state;
    id <HDSampleSaving> _sampleSavingDelegate;
    int _lastStatus;
    HKWorkoutRoute *_route;
    _Bool _didSaveLocationData;
    double _lastPausedTime;
    unsigned long long _elevationGain;
    unsigned long long _activityType;
    NSUUID *_workoutUUID;
    HDAssertion *_locationUpdatingAssertion;
    unsigned long long _validLocationsCount;
    unsigned long long _skippedLocationsCount;
    id <HDLocationEventDelegate> _delegate;
    CMElevation *_elevation;
}

@property (weak, nonatomic) id <HDLocationEventDelegate> delegate;
@property (retain, nonatomic) CMElevation *elevation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)state;
- (_Bool)locationServicesEnabled;
- (int)authorizationStatus;
- (void)stopUpdates;
- (_Bool)isElevationAvailable;
- (void)startUpdates;
- (void)resumeUpdates;
- (void)pauseUpdates;
- (id)initWithProfile:(id)arg1 sampleSavingDelegate:(id)arg2 activityType:(unsigned long long)arg3 workoutUUID:(id)arg4;
- (void)healthLocationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)healthLocationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)healthLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)_queue_deleteCurrentRoute;
- (void)_queue_freezeCurrentWorkoutRoute;
- (void)_queue_stopGPSUpdates;
- (void)_queue_setupLocationUpdates;
- (id)createCMElevation;
- (void)_handleElevationData:(id)arg1 error:(id)arg2;
- (void)_queue_createSeriesSample;
- (id)workoutLocationManager;
- (void)_queue_pauseLocationUpdates;
- (void)_queue_resumeWorkout;
- (void)_queue_savedLocationData;

@end
