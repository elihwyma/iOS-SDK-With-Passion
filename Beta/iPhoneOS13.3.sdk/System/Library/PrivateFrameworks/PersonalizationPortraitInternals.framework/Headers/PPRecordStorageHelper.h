/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPDKStorage, _DKEventStream;

@interface PPRecordStorageHelper : NSObject

{
    NSString *_table;
    NSString *_clusterIdentifierColumn;
    unsigned int _maxRecords;
    PPDKStorage *_duetStorage;
    _DKEventStream *_duetStream;
    NSString *_lastDuetImportDateKey;
    NSString *_lastDuetDeletionDateKey;
}

- (id)init;
- (id)initWithName:(id)arg1 table:(id)arg2 clusterIdentifierColumn:(id)arg3 maxRecords:(unsigned int)arg4 duetStorage:(id)arg5 duetStream:(id)arg6;
- (id)blobFromUUID:(id)arg1;
- (id)uuidForStatement:(id)arg1 referencingBlobInColumn:(int)arg2;
- (_Bool)clearWithDatabase:(id)arg1 client:(unsigned char)arg2 deletedCount:(unsigned long long *)arg3 error:(id *)arg4 clearExternalTableReferences:(CDUnknownBlockType)arg5;
- (void)truncateRecordsByDroppingOldestMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (id)createTempRowIdTableForRecordsToDropMakingRoomForCount:(unsigned int)arg1 txnWitness:(id)arg2;
- (CDUnknownBlockType)duetEventDeletionProcessingBlockWithDatabase:(id)arg1 client:(unsigned char)arg2;
- (id)_lastDeletionDateWithTransaction:(id)arg1;
- (void)_processTombstoneEventBatch:(id)arg1 database:(id)arg2 client:(unsigned char)arg3 lastTombstoneDate:(id *)arg4;
- (void)_cleanDatabaseOfEventsWithUUIDs:(id)arg1 txnWitness:(id)arg2;
- (void)importDuetEventsWithLimit:(unsigned int)arg1 database:(id)arg2 client:(unsigned char)arg3 remoteEventsOnly:(_Bool)arg4 isComplete:(_Bool *)arg5 eventImportBlock:(CDUnknownBlockType)arg6;
- (void)_addEventsSourcedOnLastImportDateToSet:(id)arg1 lastDKImportDate:(id *)arg2 txnWitness:(id)arg3;
- (id)_importDuetEventBatch:(id)arg1 lastDKImportDate:(id)arg2 isComplete:(_Bool *)arg3 eventImportBlock:(CDUnknownBlockType)arg4 txnWitness:(id)arg5;
- (void)disableSyncForBundleIds:(id)arg1 txnWitness:(id)arg2;
- (_Bool)deleteAllRecordsWithClusterIdentifier:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllRecordsWithClusterIdentifier:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(_Bool *)arg5 deletedCount:(unsigned long long *)arg6 error:(id *)arg7;
- (_Bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 algorithm:(unsigned int)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(_Bool *)arg5 deletedCount:(unsigned long long *)arg6 error:(id *)arg7;
- (_Bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 error:(id *)arg5;
- (_Bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 algorithm:(unsigned int)arg2 txnWitness:(id)arg3 atLeastOneRecordClusterRemoved:(_Bool *)arg4 deletedCount:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4 atLeastOneRecordClusterRemoved:(_Bool *)arg5 deletedCount:(unsigned long long *)arg6 error:(id *)arg7;
- (_Bool)deleteAllRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 algorithm:(unsigned int)arg4 txnWitness:(id)arg5 atLeastOneRecordClusterRemoved:(_Bool *)arg6 deletedCount:(unsigned long long *)arg7 error:(id *)arg8;
- (void)deleteAllRemotelyGeneratedRecordsMissingInDuetFromDatabase:(id)arg1 withClient:(unsigned char)arg2;
- (void)_deleteAllRemotelyGeneratedRecordsMissingInDuetFromDatabase:(id)arg1 withClient:(unsigned char)arg2 tempTableName:(id)arg3;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 documentIds:(id)arg2 txnWitness:(id)arg3;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupIds:(id)arg2 txnWitness:(id)arg3;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 txnWitness:(id)arg2;
- (id)createTempRowIdTableForRecordsSourcedFromBundleId:(id)arg1 groupId:(id)arg2 olderThanDate:(id)arg3 txnWitness:(id)arg4;
- (id)createTempRowIdTableForRecordsOlderThanDate:(id)arg1 txnWitness:(id)arg2;
- (id)createTempTableContainingRowsFromQuery:(id)arg1 descriptiveTableName:(id)arg2 txnWitness:(id)arg3 bind:(CDUnknownBlockType)arg4;
- (void)deleteRecordsWithRowIdsFromTableWithName:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4;
- (void)_deleteRecordsWithRowIdsFromQuery:(id)arg1 txnWitness:(id)arg2 atLeastOneRecordClusterRemoved:(_Bool *)arg3 deletedCount:(unsigned long long *)arg4 bind:(CDUnknownBlockType)arg5;
- (struct _PASDBIterAction_)_processRowForDeletionWithStatement:(id)arg1 handle:(id)arg2;
- (void)_deleteDKEventsWithRowIdQuery:(id)arg1 txnWitness:(id)arg2;
- (void)fixupDKEventsWithDatabase:(id)arg1 fixup49995922Table:(id)arg2 batchSize:(unsigned int)arg3 createRecordWithStatement:(CDUnknownBlockType)arg4 eventForRecord:(CDUnknownBlockType)arg5 isComplete:(_Bool *)arg6;

@end
