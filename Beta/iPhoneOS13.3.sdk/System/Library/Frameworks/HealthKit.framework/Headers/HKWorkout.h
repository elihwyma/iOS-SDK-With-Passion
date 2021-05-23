/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

@class HKQuantity, NSArray;

@interface HKWorkout : HKSample

{
    unsigned long long _workoutActivityType;
    double _duration;
    NSArray *_workoutEvents;
    HKQuantity *_totalEnergyBurned;
    HKQuantity *_totalBasalEnergyBurned;
    HKQuantity *_totalDistance;
    HKQuantity *_totalElevation;
    HKQuantity *_totalSwimmingStrokeCount;
    HKQuantity *_totalFlightsClimbed;
    unsigned long long _goalType;
    HKQuantity *_goal;
    _Bool _isWatchWorkout;
}

@property (nonatomic, getter=_goalType, setter=_setGoalType:) unsigned long long goalType;
@property (retain, nonatomic, getter=_goal, setter=_setGoal:) HKQuantity *goal;
@property (retain, nonatomic, getter=_totalBasalEnergyBurned, setter=_setTotalBasalEnergyBurned:) HKQuantity *totalBasalEnergyBurned;
@property (nonatomic, getter=_isWatchWorkout, setter=_setIsWatchWorkout:) _Bool isWatchWorkout;
@property (readonly) unsigned long long workoutActivityType;
@property (copy, readonly) NSArray *workoutEvents;
@property (readonly) double duration;
@property (readonly) HKQuantity *totalEnergyBurned;
@property (readonly) HKQuantity *totalDistance;
@property (readonly) HKQuantity *totalSwimmingStrokeCount;
@property (readonly) HKQuantity *totalFlightsClimbed;

+ (_Bool)supportsSecureCoding;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 statistics:(id)arg6 goalType:(unsigned long long)arg7 goal:(id)arg8 device:(id)arg9 metadata:(id)arg10;
+ (_Bool)_isConcreteObjectClass;
+ (id)_stringFromWorkoutActivityType:(unsigned long long)arg1;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 device:(id)arg11 metadata:(id)arg12;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 device:(id)arg7 metadata:(id)arg8;
+ (id)_workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 totalSwimmingStrokeCount:(id)arg9 totalFlightsClimbed:(id)arg10 goalType:(unsigned long long)arg11 goal:(id)arg12 device:(id)arg13 metadata:(id)arg14 config:(CDUnknownBlockType)arg15;
+ (id)_activityTypeMappings;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 metadata:(id)arg7;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalSwimmingStrokeCount:(id)arg7 device:(id)arg8 metadata:(id)arg9;
+ (id)workoutWithActivityType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 workoutEvents:(id)arg4 totalEnergyBurned:(id)arg5 totalDistance:(id)arg6 totalFlightsClimbed:(id)arg7 device:(id)arg8 metadata:(id)arg9;
+ (unsigned long long)_workoutActivityTypeFromString:(id)arg1;
+ (id)_allWorkoutTypeNames;
+ (id)_allWorkoutActivityTypes;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setDuration:(double)arg1;
- (id)_deepCopy;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (void)_enumerateTimePeriodsWithBlock:(CDUnknownBlockType)arg1;
- (long long)hk_integerValue;
- (void)_enumerateActiveTimePeriods:(CDUnknownBlockType)arg1;
- (id)_validateWorkoutEvents:(id)arg1;
- (void)_setWorkoutActivityType:(unsigned long long)arg1;
- (void)_setWorkoutEvents:(id)arg1;
- (void)_setTotalEnergyBurned:(id)arg1;
- (void)_setTotalDistance:(id)arg1;
- (void)_setTotalSwimmingStrokeCount:(id)arg1;
- (void)_setTotalFlightsClimbed:(id)arg1;
- (double)_totalEnergyBurnedInCanonicalUnit;
- (double)_totalBasalEnergyBurnedInCanonicalUnit;
- (double)_totalDistanceInCanonicalUnit;
- (double)_totalSwimmingStrokeCountInCanonicalUnit;
- (double)_totalFlightsClimbedInCanonicalUnit;
- (double)_goalInCanonicalUnit;

@end
