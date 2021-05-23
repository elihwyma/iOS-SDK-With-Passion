/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSArray, NSDate;

@interface FIUIWorkoutStatistics : NSObject

{
    NSArray *_workouts;
    long long _numberOfWalkRunWorkouts;
    long long _numberOfCyclingWorkouts;
    _Bool _isAllOutdoorCycling;
    _Bool _isAllRunning;
    double _totalWorkoutDuration;
    double _averageWorkoutDuration;
    HKQuantity *_totalActiveEnergyBurn;
    HKQuantity *_averageActiveEnergyBurn;
    HKQuantity *_totalWalkRunDistance;
    HKQuantity *_averageWalkRunDistance;
    double _totalWalkRunDuration;
    HKQuantity *_totalCyclingDistance;
    HKQuantity *_averageCyclingDistance;
    double _totalCyclingDuration;
    NSDate *_startOfMonth;
}

@property (nonatomic, readonly) double totalWorkoutDuration;
@property (nonatomic, readonly) double averageWorkoutDuration;
@property (nonatomic, readonly) HKQuantity *totalActiveEnergyBurn;
@property (nonatomic, readonly) HKQuantity *averageActiveEnergyBurn;
@property (nonatomic, readonly) HKQuantity *totalWalkRunDistance;
@property (nonatomic, readonly) HKQuantity *averageWalkRunDistance;
@property (nonatomic, readonly) double totalWalkRunDuration;
@property (nonatomic, readonly) HKQuantity *totalCyclingDistance;
@property (nonatomic, readonly) HKQuantity *averageCyclingDistance;
@property (nonatomic, readonly) double totalCyclingDuration;
@property (nonatomic, readonly) unsigned long long workoutCount;
@property (nonatomic, readonly) NSDate *startOfMonth;

+ (id)_monthFormatter;

- (id)init;
- (void)_calculateStats;
- (void)_calculateAverages;
- (id)initWithWorkouts:(id)arg1;
- (id)formattedTotalWorkoutDurationWithFormattingManager:(id)arg1;
- (id)formattedAverageWorkoutDurationWithFormattingManager:(id)arg1;
- (id)formattedTotalActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)formattedAverageActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)formattedTotalWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)formattedAverageWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)formattedTotalCyclingDistanceWithFormattingManager:(id)arg1;
- (id)formattedAverageCyclingDistanceWithFormattingManager:(id)arg1;
- (id)_formattedDuration:(double)arg1 formattingManager:(id)arg2;
- (id)_formattedEnergyBurn:(id)arg1 formattingManager:(id)arg2;
- (id)_formattedWalkRunDistance:(id)arg1 formattingManager:(id)arg2;
- (id)_formattedCyclingDistance:(id)arg1 formattingManager:(id)arg2;
- (id)simpleWorkoutCount;
- (id)formattedMonth;
- (id)formattedWorkoutDurationWithFormattingManager:(id)arg1;
- (id)formattedActiveEnergyBurnWithFormattingManager:(id)arg1;
- (id)formattedWalkRunDistanceWithFormattingManager:(id)arg1;
- (id)formattedCyclingDistanceWithFormattingManager:(id)arg1;
- (id)formattedPaceWithFormattingManager:(id)arg1;
- (id)formattedSpeedWithFormattingManager:(id)arg1;
- (id)formattedWorkoutCount;

@end
