/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@class NSDate, PPClientFeedbackHelper, PPRecordMonitoringHelper;

@interface PPXPCNamedEntityStore

{
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
    NSDate *_lastCallDate;
}

- (id)_init;
- (void)setClientIdentifier:(id)arg1;
- (id)clientIdentifier;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)cloudSyncWithError:(id *)arg1;
- (_Bool)clearWithError:(id *)arg1 deletedCount:(unsigned long long *)arg2;
- (void)_setLastCallDate;
- (id)_getLastCallDate;
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
- (CDUnknownBlockType)_recordGenerator;
- (void)_sendResetToAllDelegates;
- (void)_sendChangesToDelegates;
- (void)_loadNamedEntityRecordsWithDelegate:(id)arg1;
- (_Bool)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id *)arg2;

@end
