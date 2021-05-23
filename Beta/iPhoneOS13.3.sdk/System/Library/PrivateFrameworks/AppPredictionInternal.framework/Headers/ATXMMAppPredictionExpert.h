/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXMMAppPredictionExpert : NSObject

+ (id)notificationIdentifier;
+ (Class)supportedAnchorClass;
+ (id)sampleEventForExpert;
+ (id)anchorTypeForExpert;
+ (unsigned int)predictionReasonForExpert;
+ (id)pathToPredictionTable;
+ (_Bool)isExpertEnabledForPredictions;
+ (id)fetchAnchorOccurrences;
+ (_Bool)shouldPredicateOnStartDateForTrigger;
+ (long long)dateBufferForTriggerEvent;
+ (id)correlateTriggerEvents:(id)arg1 withAppLaunches:(id)arg2;
+ (void)tagEventWithLOIForEvent:(id)arg1;
+ (id)createTrainingDataForSubExpertsWithCorrelatedEvents:(id)arg1;
+ (void)trainSubExpertWithCorrelatedEvents:(id)arg1 indices:(id)arg2 predicates:(id)arg3 appLaunchCountedSet:(id)arg4 predictionTable:(id)arg5;
+ (id)trainSubExpertWithCorrelatedEvents:(id)arg1 appLaunchCountedSet:(id)arg2;
+ (void)serializeAndWritePredictionTable:(id)arg1;
+ (void)trainSubExpertsWithTrainingData:(id)arg1 correlatedEvents:(id)arg2 appLaunchCountedSet:(id)arg3;
+ (void)trainExpertWithAppLaunchEvents:(id)arg1 appLaunchCountedSet:(id)arg2;
+ (id)predictionTable;
+ (id)predictionTableFromCache;
+ (_Bool)shouldHandleTriggerEventWithRateLimiter:(id)arg1;
+ (void)setupEventListenerForInferenceWithContext:(id)arg1 rateLimiter:(id)arg2;
+ (id)fetchPredictionsForTriggerEvent:(id)arg1;
+ (void)broadcastMMPredictionsForEvent:(id)arg1 predictions:(id)arg2;
+ (void)fetchAndHandleTriggerEvent;
+ (void)logTriggeredMMMetricsEntryForAnchorType:(long long)arg1;
+ (void)logPredictedScoreMMMetricsEntryForBundle:(id)arg1 anchorType:(long long)arg2 score:(double)arg3;
+ (void)logPredictedCountMMMetricsEntryForAnchorType:(long long)arg1 numPredictions:(int)arg2;
+ (int)mmAnchorTypeToMMProtobufAnchor:(long long)arg1;

- (id)init;

@end
