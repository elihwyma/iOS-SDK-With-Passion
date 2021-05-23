/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSCache, PPLocalContactStore, _PASLock;

@protocol OS_dispatch_semaphore;

@interface PPQuickTypeContactsServant : NSObject

{
    PPLocalContactStore *_localContactStore;
    _PASLock *_meCardCacheLock;
    _PASLock *_meContactDataLock;
    NSCache *_meQuickTypeItemCache;
    NSCache *_cachedNameLookups;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
}

+ (id)_supportedPeopleSemanticTypes;

- (id)init;
- (id)initWithOptions:(unsigned char)arg1;
- (void)clearCaches;
- (void)_registerForNotifications;
- (id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (void)_warmUpFormatters;
- (void)setCachedNameLookup:(id)arg1;
- (id)_scoredMeContactWithMeContact:(id)arg1;
- (void)_preloadMeCardAndItemCacheWithMeContact:(id)arg1;
- (id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (id)_predictionForPeopleQuery:(id)arg1 fromEligibleSemanticTextField:(_Bool)arg2 limit:(unsigned long long)arg3 explanationSet:(id)arg4;
- (_Bool)_isMeCardQuery:(id)arg1;
- (id)_mePredictionCacheKeyForQuery:(id)arg1;
- (id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3;
- (id)_predictMeCardDetailForQuery:(id)arg1 limit:(unsigned long long)arg2 fromSemanticTextField:(_Bool)arg3 explanationSet:(id)arg4;
- (id)_lookupScoredPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3 justPreloadCache:(_Bool)arg4;
- (id)_lookupPeopleWithNamePrefix:(id)arg1 recipients:(id)arg2 explanationSet:(id)arg3 justPreloadCache:(_Bool)arg4;
- (_Bool)_isSemanticTagEligible:(unsigned char)arg1;
- (id)_selfContactQueryqueryFromSemanticTagquery:(id)arg1;
- (id)_loadMeCard;
- (id)_updateMeCardFromSource;

@end
