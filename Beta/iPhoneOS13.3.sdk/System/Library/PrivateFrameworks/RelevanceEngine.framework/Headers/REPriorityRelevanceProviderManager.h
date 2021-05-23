/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@interface REPriorityRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_wantsSeperateRelevanceQueue;

- (float)_relevanceForProvider:(id)arg1;

@end
