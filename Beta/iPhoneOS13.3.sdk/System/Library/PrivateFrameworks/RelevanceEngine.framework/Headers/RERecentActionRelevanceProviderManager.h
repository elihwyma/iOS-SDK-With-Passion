/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSDate, NSMutableDictionary;

@interface RERecentActionRelevanceProviderManager : RERelevanceProviderManager

{
    NSMutableDictionary *_relevanceProviderMap;
    NSDate *_lastDateUpdate;
}

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_supportsHistoricProviders;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (id)initWithQueue:(id)arg1;
- (void)_handleSignificantTimeChange;
- (void)_prepareForUpdate;
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (void)_addedProvider:(id)arg1;
- (void)_removeProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;
- (void)_handleActionPerformedNotifiction:(id)arg1;
- (void)_scheduleUpdatesForActionProvider:(id)arg1;

@end
