/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

#import <HealthKit/Swift-Protocol.h>

@class HKQuantity, NSArray, NSDate, NSDateComponents;

@interface HKActivityCache : HKSample <Swift>

{
    long long _cacheIndex;
    NSDateComponents *_dateComponents;
    long long _stepCount;
    long long _pushCount;
    long long _wheelchairUse;
    double _deepBreathingDuration;
    HKQuantity *_energyBurned;
    double _briskMinutes;
    double _activeHours;
    HKQuantity *_energyBurnedGoal;
    NSDate *_energyBurnedGoalDate;
    double _briskMinutesGoal;
    NSDate *_briskMinutesGoalDate;
    double _activeHoursGoal;
    NSDate *_activeHoursGoalDate;
    HKQuantity *_walkingAndRunningDistance;
    long long _flightsClimbed;
    NSArray *_dailyEnergyBurnedStatistics;
    NSArray *_dailyBriskMinutesStatistics;
    unsigned long long _knownFields;
    long long _sequence;
    double _moveMinutesGoal;
}

@property (setter=_setCacheIndex:) long long cacheIndex;
@property (setter=_setSequence:) long long sequence;
@property (retain, setter=_setEnergyBurned:) HKQuantity *energyBurned;
@property (setter=_setBriskMinutes:) double briskMinutes;
@property (setter=_setActiveHours:) double activeHours;
@property (retain, setter=_setEnergyBurnedGoal:) HKQuantity *energyBurnedGoal;
@property (setter=_setMoveMinutesGoal:) double moveMinutesGoal;
@property (setter=_setBriskMinutesGoal:) double briskMinutesGoal;
@property (setter=_setActiveHoursGoal:) double activeHoursGoal;
@property (setter=_setStepCount:) long long stepCount;
@property (setter=_setDeepBreathingDuration:) double deepBreathingDuration;
@property (retain, setter=_setWalkingAndRunningDistance:) HKQuantity *walkingAndRunningDistance;
@property (setter=_setPushCount:) long long pushCount;
@property (setter=_setWheelchairUse:) long long wheelchairUse;
@property (setter=_setFlightsClimbed:) long long flightsClimbed;
@property (copy, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics;
@property (copy, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics;
@property (readonly) NSDateComponents *dateComponents;
@property (readonly) _Bool hasDateComponents;
@property (readonly) _Bool hasEnergyBurned;
@property (readonly) _Bool hasBriskMinutes;
@property (readonly) _Bool hasActiveHours;
@property (readonly) NSDate *energyBurnedGoalDate;
@property (readonly) _Bool hasEnergyBurnedGoal;
@property (readonly) _Bool hasBriskMinutesGoal;
@property (readonly) NSDate *briskMinutesGoalDate;
@property (readonly) _Bool hasBriskMinutesGoalDate;
@property (readonly) _Bool hasActiveHoursGoal;
@property (readonly) NSDate *activeHoursGoalDate;
@property (readonly) _Bool hasActiveHoursGoalDate;
@property (readonly) _Bool hasStepCount;
@property (readonly) _Bool hasWalkingAndRunningDistance;
@property (readonly) _Bool hasPushCount;
@property (readonly) _Bool hasWheelchairUse;
@property (readonly) _Bool hasDeepBreathingDuration;
@property (readonly) _Bool hasFlightsClimbed;
@property (readonly) _Bool hasDailyEnergyBurnedStatistics;
@property (readonly) _Bool hasDailyBriskMinutesStatistics;
@property (readonly) unsigned long long knownFields;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 metadata:(id)arg5;
+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 energyBurned:(id)arg5 energyBurnedGoal:(id)arg6 walkingAndRunningDistance:(id)arg7 metadata:(id)arg8;
+ (id)_activityCacheWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 dateComponents:(id)arg4 sequence:(long long)arg5;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)reset;
- (id)_valueDescription;
- (double)energyBurnedGoalPercentage;
- (double)briskMinutesGoalPercentage;
- (double)activeHoursGoalPercentage;
- (double)_energyBurnedInKilocalories;
- (double)_energyBurnedGoalInKilocalories;
- (double)_walkingAndRunningDistanceInMeters;
- (void)_setEnergyBurnedGoal:(id)arg1 date:(id)arg2;
- (void)_setBriskMinutesGoal:(double)arg1 date:(id)arg2;
- (void)_setActiveHoursGoal:(double)arg1 date:(id)arg2;
- (void)_setActiveHoursGoalDateOnly:(id)arg1;
- (void)_setBriskMinutesGoalDateOnly:(id)arg1;
- (_Bool)_isEqualToActivityCache:(id)arg1;
- (void)_setEnergyBurnedGoalOnly:(id)arg1;
- (void)_setEnergyBurnedGoalDateOnly:(id)arg1;
- (void)_setBriskMinutesGoalOnly:(double)arg1;
- (void)_setActiveHoursGoalOnly:(double)arg1;

@end
