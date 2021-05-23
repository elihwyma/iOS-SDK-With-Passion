/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKQuantity, NSArray, NSDate, NSDateComponents;

@interface HKActivitySummary : NSObject <Swift>

{
    long long _activitySummaryIndex;
    NSDateComponents *_dateComponents;
    HKQuantity *_activeEnergyBurned;
    HKQuantity *_appleExerciseTime;
    HKQuantity *_appleStandHours;
    HKQuantity *_distanceWalkingRunning;
    HKQuantity *_stepCount;
    HKQuantity *_activeEnergyBurnedGoal;
    HKQuantity *_appleExerciseTimeGoal;
    HKQuantity *_appleStandHoursGoal;
    HKQuantity *_deepBreathingDuration;
    HKQuantity *_pushCount;
    HKQuantity *_flightsClimbed;
    long long _wheelchairUse;
    NSArray *_dailyEnergyBurnedStatistics;
    NSArray *_dailyBriskMinutesStatistics;
    _Bool _dataLoading;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_creationDate;
    NSDate *_energyBurnedGoalDate;
    NSDate *_briskMinutesGoalDate;
    NSDate *_activeHoursGoalDate;
}

@property (copy, nonatomic, getter=_gregorianDateComponents, setter=_setGregorianDateComponents:) NSDateComponents *gregorianDateComponents;
@property (nonatomic, getter=_activitySummaryIndex, setter=_setActivitySummaryIndex:) long long activitySummaryIndex;
@property (retain, nonatomic, getter=_startDate, setter=_setStartDate:) NSDate *startDate;
@property (retain, nonatomic, getter=_endDate, setter=_setEndDate:) NSDate *endDate;
@property (retain, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
@property (nonatomic, readonly, getter=_activeEnergyCompletionPercentage) double activeEnergyCompletionPercentage;
@property (nonatomic, readonly, getter=_exerciseTimeCompletionPercentage) double exerciseTimeCompletionPercentage;
@property (nonatomic, readonly, getter=_standHoursCompletionPercentage) double standHoursCompletionPercentage;
@property (retain, nonatomic, getter=_deepBreathingDuration, setter=_setDeepBreathingDuration:) HKQuantity *deepBreathingDuration;
@property (retain, nonatomic, getter=_pushCount, setter=_setPushCount:) HKQuantity *pushCount;
@property (nonatomic, getter=_wheelchairUse, setter=_setWheelchairUse:) long long wheelchairUse;
@property (retain, nonatomic, getter=_flightsClimbed, setter=_setFlightsClimbed:) HKQuantity *flightsClimbed;
@property (retain, nonatomic, getter=_energyBurnedGoalDate, setter=_setEnergyBurnedGoalDate:) NSDate *energyBurnedGoalDate;
@property (retain, nonatomic, getter=_briskMinutesGoalDate, setter=_setBriskMinutesGoalDate:) NSDate *briskMinutesGoalDate;
@property (retain, nonatomic, getter=_activeHoursGoalDate, setter=_setActiveHoursGoalDate:) NSDate *activeHoursGoalDate;
@property (retain, nonatomic, getter=_dailyEnergyBurnedStatistics, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics;
@property (retain, nonatomic, getter=_dailyBriskMinutesStatistics, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics;
@property (retain, nonatomic) HKQuantity *distanceWalkingRunning;
@property (retain, nonatomic) HKQuantity *stepCount;
@property (nonatomic, getter=_isDataLoading, setter=_setDataLoading:) _Bool dataLoading;
@property (nonatomic, readonly, getter=_hasMoveGoal) _Bool hasMoveGoal;
@property (nonatomic, readonly, getter=_hasEnergyBurnedGoal) _Bool hasEnergyBurnedGoal;
@property (retain, nonatomic) HKQuantity *activeEnergyBurned;
@property (retain, nonatomic) HKQuantity *appleExerciseTime;
@property (retain, nonatomic) HKQuantity *appleStandHours;
@property (retain, nonatomic) HKQuantity *activeEnergyBurnedGoal;
@property (retain, nonatomic) HKQuantity *appleExerciseTimeGoal;
@property (retain, nonatomic) HKQuantity *appleStandHoursGoal;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_validateActivitySummaryDateComponents:(id)arg1 errorMessage:(id *)arg2;
+ (_Bool)_validateActivitySummaryDateComponentsRange:(id)arg1 endDateComponents:(id)arg2 errorMessage:(id *)arg3;
+ (id)_mostRecentlyCreatedCacheAmongCaches:(id)arg1;
+ (id)_mostSignificantCacheAmongCaches:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_decodeQuantityFromCoder:(id)arg1 forKey:(id)arg2 unit:(id)arg3;
- (void)_encodeQuantity:(id)arg1 withCoder:(id)arg2 key:(id)arg3 unit:(id)arg4;
- (id)dateComponentsForCalendar:(id)arg1;
- (void)_validateQuantityAssignment:(id)arg1 expectedUnit:(id)arg2 propertyName:(id)arg3;
- (double)_percentageCompleteWithQuantity:(id)arg1 goalQuantity:(id)arg2 unit:(id)arg3;
- (_Bool)_allFieldsAreEqual:(id)arg1;
- (_Bool)_hasExerciseGoal;
- (_Bool)_hasStandHoursGoal;
- (_Bool)_useHourlyGoalComparison;
- (id)_initWithActivityCache:(id)arg1 shouldIncludePrivateProperties:(_Bool)arg2;

@end
