/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@interface REGroupRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_wantsSeperateRelevanceQueue;

- (id)_valueForProvider:(id)arg1 feature:(id)arg2;

@end
