/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHDataStoreActivityProperties, HKActivitySummary, HKQuantity;

@interface ACHActivityAwardingDataProvider : NSObject

{
    HKActivitySummary *_todayActivitySummary;
    HKActivitySummary *_yesterdayActivitySummary;
    ACHDataStoreActivityProperties *_properties;
    long long _lastCheckedIndexForMove;
    HKQuantity *_lastProcessedTodayMoveValue;
    HKQuantity *_previousProcessedTodayMoveValue;
    HKQuantity *_lastTodayMoveGoal;
    long long _lastCheckedIndexForExercise;
    HKQuantity *_lastProcessedTodayExerciseValue;
    HKQuantity *_previousProcessedTodayExerciseValue;
    HKQuantity *_lastTodayExerciseGoal;
    long long _lastCheckedIndexForStand;
    HKQuantity *_lastProcessedTodayStandValue;
    HKQuantity *_previousProcessedTodayStandValue;
    HKQuantity *_lastTodayStandGoal;
    long long _lastCheckedIndexForAllGoals;
    long long _lastCheckedIndexForDistance;
    HKQuantity *_todayDistanceValue;
    HKQuantity *_lastTodayDistanceValue;
}

@property (nonatomic, readonly) ACHDataStoreActivityProperties *properties;
@property (nonatomic) long long lastCheckedIndexForMove;
@property (nonatomic, readonly) HKQuantity *todayMoveValue;
@property (nonatomic, readonly) HKQuantity *yesterdayMoveValue;
@property (retain, nonatomic) HKQuantity *lastProcessedTodayMoveValue;
@property (retain, nonatomic) HKQuantity *previousProcessedTodayMoveValue;
@property (nonatomic, readonly) HKQuantity *todayMoveGoal;
@property (nonatomic, readonly) HKQuantity *yesterdayMoveGoal;
@property (retain, nonatomic) HKQuantity *lastTodayMoveGoal;
@property (nonatomic) long long lastCheckedIndexForExercise;
@property (nonatomic, readonly) HKQuantity *todayExerciseValue;
@property (nonatomic, readonly) HKQuantity *yesterdayExerciseValue;
@property (retain, nonatomic) HKQuantity *lastProcessedTodayExerciseValue;
@property (retain, nonatomic) HKQuantity *previousProcessedTodayExerciseValue;
@property (nonatomic, readonly) HKQuantity *todayExerciseGoal;
@property (nonatomic, readonly) HKQuantity *yesterdayExerciseGoal;
@property (retain, nonatomic) HKQuantity *lastTodayExerciseGoal;
@property (nonatomic) long long lastCheckedIndexForStand;
@property (nonatomic, readonly) HKQuantity *todayStandValue;
@property (nonatomic, readonly) HKQuantity *yesterdayStandValue;
@property (retain, nonatomic) HKQuantity *lastProcessedTodayStandValue;
@property (retain, nonatomic) HKQuantity *previousProcessedTodayStandValue;
@property (nonatomic, readonly) HKQuantity *todayStandGoal;
@property (nonatomic, readonly) HKQuantity *yesterdayStandGoal;
@property (retain, nonatomic) HKQuantity *lastTodayStandGoal;
@property (nonatomic) long long lastCheckedIndexForAllGoals;
@property (nonatomic) long long lastCheckedIndexForDistance;
@property (nonatomic, readonly) HKQuantity *todayDistanceValue;
@property (retain, nonatomic) HKQuantity *lastTodayDistanceValue;
@property (retain, nonatomic) HKActivitySummary *todayActivitySummary;
@property (retain, nonatomic) HKActivitySummary *yesterdayActivitySummary;
@property (nonatomic, readonly) long long todayIndex;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_c642f51a)currentStateForGoalType:(long long)arg1;
- (void)setNewState:(CDStruct_c642f51a)arg1 forGoalType:(long long)arg2;
- (_Bool)allGoalsMetToday;
- (CDStruct_c642f51a)currentMoveState;
- (CDStruct_c642f51a)currentExerciseState;
- (CDStruct_c642f51a)currentStandState;
- (void)setNewMoveState:(CDStruct_c642f51a)arg1;
- (void)setNewExerciseState:(CDStruct_c642f51a)arg1;
- (void)setNewStandState:(CDStruct_c642f51a)arg1;
- (CDStruct_c642f51a)_baseMoveState;
- (void)_setBaseMoveState:(CDStruct_c642f51a)arg1;
- (void)updatePreviousPropertiesWithCurrentProperties;
- (void)clearAllProperties;
- (void)setLastCheckedIndex:(long long)arg1;

@end
