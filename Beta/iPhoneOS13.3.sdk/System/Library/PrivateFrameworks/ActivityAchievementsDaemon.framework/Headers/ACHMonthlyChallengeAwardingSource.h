/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHAchievementProgressEngine, ACHEarnedInstanceAwardingEngine, ACHEarnedInstanceStore, ACHMonthlyChallengeDataSource, ACHTemplateStore, HDProfile, NSString;

@interface ACHMonthlyChallengeAwardingSource : NSObject

{
    unsigned char _creatorDevice;
    HDProfile *_profile;
    ACHEarnedInstanceAwardingEngine *_engine;
    ACHAchievementProgressEngine *_progressProvider;
    ACHTemplateStore *_templateStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    ACHMonthlyChallengeDataSource *_monthlyDataSource;
}

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHEarnedInstanceAwardingEngine *engine;
@property (weak, nonatomic) ACHAchievementProgressEngine *progressProvider;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (weak, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (weak, nonatomic) ACHMonthlyChallengeDataSource *monthlyDataSource;
@property (nonatomic) unsigned char creatorDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *uniqueName;

- (id)_earnedInstancesForInterval:(id)arg1;
- (void)_requestIncrementalEvaluation;
- (id)_evaluationEnvironmentForTemplate:(id)arg1;
- (id)_monthlyChallengeTemplatesForHistoricalInterval:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (id)earnedInstancesForHistoricalInterval:(id)arg1 databaseContext:(id)arg2;
- (_Bool)providesProgressForTemplate:(id)arg1;
- (id)currentProgressQuantityForTemplate:(id)arg1;
- (id)currentGoalQuantityForTemplate:(id)arg1;
- (id)initWithProfile:(id)arg1 awardingEngine:(id)arg2 templateStore:(id)arg3 earnedInstanceStore:(id)arg4 monthlyDataSource:(id)arg5 creatorDevice:(unsigned char)arg6 progressProvider:(id)arg7;

@end
