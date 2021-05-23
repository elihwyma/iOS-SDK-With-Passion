/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKHeartRateSummary, HKHeartRateSummaryStatistics, HKQuantity, NSDateComponents, NSDateInterval, NSMutableArray, NSMutableDictionary;

@interface HDActivityCacheHeartRateStatisticsBuilder : NSObject

{
    NSDateInterval *_dateInterval;
    long long _activityCacheIndex;
    vector_8ece868d _heartRateSamples;
    vector_89c96404 _workouts;
    HKQuantity *_restingHeartRate;
    HKQuantity *_walkingAverageHeartRate;
    HKHeartRateSummaryStatistics *_allDayStatistics;
    NSMutableArray *_workoutStatistics;
    NSMutableArray *_workoutRecoveryStatistics;
    NSMutableArray *_breatheStatistics;
    NSMutableDictionary *_averageCalculatorsByWorkoutUUID;
    NSMutableDictionary *_recoveryReadingsByWorkoutUUID;
    NSMutableDictionary *_breatheSessionReadingsBySessionUUID;
    NSMutableDictionary *_breatheSessionDateIntervalBySessionUUID;
    NSDateComponents *_dateOfBirthComponents;
}

@property (nonatomic, readonly) HKHeartRateSummary *heartRateSummary;

- (id).cxx_construct;
- (void)addWorkouts:(const vector_89c96404 *)arg1;
- (id)heartRateDateInterval;
- (id)restingHeartRate;
- (id)walkingAverageHeartRate;
- (id)initWithDateInterval:(id)arg1 activityCacheIndex:(long long)arg2;
- (void)setDateOfBirthComponents:(id)arg1;
- (void)addBreatheSessions:(const vector_b2eb559c *)arg1;
- (void)addHeartRateSamples:(const vector_8ece868d *)arg1;
- (void)_addHeartRateSamplesToAllStatistics:(const vector_8ece868d *)arg1;
- (void)_addHeartRateSamples:(const vector_8ece868d *)arg1 toStatistics:(id)arg2;
- (void)_addBeatsPerSecond:(double)arg1 time:(double)arg2 toSessionStatistics:(id)arg3;
- (void)_updateMetricsForSessionStatistics:(id)arg1;
- (id)_averageCalculatorForWorkoutStatistics:(id)arg1;
- (id)_recoveryReadingsForWorkoutStatistics:(id)arg1;
- (id)_sessionReadingsForBreatheStatistics:(id)arg1;
- (void)_updateMetricsForWorkoutStatistics:(id)arg1;
- (void)_updateMetricsForWorkoutRecoveryStatistics:(id)arg1;
- (void)_updateMetricsForBreatheStatistics:(id)arg1;
- (void)_addHeartRateStatisticsForNewWorkouts:(const vector_89c96404 *)arg1;
- (id)_filteredRecoveryReadings:(id)arg1;

@end
