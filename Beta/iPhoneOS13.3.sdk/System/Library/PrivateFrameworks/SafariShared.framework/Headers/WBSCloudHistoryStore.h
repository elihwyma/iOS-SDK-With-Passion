/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class CKDatabase, CKRecordZone, CKRecordZoneID, NSOperationQueue, WBSCloudHistoryConfiguration;

@protocol OS_dispatch_queue;

@interface WBSCloudHistoryStore : NSObject

{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSOperationQueue *_cloudKitOperationQueue;
    CKDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    CKRecordZone *_recordZone;
    WBSCloudHistoryConfiguration *_configuration;
    _Bool _useManateeContainer;
}

- (void)_scheduleOperation:(id)arg1;
- (void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithConfiguration:(id)arg1 useManateeContainer:(_Bool)arg2;
- (void)deleteHistoryZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)initializePushNotifications:(CDUnknownBlockType)arg1;
- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(CDUnknownBlockType)arg1;
- (void)_prepareRecordZoneWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldTryToResetRecordZoneForError:(id)arg1;
- (void)_resetRecordZone;
- (void)_saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_recordsWithCloudHistoryVisits:(id)arg1;
- (id)_recordWithHistoryTombstones:(id)arg1 version:(unsigned long long)arg2;
- (void)_batchSaveRecords:(id)arg1 useLongLivedOperation:(_Bool)arg2 longLivedOperationPersistenceCompletion:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_saveRecords:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_recordWithCloudHistoryVisits:(id)arg1;
- (id)_recordWithType:(id)arg1 version:(unsigned long long)arg2 dataDictionary:(id)arg3;
- (void)_fetchRecordsWithServerChangeToken:(id)arg1 numberOfFetchRecordsOperationsPerformedSoFar:(unsigned long long)arg2 result:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_configureFetchChangesOperation:(id)arg1;
- (void)_appendRecord:(id)arg1 toResult:(id)arg2;
- (id)_dictionaryForRecordData:(id)arg1;
- (id)_recordDataForDictionary:(id)arg1;

@end
