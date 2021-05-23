/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESharedLocationRelevanceProviderManager.h>

@interface REGeofenceRelevanceProviderManager : RESharedLocationRelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (id)_dependencyClasses;

- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;
- (int)_queryRevokableStatusForProvider:(id)arg1;

@end
