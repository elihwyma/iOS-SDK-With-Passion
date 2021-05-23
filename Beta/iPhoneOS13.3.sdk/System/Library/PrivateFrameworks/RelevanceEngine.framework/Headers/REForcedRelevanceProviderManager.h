/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@interface REForcedRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_wantsSeperateRelevanceQueue;
+ (_Bool)_supportsHistoricProviders;

- (float)_relevanceForProvider:(id)arg1;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;

@end
