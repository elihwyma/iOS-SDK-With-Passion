/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CLLocationSmoother, HDProfile, HDSmoothingTask, NSMutableArray, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDWorkoutLocationSmoother : NSObject

{
    CLLocationSmoother *_smoother;
    NSObject<OS_dispatch_queue> *_queue;
    HDProfile *_profile;
    NSMutableArray *_pendingSmoothingTasks;
    HDSmoothingTask *_currentSmoothingTask;
    NSObject<OS_dispatch_source> *_timeoutSource;
    double _smoothingTaskTimeout;
    _Bool _needToCheckForLocationSeriesOnUnlock;
    _Bool _isFirstLaunchAndNotYetSmoothed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2;
- (void)_setupLocationObserversIfNeeded;
- (void)_associationsSyncedForWorkout:(id)arg1;
- (void)_queue_smoothAllUnsmoothedLocationSeries;
- (void)_queue_smoothNextSample;
- (void)_queue_cancelTimeout;
- (void)_queue_smoothingDidFailForTask:(id)arg1 error:(id)arg2 shouldRetry:(_Bool)arg3;
- (void)_queue_saveLocations:(id)arg1 forTask:(id)arg2 smoothingError:(id)arg3;
- (void)_queue_smoothRouteSampleForTask:(id)arg1;
- (id)_locationsForSampleUUID:(id)arg1 error:(id *)arg2;
- (void)_finishSmoothingSampleWithTask:(id)arg1;
- (_Bool)_deleteSample:(id)arg1 error:(id *)arg2;
- (void)_queue_scheduleSmoothingTimeoutTimerForTask:(id)arg1;
- (void)_queue_startSmoothingTask:(id)arg1;
- (void)_queue_locationManagerDidSmoothLocations:(id)arg1 forTask:(id)arg2 error:(id)arg3;
- (id)_queue_createNewSeriesFromTask:(id)arg1 locations:(id)arg2 error:(id *)arg3;
- (_Bool)_queue_insertInitialMetadataForRoute:(id)arg1 syncIdentifier:(id)arg2 error:(id *)arg3;
- (id)_createWorkoutRouteWithMetadata:(id)arg1 sourceEntity:(id)arg2 locations:(id)arg3 error:(id *)arg4;
- (_Bool)_containsWorkoutObject:(id)arg1 error:(id *)arg2;
- (void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
