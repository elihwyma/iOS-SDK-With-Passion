/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
 */

#import <ActivityAchievements/Swift-Protocol.h>

@protocol ACHServerInterface <Swift>

- (unsigned short)remote_fetchAllTemplatesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addTemplate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removeTemplate:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removeAllTemplatesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchAllEarnedInstancesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addEarnedInstance:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removeEarnedInstance:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removeAllEarnedInstancesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchAllAchievementsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchAchievementWithTemplateUniqueName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchEphemeralAchievementWithTemplateUniqueName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_forceAwardingSchedulerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_runMonthlyChallengesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchActivityChallengeAssetsServerURLWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setActivityChallengeAssetsServerURL:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_availableMobileAssetsWithCompletion: /* Error: Ran out of types for this method. */;

@end
