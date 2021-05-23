/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@interface _GoalDetailCollator : NSObject

{
    long long _entryCount;
    long long _entriesExceedingGoal;
    double _totalPercentFromGoal;
}

- (id)init;
- (void)processCoordinateUserInfo:(id)arg1;
- (id)activitySummaryDetailStringWithActivitySummary:(id)arg1 unitPreferenceController:(id)arg2 activityValue:(long long)arg3 displayTypeController:(id)arg4;
- (id)detailStringWithTimeScope:(long long)arg1;

@end
