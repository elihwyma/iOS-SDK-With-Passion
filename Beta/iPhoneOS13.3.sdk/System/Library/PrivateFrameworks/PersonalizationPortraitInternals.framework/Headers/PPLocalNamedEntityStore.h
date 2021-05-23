/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <PersonalizationPortrait/PPNamedEntityStore.h>

@class PPLocalTopicStore, PPM2FeedbackPortraitRegistered, PPMFeedbackRegistered, PPMNamedEntitiesDonation, PPMObjectsDeletion, PPNamedEntityStorage, _PASLock, _PASNotificationToken;

@interface PPLocalNamedEntityStore : PPNamedEntityStore

{
    _PASLock *_lock;
    PPLocalTopicStore *_topicStoreForNamedEntityMapping;
    _Atomic _Bool _isCacheInvalidated;
    int _bundleIdBlacklistNotificationToken;
    _PASNotificationToken *_assetUpdateNotificationToken;
    PPMNamedEntitiesDonation *_donationTracker;
    PPMObjectsDeletion *_deletionTracker;
    PPMFeedbackRegistered *_feedbackTracker;
    PPM2FeedbackPortraitRegistered *_feedbackTracker2;
    PPNamedEntityStorage *_storage;
}

@property (nonatomic, readonly) PPNamedEntityStorage *storage;

+ (id)defaultStore;
+ (id)recordsForNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3;
+ (id)_aggregateRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4;
+ (id)ppFeedbackItemToPPPBFeedbackItem:(id)arg1;
+ (_Bool)_yesWithProbability:(double)arg1;
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;
+ (struct PPScoredItem *)scoredEntityFromRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 sourceStats:(id)arg5 scoreInterpreter:(id)arg6;
+ (id)_loadScoreInterpreter;
+ (void)_filterBlacklistedNamedEntityRecords:(id)arg1;
+ (float)resolvedPerRecordDecayRateForRecord:(id)arg1 perRecordDecayRate:(float)arg2;

- (id)init;
- (void)dealloc;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)cloudSyncWithError:(id *)arg1;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (_Bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2;
- (_Bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 sentimentScore:(double)arg5 error:(id *)arg6;
- (_Bool)flushDonationsWithError:(id *)arg1;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id *)arg3;
- (id)mapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (_Bool)removeMapItemForPlaceName:(id)arg1 error:(id *)arg2;
- (_Bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id *)arg2;
- (_Bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id *)arg4;
- (_Bool)_shouldSuppressRepeatedImpressions:(id)arg1;
- (void)disableSyncForBundleIds:(id)arg1;
- (void)processFeedback:(id)arg1;
- (id)initWithStorage:(id)arg1 topicStoreForNamedEntityMapping:(id)arg2;
- (_Bool)_shouldIgnoreHomeOrWorkAddress:(id)arg1;
- (_Bool)monitorNamedEntityRecordChangesWithError:(id *)arg1 setup:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;
- (id)sourceStatsExcludedAlgorithms:(id)arg1;
- (_Bool)_unlimitedNamedEntityRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (void)_petLoggingForQuery:(id)arg1 resultCount:(unsigned long long)arg2 clientProcessName:(id)arg3 hasError:(_Bool)arg4;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id *)arg2 clientProcessName:(id)arg3;
- (id)_coalesceScoredNamedEntities:(id)arg1;
- (id)_filterBlacklistedScoredNamedEntities:(id)arg1;
- (id)_filterOutInvalidNamesFromEntities:(id)arg1;
- (_Bool)_donateTopicsFromEntities:(id)arg1 source:(id)arg2 cloudSync:(_Bool)arg3 sentimentScore:(double)arg4 error:(id *)arg5;
- (_Bool)deleteAllNamedEntitiesOlderThanDate:(id)arg1 deletedCount:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_donateLocationNamedEntityToLocationStore:(id)arg1 source:(id)arg2 locationAlgorithm:(unsigned short)arg3 error:(id *)arg4;
- (id)namedEntityToMatchedStringMappingForNamedEntities:(id)arg1 timestamp:(double)arg2 error:(id *)arg3;
- (id)_feedbackItemToNamedEntityMapForFeedback:(id)arg1 error:(id *)arg2;
- (_Bool)_logFeedbackSessionsWithFeedback:(id)arg1 error:(id *)arg2;
- (id)getScoredNamedEntityFeaturesWithNamedEntity:(id)arg1 excludingSourceBundleId:(id)arg2 decayRate:(double)arg3 error:(id *)arg4 strictFiltering:(_Bool)arg5 scoreInterpreter:(id)arg6;
- (void)_registerMapsQueryPrefetching;
- (id)_mapsSearchQueryResultWithError:(id *)arg1;

@end
