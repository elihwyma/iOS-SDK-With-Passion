/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceProviderManager.h>

@class NSDate, NSString;

@interface RESessionRelevanceProviderManager : RERelevanceProviderManager

{
    NSDate *_lastDateUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDate *lastUpdateDate;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (_Bool)_wantsSeperateRelevanceQueue;
+ (_Bool)_supportsHistoricProviders;

- (void)pause;
- (void)resume;
- (void)_handleSignificantTimeChange;
- (float)_relevanceForProvider:(id)arg1;
- (void)_prepareForUpdate;
- (float)_relevanceForHistoricProvider:(id)arg1;
- (void)_addedProvider:(id)arg1;
- (_Bool)_isHistoricProvider:(id)arg1;
- (void)_scheduleUpdatesForSessionProvider:(id)arg1;

@end
