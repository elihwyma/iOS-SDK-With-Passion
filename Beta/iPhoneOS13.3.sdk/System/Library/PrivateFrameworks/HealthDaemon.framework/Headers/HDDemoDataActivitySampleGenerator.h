/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class HDDataOriginProvenance, HDDemoDataGeneratorWorkoutConfiguration, HDProfile, HKActivityCache, _HDDemoDataActivityWorkoutState;

@interface HDDemoDataActivitySampleGenerator : HDDemoDataBaseSampleGenerator

{
    HDProfile *_profile;
    HDDataOriginProvenance *_provenance;
    double _nextActiveCaloriesSampleTime;
    double _nextAppleStandHourSampleTime;
    double _nextRestingCaloriesSampleTime;
    double _nextFallSampleTime;
    double _nextFlightsClimbedSampleTime;
    double _nextStepsSampleTime;
    double _nextExerciseMinuteTime;
    double _nextHeartRateRecoveryStartTime;
    double _nextHeartRateRecoveryStopTime;
    double _nextUVIndexSampleTime;
    double _lastUVIndexPeakTime;
    double _lastUVExposure;
    double _lastUVIndexPeak;
    HKActivityCache *_lastActivityCache;
    HDDemoDataGeneratorWorkoutConfiguration *_currentWorkoutConfiguration;
    _HDDemoDataActivityWorkoutState *_workoutState;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDataOriginProvenance *provenance;
@property (nonatomic) double nextActiveCaloriesSampleTime;
@property (nonatomic) double nextAppleStandHourSampleTime;
@property (nonatomic) double nextRestingCaloriesSampleTime;
@property (nonatomic) double nextFallSampleTime;
@property (nonatomic) double nextFlightsClimbedSampleTime;
@property (nonatomic) double nextStepsSampleTime;
@property (nonatomic) double nextExerciseMinuteTime;
@property (nonatomic) double nextHeartRateRecoveryStartTime;
@property (nonatomic) double nextHeartRateRecoveryStopTime;
@property (nonatomic) double nextUVIndexSampleTime;
@property (nonatomic) double lastUVIndexPeakTime;
@property (nonatomic) double lastUVExposure;
@property (nonatomic) double lastUVIndexPeak;
@property (retain, nonatomic) HKActivityCache *lastActivityCache;
@property (retain, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *currentWorkoutConfiguration;
@property (retain, nonatomic) _HDDemoDataActivityWorkoutState *workoutState;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (double)_computeExerciseTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;
- (_Bool)_isDemoPersonWalking:(id)arg1 atTime:(double)arg2 samplePeriod:(double)arg3;
- (id)_computeFlightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)activeCaloriesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)exerciseMinutesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)appleStandHourForDemoPerson:(id)arg1 atTime:(double)arg2 activeCalories:(id)arg3 exerciseMinutes:(id)arg4;
- (id)restingCaloriesForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)fallsForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)flightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)stepsForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_computeWalkingRunningDistanceWithStepCount:(id)arg1 demoPerson:(id)arg2;
- (id)_computeCyclingDistanceWithStepCount:(id)arg1 demoPerson:(id)arg2;
- (id)uvIndexForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)_sumQuantity:(id)arg1 withQuantity:(id)arg2;
- (void)_updateWorkoutStateWithActiveEnergyBurned:(id)arg1 distanceWalking:(id)arg2 distanceCycling:(id)arg3 currentTime:(double)arg4 date:(id)arg5 objectCollection:(id)arg6 demoPerson:(id)arg7;
- (void)_generateHIITWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateSwimmingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateEllipticalWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateRunningWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2 workoutState:(id)arg3;
- (void)_generateWalkingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateYogaWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateHikingWorkoutDataWithObjectCollection:(id)arg1 demoPerson:(id)arg2;
- (void)_generateWorkoutDataWithHeartRates:(id)arg1 recoveryHeartRates:(id)arg2 objectCollection:(id)arg3 demoPerson:(id)arg4 workoutState:(id)arg5;
- (void)_generateSwimmingSegmentDataWithStartDate:(id)arg1 segmentTime:(double)arg2 segmentDistance:(double)arg3 numLaps:(long long)arg4 strokeStyle:(long long)arg5 objectCollection:(id)arg6 demoPerson:(id)arg7;
- (id)_computeSwimmingStrokesFromDistance:(id)arg1 demoPerson:(id)arg2;
- (double)_computeUVIndexForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)setProfile:(id)arg1 provenance:(id)arg2;
- (long long)_pickActivityForTime:(double)arg1;
- (double)_computeExerciseCaloriesForDemoPerson:(id)arg1 duration:(double)arg2 activity:(long long)arg3 weight:(double)arg4;
- (double)_computePercentCooledForDemoPerson:(id)arg1 atTime:(double)arg2;
- (_Bool)_isDemoPersonCoolingDown:(id)arg1 atTime:(double)arg2;
- (_Bool)_isDemoPersonSedentary:(id)arg1 atTime:(double)arg2;
- (_Bool)_isDemoPersonInWorkoutRecovery:(id)arg1 atTime:(double)arg2;

@end
