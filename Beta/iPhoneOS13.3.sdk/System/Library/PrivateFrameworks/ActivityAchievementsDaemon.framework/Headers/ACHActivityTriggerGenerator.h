/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@interface ACHActivityTriggerGenerator : NSObject

+ (unsigned long long)allPossibleTriggers;

- (unsigned long long)_triggersForNewActivityDataWithGoalType:(long long)arg1 dataProvider:(id)arg2 goalMetHandler:(CDUnknownBlockType)arg3;
- (CDStruct_c642f51a)_incrementWithInitialState:(CDStruct_c642f51a)arg1 forGoalType:(long long)arg2 dataProvider:(id)arg3 goalMetHandler:(CDUnknownBlockType)arg4;
- (unsigned long long)triggersForNewMoveDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewExerciseDataWithDataProvider:(id)arg1;
- (unsigned long long)triggersForNewStandDataWithDataProvider:(id)arg1;

@end
