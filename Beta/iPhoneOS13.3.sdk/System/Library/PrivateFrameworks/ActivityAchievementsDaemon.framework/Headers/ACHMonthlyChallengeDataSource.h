/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHActivitySummaryUtility, ACHWorkoutUtility, HDDatabaseTransactionContext, HDProfile;

@interface ACHMonthlyChallengeDataSource : NSObject

{
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    ACHWorkoutUtility *_workoutUtility;
    ACHActivitySummaryUtility *_activitySummaryUtility;
}

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHWorkoutUtility *workoutUtility;
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (double)valueForMonthlyChallengeType:(unsigned long long)arg1 forDateComponentInterval:(id)arg2 inCalendar:(id)arg3;
- (long long)numberOfAllRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfMoveRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfExerciseRingsClosedDuringDateComponentInterval:(id)arg1;
- (long long)numberOfStandRingsClosedDuringDateComponentInterval:(id)arg1;
- (double)walkingRunningDistanceDuringDateComponentInterval:(id)arg1;
- (double)caloriesDuringDateComponentInterval:(id)arg1;
- (double)exerciseMinutesDuringDateComponentInterval:(id)arg1;
- (long long)numberOfWorkoutsCompletedDuringDateInterval:(id)arg1;
- (long long)numberOfDaysDoublingMoveGoalDuringDateComponentInterval:(id)arg1;
- (id)initWithProfile:(id)arg1 activitySummaryUtility:(id)arg2 workoutUtility:(id)arg3;

@end
