/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol ATXActionProducerDelegate;

@interface ATXHeuristicActionProducer : NSObject

{
    id _expireNotificationHandle;
    id <ATXActionProducerDelegate> _delegate;
}

@property (weak, nonatomic) id <ATXActionProducerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)actionExperienceForScoredHeuristicAction:(struct ATXScoredPrediction *)arg1;
+ (double)generateScoreForHeuristic:(id)arg1;
+ (double)computeHeuristicEngagementScoreWithPriorAlpha:(int)arg1 priorBeta:(int)arg2 confirms:(double)arg3 rejects:(double)arg4 totalConfirms:(double)arg5 totalRejects:(double)arg6;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)actionPredictionBlacklist;
- (id)produceActions;
- (id)digitalHealthBlacklist;
- (id)bundleIdForAction:(id)arg1;
- (id)blacklistSubstitutionForBundleId:(id)arg1;
- (_Bool)isActionBlacklisted:(id)arg1;
- (_Bool)userAlreadyEngagedWithAction:(id)arg1;

@end
