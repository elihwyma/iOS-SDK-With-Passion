/*
 Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@protocol ATXClientXPCInterface

- (unsigned short)sendFeedbackForConsumerType:consumerSubType:atxResponse:aprResponse:engagementType:engagedBundleId:bundleIdsShown:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)generateNewAppPredictionsForConsumerSubType:intent:candidateBundleIdentifiers:candidateIntentTypeIdentifiers:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getAppPredictorAssetMappingDescriptionWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)sortAppsByLaunches:reply: /* Error: Ran out of types for this method. */;

@end
