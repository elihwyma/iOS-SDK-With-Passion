/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHEarnedInstanceStore;

@interface ACHEarnedInstanceCleanupUtility : NSObject

{
    ACHEarnedInstanceStore *_earnedInstanceStore;
}

@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;

- (id)_cleanupFirstWorkoutAchievements;
- (id)_cleanupBestWorkoutAchievements;
- (id)_cleanupLongestMoveStreakAchievements;
- (id)_cleanupNewExerciseRecordAchievements;
- (id)initWithEarnedInstanceStore:(id)arg1;
- (void)performCleanup;

@end
