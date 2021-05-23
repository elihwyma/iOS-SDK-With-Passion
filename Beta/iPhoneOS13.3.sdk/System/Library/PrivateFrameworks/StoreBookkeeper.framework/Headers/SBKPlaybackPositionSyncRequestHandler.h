/*
 Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <StoreBookkeeper/SBKSyncRequestHandler.h>

@class NSDictionary, NSError, NSMutableDictionary, NSObject, NSString, SBKSyncTransaction, SBKTransactionController;

@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource, SBKUniversalPlaybackPositionTransactionContext;

__attribute__((visibility("hidden")))
@interface SBKPlaybackPositionSyncRequestHandler : SBKSyncRequestHandler

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_syncOperationQueue;
    _Bool _syncInProgress;
    _Bool _canceled;
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;
    SBKTransactionController *_kvsController;
    id <SBKUniversalPlaybackPositionTransactionContext> _dataSourceTransactionContext;
    NSMutableDictionary *_metadataItemsFromDataSource;
    NSDictionary *_metadataItemsToCommitToDataSource;
    NSDictionary *_metadataItemsToCommitToKVSStorage;
    NSMutableDictionary *_responseMetadataItemsToCommitToDataSource;
    NSMutableDictionary *_responseMetadataItemsMergedToCommitBackToKVSStorage;
    SBKSyncTransaction *_currentKVSTransaction;
    NSError *_fatalSyncError;
    NSString *_overrideSyncAnchor;
}

@property (retain) SBKTransactionController *kvsController;
@property (retain) id <SBKUniversalPlaybackPositionDataSource> dataSource;
@property (retain) id <SBKUniversalPlaybackPositionTransactionContext> dataSourceTransactionContext;
@property (retain) NSMutableDictionary *metadataItemsFromDataSource;
@property (retain) NSDictionary *metadataItemsToCommitToDataSource;
@property (retain) NSDictionary *metadataItemsToCommitToKVSStorage;
@property (retain) NSMutableDictionary *responseMetadataItemsToCommitToDataSource;
@property (retain) NSMutableDictionary *responseMetadataItemsMergedToCommitBackToKVSStorage;
@property (retain) SBKSyncTransaction *currentKVSTransaction;
@property _Bool syncInProgress;
@property _Bool canceled;
@property (retain) NSError *fatalSyncError;
@property (retain) NSString *overrideSyncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)timeout;
- (_Bool)_shouldStop;
- (void)cancelWithError:(id)arg1;
- (_Bool)_synchronize:(id *)arg1;
- (_Bool)transactionController:(id)arg1 transactionDidFail:(id)arg2 error:(id)arg3;
- (void)transactionController:(id)arg1 transactionDidCancel:(id)arg2 error:(id)arg3;
- (void)transactionController:(id)arg1 transactionDidFinish:(id)arg2;
- (id)initWithDataSource:(id)arg1 bagContext:(id)arg2;
- (void)clearTransactionResponseData;
- (void)_dataSourceCancelTransaction;
- (id)newKVSSyncTransactionWithUpdatedMetadataItemIdentifiers:(id)arg1 processConflicts:(_Bool)arg2;
- (id)_synchronouslyRunKVSTransaction:(id)arg1;
- (void)_mergeMetadataItemsFromSyncResponse;
- (void)_signalKVSTransactionCompletion:(id)arg1 withError:(id)arg2;
- (void)_signalKVSTransactionCompletion:(id)arg1;
- (void)transaction:(id)arg1 willProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 didProcessResponseData:(id)arg2;
- (void)transaction:(id)arg1 processUpdatedKey:(id)arg2 data:(id)arg3 conflict:(_Bool)arg4 isDirty:(_Bool *)arg5;
- (int)_mergeConflictedItemFromSyncResponse:(id)arg1;
- (void)transaction:(id)arg1 processDeletedKey:(id)arg2 isDirty:(_Bool *)arg3;
- (id)transaction:(id)arg1 keyValuePairForUpdatedKey:(id)arg2;
- (id)transaction:(id)arg1 syncAnchorForTransactionSyncAnchor:(id)arg2;
- (id)transaction:(id)arg1 conflictDetectionOrdinalForKey:(id)arg2;

@end
