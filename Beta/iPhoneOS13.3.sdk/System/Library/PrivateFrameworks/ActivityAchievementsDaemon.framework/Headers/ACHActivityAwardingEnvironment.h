/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHActivityAwardingDataProvider, ACHActivityAwardingDateCache;

@interface ACHActivityAwardingEnvironment : NSObject

{
    _Bool _valueForKeyLoggingEnabled;
    ACHActivityAwardingDataProvider *_dataProvider;
    ACHActivityAwardingDateCache *_dateCache;
}

@property (retain, nonatomic) ACHActivityAwardingDataProvider *dataProvider;
@property (retain, nonatomic) ACHActivityAwardingDateCache *dateCache;
@property (nonatomic) _Bool valueForKeyLoggingEnabled;

- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithDataProvider:(id)arg1;
- (id)currentMoveStreak;
- (id)bestMoveStreak;
- (id)bestMoveValue;
- (id)currentExerciseStreak;
- (id)bestExerciseStreak;
- (id)bestExerciseValue;
- (id)currentStandStreak;
- (id)bestStandStreak;
- (id)bestStandValue;
- (void)setCurrentDateComponents:(id)arg1;
- (id)dayOfWeekForToday;
- (id)dayOfWeekForLastDayOfFitnessWeek;
- (id)numberOfDaysInThisMonth;
- (id)dayOfMonthForToday;
- (id)todayMoveValue;
- (id)todayMoveGoal;
- (id)yesterdayMoveValue;
- (id)todayExerciseValue;
- (id)todayExerciseGoal;
- (id)yesterdayExerciseValue;
- (id)todayStandValue;
- (id)todayStandGoal;
- (id)yesterdayStandValue;
- (id)previousBestMoveGoal;
- (id)bestMoveGoal;
- (id)totalDaysOfMoveHistory;
- (id)totalMoveGoalsMet;
- (id)previousBestMoveStreak;
- (id)currentMovePercentage;
- (id)previousMovePercentage;
- (id)previousBestExerciseGoal;
- (id)bestExerciseGoal;
- (id)totalDaysOfExerciseHistory;
- (id)totalExerciseGoalsMet;
- (id)previousBestExerciseStreak;
- (id)currentExercisePercentage;
- (id)previousExercisePercentage;
- (id)previousBestStandGoal;
- (id)bestStandGoal;
- (id)totalDaysOfStandHistory;
- (id)totalStandGoalsMet;
- (id)previousBestStandStreak;
- (id)currentStandPercentage;
- (id)previousStandPercentage;
- (id)currentStreakForAllActivity;
- (id)requiredDaysOfActivityHistoryForRecords;
- (id)requiredDaysOfActivityHistoryForStreaks;

@end
