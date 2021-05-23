/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@interface REConditionalRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (id)_dependencyClasses;
+ (_Bool)_wantsDelayedUpdate;

- (float)_relevanceForProvider:(id)arg1;

@end
