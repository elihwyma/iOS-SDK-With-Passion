/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class HDDatabaseTransactionContext, HDProfile, HDSQLitePredicate;

@interface ACHWorkoutUtility : NSObject

{
    HDDatabaseTransactionContext *_databaseContext;
    HDProfile *_profile;
    HDSQLitePredicate *_firstPartyPredicate;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDSQLitePredicate *firstPartyPredicate;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (id)initWithProfile:(id)arg1;
- (id)workoutsInDateInterval:(id)arg1;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 endingOnOrBeforeDate:(id)arg3;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2;
- (unsigned long long)numberOfWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2;
- (id)workoutsWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4 firstPartyOnly:(_Bool)arg5;
- (id)_predicateWithDuration:(double)arg1 withType:(id)arg2 startingAtOrAfterDate:(id)arg3 endingOnOrBeforeDate:(id)arg4 firstPartyOnly:(_Bool)arg5;
- (unsigned long long)_countOfSamplesWithPredicate:(id)arg1;

@end
