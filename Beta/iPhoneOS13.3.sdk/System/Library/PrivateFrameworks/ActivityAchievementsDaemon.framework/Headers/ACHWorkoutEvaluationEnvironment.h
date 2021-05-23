/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHWorkoutEvaluationWorkoutProperties;

@interface ACHWorkoutEvaluationEnvironment : NSObject

{
    ACHWorkoutEvaluationWorkoutProperties *_workout;
    unsigned long long _numberOfFirstPartyWorkoutsOver5MinutesWithType;
    unsigned long long _numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
    double _bestKilocaloriesForType;
}

@property (nonatomic, readonly) ACHWorkoutEvaluationWorkoutProperties *workout;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType;
@property (nonatomic, readonly) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
@property (nonatomic, readonly) double bestKilocaloriesForType;

- (id)valueForUndefinedKey:(id)arg1;
- (id)initWithWorkout:(id)arg1 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)arg2 numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek:(unsigned long long)arg3 bestKilocaloriesForType:(double)arg4;

@end
