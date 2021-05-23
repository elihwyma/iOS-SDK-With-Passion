/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSURL;

@protocol OS_dispatch_queue;

@interface CKUploadRequestPersistentStore : NSObject

{
    _Bool _firstInvocation;
    NSURL *_databaseURL;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

@property (retain, nonatomic) NSURL *databaseURL;
@property (nonatomic) _Bool firstInvocation;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)repairRecordToMetadata:(id)arg1;

- (id)unarchivedObjectOfClass:(Class)arg1 fromData:(id)arg2 error:(id *)arg3;
- (id)currentUser;
- (void)setLastFetchDate:(id)arg1;
- (id)lastFetchDate;
- (void)readDatabase:(CDUnknownBlockType)arg1 async:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)sortedDelayedSyncRecordsForDatabase:(id)arg1;
- (id)delayedSyncRecordNamesAfterDate:(id)arg1;
- (id)delayedSyncDateForRecord:(id)arg1;
- (void)readWriteDatabase:(CDUnknownBlockType)arg1 async:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDatabaseURL:(id)arg1;
- (id)assetRepairMetadata;
- (id)packageRepairMetadata;
- (id)metadataForRecordName:(id)arg1;
- (id)delayedSyncRecordNamesBeforeAndIncludingDate:(id)arg1;
- (id)earliestDelayedSyncDateAfterDate:(id)arg1;
- (long long)delayedSyncCountForRecordName:(id)arg1;
- (id)syncEngineMetadata;
- (void)setCurrentUser:(id)arg1;
- (void)persistRepairRecord:(id)arg1;
- (void)deleteRepairRecord:(id)arg1;
- (void)clearRepairRecords;
- (void)persistDelayedSyncForRecordName:(id)arg1 withDate:(id)arg2 increasingCount:(_Bool)arg3;
- (void)deleteDelayedSyncForRecordName:(id)arg1;
- (void)clearDelayedSyncRecords;
- (void)markRecordNameUnrecoverable:(id)arg1;
- (void)persistSyncEngineMetadata:(id)arg1;
- (void)clearDatabase;
- (void)deleteDatabase;
- (id)allData;

@end
