/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class HKQuery, NSDate, REUpNextTimer;

@interface REActiveWorkoutPredictor : REPredictor

{
    int _workoutStateNotifyToken;
    float _dailyAverageWorkouts;
    unsigned long long _numberOfWorkoutsPerformedToday;
    HKQuery *_workoutObservationQuery;
    REUpNextTimer *_workoutQueryCoalesceTimer;
    _Bool _hasActiveWorkout;
    NSDate *_lastCompletedWorkoutDate;
}

@property _Bool hasActiveWorkout;
@property (retain) NSDate *lastCompletedWorkoutDate;
@property (nonatomic, readonly, getter=isActiveWorkout) _Bool activeWorkout;
@property (nonatomic, readonly) NSDate *lastWorkoutDate;
@property (nonatomic, readonly) _Bool currentlyHasActiveWorkout;
@property (nonatomic, readonly) float dailyAverageWorkouts;
@property (nonatomic, readonly) unsigned long long numberOfWorkoutsPerformedToday;

+ (double)updateInterval;
+ (id)supportedFeatures;

- (void)dealloc;
- (id)_init;
- (void)pause;
- (void)resume;
- (void)update;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (void)_cancelMonitoringWorkoutIfNeeded;
- (void)_updateWorkoutState;
- (void)_scheduleFetchWorkoutTimer;
- (void)_queue_fetchWorkoutHistory;
- (void)_processWorkoutHistoryData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
