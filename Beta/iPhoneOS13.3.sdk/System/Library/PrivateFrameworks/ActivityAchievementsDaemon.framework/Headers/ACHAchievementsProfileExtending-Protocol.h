/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <ActivityAchievementsDaemon/Swift-Protocol.h>

@class ACHAchievementStore, ACHTemplateStore;

@protocol ACHAchievementsProfileExtending <Swift>

@property (nonatomic, readonly) ACHAchievementStore *achievementStore;
@property (nonatomic, readonly) ACHTemplateStore *templateStore;

- (unsigned short)registerTemplateSource:awardingSource: /* Error: Ran out of types for this method. */;
- (unsigned short)deregisterTemplateSource:awardingSource: /* Error: Ran out of types for this method. */;
- (unsigned short)requestImmediateUpdateForTemplateSource: /* Error: Ran out of types for this method. */;
- (unsigned short)requestIncrementalEvaluationForAwardingSource:evaluationBlock: /* Error: Ran out of types for this method. */;

@end
