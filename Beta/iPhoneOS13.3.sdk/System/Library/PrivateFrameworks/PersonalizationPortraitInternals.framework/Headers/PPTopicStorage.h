/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class PPDKStorage, PPRecordStorageHelper, PPSQLDatabase;

@interface PPTopicStorage : NSObject

{
    PPSQLDatabase *_db;
    PPDKStorage *_dkStorage;
    id _deletionObserver;
    PPRecordStorageHelper *_storageHelper;
}

+ (id)_loadTrieFromLocalAsset:(id)arg1;
+ (double)_scoreTopicWithInitialScore:(double)arg1 decayRate:(double)arg2 extractionDate:(id)arg3 scoringDate:(id)arg4;

- (id)init;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (_Bool)iterTopicRecordsWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithDatabase:(id)arg1 maxRecords:(unsigned int)arg2 dkStorage:(id)arg3 loadEmptyDatabaseFromDK:(_Bool)arg4;
- (id)_createRecordWithStatement:(id)arg1;
- (_Bool)_shouldSuppressRepeatedImpressions:(id)arg1;
- (id)_deletionQueue;
- (void)_asyncProcessNewDKEventDeletions;
- (void)processNewDKEventDeletions;
- (void)_truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (void)_asyncPopulateDatabaseFromDKEventsIfNecessary;
- (void)_importDKEventsWithLimit:(unsigned int)arg1 remoteEventsOnly:(_Bool)arg2 isComplete:(_Bool *)arg3;
- (void)_dkEventImportToDatabaseWithEvent:(id)arg1 eventUUIDBlob:(id)arg2 txnWitness:(id)arg3;
- (void)_exportNamedEntityRecordsToDKWithLimit:(unsigned int)arg1 isComplete:(_Bool *)arg2 txnWitness:(id)arg3;
- (struct _PASDBIterAction_)_populateEvents:(id)arg1 statement:(id)arg2 txnWitness:(id)arg3;
- (void)disableSyncForBundleIds:(id)arg1;
- (unsigned int)duetReadBatchSize;
- (unsigned int)duetWriteBatchSize;
- (double)duetWriteBatchInterval;
- (id)tempTableForSourceIdsExcludedAlgorithms:(id)arg1 txnWitness:(id)arg2;
- (id)_updatePreexistingTopicsMatchingTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 txnWitness:(id)arg4;
- (struct _PASDBIterAction_)_populateUpdates:(id)arg1 statement:(id)arg2 source:(id)arg3 weightMultiplier:(double)arg4 topicToScoredTopic:(id)arg5;
- (_Bool)donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 error:(id *)arg7;
- (_Bool)_donateTopics:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 txnWitness:(id)arg7;
- (void)_prepareDonationStatement:(id)arg1 scoredTopic:(struct PPScoredItem *)arg2 algorithm:(unsigned long long)arg3 cloudSync:(_Bool)arg4 decayRate:(double)arg5 sentimentScore:(double)arg6 occurrencesInSource:(unsigned short)arg7 algorithmResultPosition:(unsigned short)arg8 algorithmResultCount:(unsigned short)arg9 weightMultiplier:(double)arg10 sourceRowId:(long long)arg11;
- (_Bool)deleteAllTopicsOlderThanDate:(id)arg1 atLeastOneTopicRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 atLeastOneTopicRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsWithTopicId:(id)arg1 algorithm:(unsigned long long)arg2 atLeastOneTopicRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 atLeastOneTopicRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned long long)arg3 atLeastOneTopicRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 atLeastOneTopicRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned long long)arg3 atLeastOneTopicRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 atLeastOneTopicRemoved:(_Bool *)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 algorithm:(unsigned long long)arg2 atLeastOneTopicRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 atLeastOneTopicRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllTopicsFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned long long)arg4 atLeastOneTopicRemoved:(_Bool *)arg5 deletedCount:(unsigned long long *)arg6 error:(id *)arg7;
- (void)importRemotelyGeneratedTopicDKEventsWithLimit:(unsigned int)arg1 isComplete:(_Bool *)arg2;
- (void)exportLocallyGeneratedTopicRecordsToDKWithLimit:(unsigned int)arg1 isComplete:(_Bool *)arg2;
- (void)clearRemotelyGeneratedTopicRecordsMissingInDuet;
- (void)fixupTopicDKEventsWithBatchSize:(unsigned int)arg1 isComplete:(_Bool *)arg2;

@end
