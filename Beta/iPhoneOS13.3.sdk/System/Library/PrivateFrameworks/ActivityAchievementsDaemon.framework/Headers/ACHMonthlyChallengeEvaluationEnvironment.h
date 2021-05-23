/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHDateComponentInterval, ACHMonthlyChallengeDataSource, NSCalendar;

@interface ACHMonthlyChallengeEvaluationEnvironment : NSObject

{
    ACHMonthlyChallengeDataSource *_dataSource;
    ACHDateComponentInterval *_dateComponentInterval;
    NSCalendar *_calendar;
}

@property (weak, nonatomic) ACHMonthlyChallengeDataSource *dataSource;
@property (retain, nonatomic) ACHDateComponentInterval *dateComponentInterval;
@property (retain, nonatomic) NSCalendar *calendar;
@property (nonatomic, readonly) double numberOfDaysClosingAllThreeRingsInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysClosingMoveRingInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysClosingExerciseRingInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysClosingStandRingInCurrentMonth;
@property (nonatomic, readonly) double totalEnergyBurnInCurrentMonth;
@property (nonatomic, readonly) double totalExerciseMinutesInCurrentMonth;
@property (nonatomic, readonly) double numberOfWorkoutsCompletedInCurrentMonth;
@property (nonatomic, readonly) double totalWalkingRunningDistanceInCurrentMonth;
@property (nonatomic, readonly) double numberOfDaysDoublingMoveGoalInCurrentMonth;

- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithMonthlyChallengeDataSource:(id)arg1 dateComponentInterval:(id)arg2 calendar:(id)arg3;
- (double)_valueForMonthlyChallengeType:(unsigned long long)arg1;

@end
