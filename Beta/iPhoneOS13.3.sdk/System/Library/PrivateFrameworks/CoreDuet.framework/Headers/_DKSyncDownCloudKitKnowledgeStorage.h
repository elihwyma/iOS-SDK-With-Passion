/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class _DKSyncCloudKitKnowledgeStorage;

@protocol _DKSyncRemoteKnowledgeStorageFetchDelegate;

@interface _DKSyncDownCloudKitKnowledgeStorage : NSObject

{
    _DKSyncCloudKitKnowledgeStorage *_common;
    id <_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;
}

@property (retain) _DKSyncCloudKitKnowledgeStorage *common;
@property (retain) id <_DKSyncRemoteKnowledgeStorageFetchDelegate> delegate;
@property (getter=isAvailable) _Bool available;

+ (id)sharedInstance;

- (id)init;
- (id)name;
- (void)start;
- (void)setFetchDelegate:(id)arg1;
- (long long)transportType;
- (void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setHasAdditionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (void)setHasDeletionsFlag:(_Bool)arg1 forPeer:(id)arg2;
- (void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (void)cancelOutstandingOperations;
- (_Bool)hasAdditionsFlagForPeer:(id)arg1;
- (_Bool)hasDeletionsFlagForPeer:(id)arg1;
- (void)clearPrewarmedFlag;
- (void)prewarmFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

@end
