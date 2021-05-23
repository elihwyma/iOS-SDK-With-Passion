/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class NSArray, NSDictionary;

@interface ACHDataStoreActivityProperties : NSObject

{
    unsigned long long _currentMoveStreak;
    unsigned long long _bestMoveStreak;
    unsigned long long _totalMoveGoalsMade;
    unsigned long long _totalMoveGoalsAttempted;
    double _bestMoveValue;
    double _bestMoveGoalValue;
    unsigned long long _currentExerciseStreak;
    unsigned long long _bestExerciseStreak;
    unsigned long long _totalExerciseGoalsMade;
    unsigned long long _totalExerciseGoalsAttempted;
    double _bestExerciseValue;
    double _bestExerciseGoalValue;
    unsigned long long _currentStandStreak;
    unsigned long long _bestStandStreak;
    unsigned long long _totalStandGoalsMade;
    unsigned long long _totalStandGoalsAttempted;
    unsigned long long _bestStandValue;
    unsigned long long _bestStandGoalValue;
    unsigned long long _lastStepCount;
    unsigned long long _bestStepCount;
    long long _storeValuesValidBeforeSummaryIndex;
    ACHDataStoreActivityProperties *_previousValues;
}

@property (nonatomic) unsigned long long currentMoveStreak;
@property (nonatomic) unsigned long long bestMoveStreak;
@property (nonatomic) unsigned long long totalMoveGoalsMade;
@property (nonatomic) unsigned long long totalMoveGoalsAttempted;
@property (nonatomic) double bestMoveValue;
@property (nonatomic) double bestMoveGoalValue;
@property (nonatomic) unsigned long long currentExerciseStreak;
@property (nonatomic) unsigned long long bestExerciseStreak;
@property (nonatomic) unsigned long long totalExerciseGoalsMade;
@property (nonatomic) unsigned long long totalExerciseGoalsAttempted;
@property (nonatomic) double bestExerciseValue;
@property (nonatomic) double bestExerciseGoalValue;
@property (nonatomic) unsigned long long currentStandStreak;
@property (nonatomic) unsigned long long bestStandStreak;
@property (nonatomic) unsigned long long totalStandGoalsMade;
@property (nonatomic) unsigned long long totalStandGoalsAttempted;
@property (nonatomic) unsigned long long bestStandValue;
@property (nonatomic) unsigned long long bestStandGoalValue;
@property (nonatomic) unsigned long long lastStepCount;
@property (nonatomic) unsigned long long bestStepCount;
@property (nonatomic) long long storeValuesValidBeforeSummaryIndex;
@property (retain, nonatomic) ACHDataStoreActivityProperties *previousValues;
@property (nonatomic, readonly) NSArray *dictionaryKeys;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

@end
