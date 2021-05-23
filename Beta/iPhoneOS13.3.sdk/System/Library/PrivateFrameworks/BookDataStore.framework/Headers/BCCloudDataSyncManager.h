/*
 Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
 */

#import <Foundation/NSObject.h>

@class BCCloudKitController, NSString;

@protocol BCCloudDataMapper, BCCloudDataSyncManagerDelegate, OS_dispatch_queue;

@interface BCCloudDataSyncManager : NSObject

{
    _Bool _processingCloudData;
    _Bool _serverPushPostponed;
    id <BCCloudDataSyncManagerDelegate> _delegate;
    BCCloudKitController *_cloudKitController;
    id <BCCloudDataMapper> _dataMapper;
    NSObject<OS_dispatch_queue> *_syncQueue;
    double _backOffInterval;
    unsigned long long _tooBigBatch;
}

@property (retain, nonatomic) BCCloudKitController *cloudKitController;
@property (retain, nonatomic) id <BCCloudDataMapper> dataMapper;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) _Bool processingCloudData;
@property (nonatomic) double backOffInterval;
@property (nonatomic) unsigned long long tooBigBatch;
@property (nonatomic) _Bool serverPushPostponed;
@property (weak, nonatomic) id <BCCloudDataSyncManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCloudKitController:(id)arg1;
- (void)startSyncToCKWithCompletion:(CDUnknownBlockType)arg1;
- (void)databaseController:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)databaseController:(id)arg1 reachabilityChanged:(_Bool)arg2;
- (void)databaseController:(id)arg1 attachmentChanged:(_Bool)arg2;
- (void)databaseController:(id)arg1 recordsChanged:(id)arg2;
- (void)databaseController:(id)arg1 fetchedAllRecordsInZone:(id)arg2;
- (void)fetchRecordForRecordID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCloudKitController:(id)arg1 dataMapper:(id)arg2;
- (void)_syncQueueSyncForCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_maxCloudDataPerBatch;
- (void)_leaveDispatchGroup:(id)arg1 times:(unsigned long long)arg2;
- (void)_updateRetryParametersFromModifyRecordsOperationError:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)_batchFromCloudData:(id)arg1;
- (void)_fromBatch:(id)arg1 getRecordsToSave:(id *)arg2 recordIDsToDelete:(id *)arg3 buildingMap:(id *)arg4;
- (void)_enterDispatchGroup:(id)arg1 times:(unsigned long long)arg2;
- (CDUnknownBlockType)_modifyRecordsCompletionBlockWithDispatchGroup:(id)arg1 cloudDataMap:(id)arg2 recordCount:(unsigned long long)arg3;
- (void)syncCloudData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signalSyncToCK;

@end
