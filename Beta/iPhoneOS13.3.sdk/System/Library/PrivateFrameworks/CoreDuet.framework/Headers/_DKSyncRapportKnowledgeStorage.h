/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreDuet/_DKSyncRapportStorage.h>

@class _DKSync2Policy;

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncRapportKnowledgeStorage : _DKSyncRapportStorage

{
    unsigned long long _currentChangeSetSequenceNumber;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
    _DKSync2Policy *_policy;
}

@property (nonatomic, readonly) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;
@property (retain, nonatomic) _DKSync2Policy *policy;

+ (id)sharedInstance;

- (void)setFetchDelegate:(id)arg1;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setHasAdditionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (void)setHasDeletionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (_Bool)hasAdditionsFlagForPeer:(id)arg1;
- (_Bool)hasDeletionsFlagForPeer:(id)arg1;
- (void)clearPrewarmedFlag;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerRequestIDsWithClient:(id)arg1;
- (void)handleFetchEventsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)handleFetchDeletedEventIDsWithRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)handleFetchEventsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)handleUnexpectedRequest:(id)arg1 fromPeer:(id)arg2;
- (id)changeSetForSyncWithEventsToInsert:(id)arg1 eventIDsToDeletes:(id)arg2 error:(id *)arg3;
- (id)dataFromChangeSet:(id)arg1 didCompress:(_Bool *)arg2;
- (void)handleUnexpectedResponse:(id)arg1 fromPeer:(id)arg2;
- (id)changeSetFromCompressedData:(id)arg1 deviceIdentifier:(id)arg2 sequenceNumber:(unsigned long long)arg3;
- (void)handleFetchDeletedEventIDsWithResponse:(id)arg1 options:(id)arg2 error:(id)arg3 peer:(id)arg4 plStartDate:(id)arg5 completion:(CDUnknownBlockType)arg6;

@end
