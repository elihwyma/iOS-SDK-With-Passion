/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject

{
    HKHealthStore *_healthStore;
}

- (id)init;
- (id)initWithHealthStore:(id)arg1;
- (void)saveNewWeeklyGoal:(id)arg1 quantityType:(id)arg2 forDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveNewWeeklyGoals:(id)arg1;

@end
