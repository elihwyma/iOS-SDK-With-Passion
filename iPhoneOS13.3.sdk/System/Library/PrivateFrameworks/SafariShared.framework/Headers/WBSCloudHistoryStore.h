//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudHistoryDataStore-Protocol.h>

@class CKDatabase, CKRecordZone, CKRecordZoneID, NSOperationQueue, WBSCloudHistoryConfiguration;
@protocol OS_dispatch_queue;

@interface WBSCloudHistoryStore : NSObject <WBSCloudHistoryDataStore>
{
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSOperationQueue *_cloudKitOperationQueue;
    CKDatabase *_database;
    CKRecordZoneID *_recordZoneID;
    CKRecordZone *_recordZone;
    WBSCloudHistoryConfiguration *_configuration;
    BOOL _useManateeContainer;
}

// - (void).cxx_destruct;
- (void)fetchNumberOfDevicesInSyncCircleWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)deleteHistoryZoneWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)_resetRecordZone;
- (void)_prepareRecordZoneWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)_dictionaryForRecordData:(id)arg1;
- (id)_recordDataForDictionary:(id)arg1;
- (id)_recordWithType:(id)arg1 version:(NSUInteger)arg2 dataDictionary:(id)arg3;
- (void)_appendRecord:(id)arg1 toResult:(id)arg2;
- (void)_scheduleOperation:(id)arg1;
- (void)_fetchRecordsWithServerChangeToken:(id)arg1 numberOfFetchRecordsOperationsPerformedSoFar:(NSUInteger)arg2 result:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_configureFetchChangesOperation:(id)arg1;
- (void)fetchRecordsWithServerChangeTokenData:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)replayPersistedLongLivedSaveOperationWithID:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)_recordWithHistoryTombstones:(id)arg1 version:(NSUInteger)arg2;
- (id)_recordWithCloudHistoryVisits:(id)arg1;
- (id)_recordsWithCloudHistoryVisits:(id)arg1;
- (void)_batchSaveRecords:(id)arg1 useLongLivedOperation:(BOOL)arg2 longLivedOperationPersistenceCompletion:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)_saveRecords:(id)arg1 withCompletion:(id /* CDUnknownBlockType */)arg2;
- (void)_saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)saveCloudHistoryVisits:(id)arg1 tombstones:(id)arg2 longLivedOperationPersistenceCompletion:(id /* CDUnknownBlockType */)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (BOOL)_shouldTryToResetRecordZoneForError:(id)arg1;
- (void)initializePushNotifications:(id /* CDUnknownBlockType */)arg1;
- (id)initWithConfiguration:(id)arg1 useManateeContainer:(BOOL)arg2;

@end

