/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSDictionary, REPredictorManager, RERelevanceProviderEnvironment;

@protocol REElementRelevanceEngineProperties <Swift>

@property (nonatomic, readonly) NSDictionary *sectionsMap;
@property (nonatomic, readonly) REPredictorManager *predictorManager;
@property (nonatomic, readonly) RERelevanceProviderEnvironment *providerEnvironment;

@end
