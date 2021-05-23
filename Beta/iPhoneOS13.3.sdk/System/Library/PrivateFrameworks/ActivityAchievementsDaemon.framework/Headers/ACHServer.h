/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHAchievementStore, ACHEarnedInstanceStore, ACHMobileAssetProvider, ACHTemplateSourceScheduler, ACHTemplateStore, HDProfile, HDXPCClient, NSString;

@protocol ACHAwardingScheduler;

@interface ACHServer : NSObject

{
    HDXPCClient *_client;
    HDProfile *_profile;
    ACHTemplateStore *_templateStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    NSObject<ACHAwardingScheduler> *_awardingScheduler;
    ACHAchievementStore *_achievementStore;
    ACHMobileAssetProvider *_mobileAssetProvider;
    ACHTemplateSourceScheduler *_templateSourceScheduler;
}

@property (retain, nonatomic) HDXPCClient *client;
@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateStore *templateStore;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) NSObject<ACHAwardingScheduler> *awardingScheduler;
@property (retain, nonatomic) ACHAchievementStore *achievementStore;
@property (retain, nonatomic) ACHMobileAssetProvider *mobileAssetProvider;
@property (retain, nonatomic) ACHTemplateSourceScheduler *templateSourceScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)serverWithClient:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 awardingScheduler:(id)arg4 achievementStore:(id)arg5 mobileAssetProvider:(id)arg6 templateSourceScheduler:(id)arg7 error:(id *)arg8;
+ (id)serverWithTemplateStore:(id)arg1 earnedInstanceStore:(id)arg2 awardingScheduler:(id)arg3 achievementStore:(id)arg4 mobileAssetProvider:(id)arg5 templateSourceScheduler:(id)arg6;

- (id)exportedInterface;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void)remote_fetchAllTemplatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_addTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeTemplate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeAllTemplatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchAllEarnedInstancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_addEarnedInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeEarnedInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeAllEarnedInstancesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchAllAchievementsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchAchievementWithTemplateUniqueName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_fetchEphemeralAchievementWithTemplateUniqueName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_forceAwardingSchedulerWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_runMonthlyChallengesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_fetchActivityChallengeAssetsServerURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_setActivityChallengeAssetsServerURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_availableMobileAssetsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithClient:(id)arg1 templateStore:(id)arg2 earnedInstanceStore:(id)arg3 awardingScheduler:(id)arg4 achievementStore:(id)arg5 mobileAssetProvider:(id)arg6 templateSourceScheduler:(id)arg7;

@end
