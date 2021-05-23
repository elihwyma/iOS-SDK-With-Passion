/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@interface ASDemoData : NSObject

+ (id)_activitySnapshotForFriendOneWithFriendUUID:(id)arg1 sourceUUID:(id)arg2;
+ (id)_activitySnapshotForFriendTwoWithFriendUUID:(id)arg1 sourceUUID:(id)arg2;
+ (id)_activitySnapshotForFriendThreeWithFriendUUID:(id)arg1 sourceUUID:(id)arg2;
+ (id)_achievementsForFriendTwoWithFriendUUID:(id)arg1;
+ (id)_workoutsForFriendOneWithFriendUUID:(id)arg1;
+ (id)_workoutsForFriendTwoWithFriendUUID:(id)arg1;
+ (id)_fakeFriendListWithDemoFileName:(id)arg1;
+ (id)_activitySnapshotForFriendWithIndex:(long long)arg1 friendUUID:(id)arg2 sourceUUID:(id)arg3;
+ (id)_achievementsForFriendWithIndex:(long long)arg1 friendUUID:(id)arg2;
+ (id)_workoutsForFriendWithIndex:(long long)arg1 friendUUID:(id)arg2;
+ (id)_appleWatchSourceRevision;
+ (struct _HKFitnessFriendWorkout *)_fakeWorkoutDuringDayStartingAtDate:(id)arg1 personUUID:(id)arg2;
+ (id)_fakeWorkoutsForIndex:(long long)arg1 personUUID:(id)arg2;
+ (id)createMeWithModel:(id)arg1;
+ (id)fakeAppFriendListForMarketing;
+ (id)fakeFirstGlanceFriendListForMarketing;
+ (struct _HKFitnessFriendAchievement *)_fakeAchievementDuringDayStartingAtDate:(id)arg1 personUUID:(id)arg2;
+ (id)_fakeWorkoutsForLastWeekWithPersonUUID:(id)arg1 dailySnapshotProbability:(double)arg2;

@end
