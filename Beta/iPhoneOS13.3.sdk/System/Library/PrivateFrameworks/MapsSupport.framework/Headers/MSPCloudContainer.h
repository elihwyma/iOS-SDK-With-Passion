/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class CKContainer, MSPCloudContainerCache, MSPCloudKitAccountAccess, MSPContainer, MSPJournal, NSError, NSHashTable, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MSPCloudContainer : NSObject

{
    _Bool _requiresRemoteFetch;
    _Bool _canceled;
    _Bool _hasActiveSubscription;
    _Bool _useSecureContainer;
    MSPContainer *_container;
    MSPCloudKitAccountAccess *_access;
    MSPCloudContainerCache *_cache;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MSPJournal *_journal;
    NSMutableDictionary *_pendingOperations;
    NSError *_cancelError;
    NSHashTable *_observers;
    unsigned long long _operationBatchSize;
}

@property (retain, nonatomic) MSPCloudKitAccountAccess *access;
@property (retain, nonatomic) MSPCloudContainerCache *cache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) _Bool hasActiveSubscription;
@property (retain, nonatomic) MSPJournal *journal;
@property (retain, nonatomic) NSMutableDictionary *pendingOperations;
@property (nonatomic) _Bool canceled;
@property (copy, nonatomic) NSError *cancelError;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, readonly) CKContainer *ckContainer;
@property (nonatomic) _Bool useSecureContainer;
@property (nonatomic) unsigned long long operationBatchSize;
@property (retain, nonatomic) MSPContainer *container;

- (id)description;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)zoneID;
- (id)zoneName;
- (_Bool)isCanceled;
- (_Bool)useZoneWidePCS;
- (id)initWithContainer:(id)arg1 cache:(id)arg2 access:(id)arg3;
- (id)initWithContainer:(id)arg1 cache:(id)arg2;
- (void)_forEachObserver:(CDUnknownBlockType)arg1;
- (void)configureCKOperation:(id)arg1 withGroup:(id)arg2;
- (void)removePendingOperationWithID:(id)arg1;
- (void)addCKOperation:(id)arg1;
- (id)zoneSubscriptionName;
- (Class)replicaRecordClass;
- (id)_modifyRecordsOperationWithRecordsToSave:(id)arg1 toDelete:(id)arg2 group:(id)arg3 modifyRecordsCompletion:(CDUnknownBlockType)arg4;
- (id)batchedOperationsFromRecords:(id)arg1 toDelete:(id)arg2 group:(id)arg3 batchSize:(unsigned long long)arg4 modifyRecordsCompletionBlock:(CDUnknownBlockType)arg5;
- (void)handleMergeError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mergeRemoteChanges:(id)arg1 withGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchChangesWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)mergeOptionsForEarliestKnownSyncDate:(id)arg1;
- (void)mergeLocalChangesFromReplica:(id)arg1 withAppliedRemoteChanges:(id)arg2 group:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)pushChanges:(id)arg1 withGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelPendingOperationsWithError:(id)arg1;
- (void)didReceiveRemoteNotification:(id)arg1;
- (id)initWithContainer:(id)arg1 accountID:(id)arg2;
- (void)setupCloudContainerWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeCloudContainerWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeToChangesWithCompletion:(CDUnknownBlockType)arg1;
- (void)mergeWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cancelMergeWithError:(id)arg1;
- (void)containerDidEraseContents;

@end
