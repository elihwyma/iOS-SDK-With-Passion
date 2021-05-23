/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class CKContainer, NSArray, NSError, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, PDCloudStoreRecordsRequest;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, PDCloudStoreContainerDelegate, PDCloudStoreDataSource;

@interface PDCloudStoreContainer : NSObject

{
    NSMutableSet *_initializationCompletionHandlers;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_group> *_batchUpdateGroup;
    _Bool _shouldInvalidateCloudStore;
    _Bool _shouldCancelAllTasks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSMutableOrderedSet *_fetchRequests;
    PDCloudStoreRecordsRequest *_currentRequest;
    _Bool _accountChangedNotificationReceived;
    _Bool _cloudContainerSetupInProgress;
    _Bool _resettingCloudContainer;
    CKContainer *_container;
    id <PDCloudStoreContainerDelegate> _delegate;
    id <PDCloudStoreDataSource> _dataSource;
    NSArray *_subscriptionIdentifiers;
    NSArray *_zoneNames;
    NSMutableDictionary *_subscriptionsByIdentifier;
    NSMutableDictionary *_zonesByName;
    NSMutableDictionary *_completedFetchTimestampByZoneID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSError *_operationError;
    unsigned long long _nextExpectedState;
}

@property (nonatomic, readonly) NSMutableDictionary *subscriptionsByIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *zonesByName;
@property (nonatomic, readonly) NSMutableDictionary *completedFetchTimestampByZoneID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSError *operationError;
@property (nonatomic) unsigned long long nextExpectedState;
@property (nonatomic) _Bool accountChangedNotificationReceived;
@property (nonatomic) _Bool cloudContainerSetupInProgress;
@property (nonatomic) _Bool resettingCloudContainer;
@property (retain, nonatomic) CKContainer *container;
@property (weak, nonatomic) id <PDCloudStoreContainerDelegate> delegate;
@property (weak, nonatomic, readonly) id <PDCloudStoreDataSource> dataSource;
@property (retain, nonatomic) NSArray *subscriptionIdentifiers;
@property (retain, nonatomic) NSArray *zoneNames;

+ (id)serverChangeTokenFromArchiveData:(id)arg1;

- (id)description;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (id)initWithDataSource:(id)arg1;
- (_Bool)isSetup;
- (void)invalidateCloudStoreWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)initialCloudDatabaseSetupWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateCloudStoreIfPossibleWithOperationGroupNameSuffix:(id)arg1 clearCache:(_Bool)arg2;
- (id)allRecordNamesAssociatedWithRecordName:(id)arg1 inZone:(id)arg2;
- (void)initialCloudDatabaseSetupWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cloudStoreAccountInformationWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)ensureContainerState:(unsigned long long)arg1;
- (void)setContainerState:(unsigned long long)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processResultWithError:(id)arg1 nextExpectedState:(unsigned long long)arg2 operationGroupNameSuffix:(id)arg3 retryCount:(unsigned long long)arg4 shouldRetry:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)createZones:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createZoneSubscriptions:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cloudStoreSpecificKeysForItem:(id)arg1;
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)saveCachedContainerValues;
- (void)saveServerFetchTimestampsForKey:(id)arg1;
- (void)saveServerZonesForKey:(id)arg1;
- (void)saveServerSubscriptionsForKey:(id)arg1;
- (void)readCachedContainerValues;
- (void)retrieveCachedServerFetchTimestampsForKey:(id)arg1;
- (void)retrieveCachedServerZonesForKey:(id)arg1;
- (void)retrieveCachedServerSubscriptionsForKey:(id)arg1;
- (void)invalidateServerChangeTokens;
- (id)lastFetchDateForZoneWithName:(id)arg1;
- (void)executeRecordsRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)zoneForCloudStoreItemType:(unsigned long long)arg1;
- (void)fetchRecordsWithRecordIDs:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchRecordsWithQuery:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 zone:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)shouldFetchAndStoreCloudDataAtStartupWithCompletion:(CDUnknownBlockType)arg1;
- (id)recordTypeForRecordID:(id)arg1;
- (_Bool)canInitializeContainer;
- (void)cloudStoreAccountChanged:(id)arg1;
- (_Bool)canCoalesceRequest:(id)arg1 withNewRequest:(id)arg2;
- (void)coalesceRequest:(id)arg1 withNewRequest:(id)arg2;
- (_Bool)shouldContinueWithRequest:(id)arg1;
- (void)processFetchedCloudStoreDataWithModifiedRecords:(id)arg1 deletedRecords:(id)arg2 request:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetContainerWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeItemsWithRecordNames:(id)arg1 itemType:(unsigned long long)arg2 groupName:(id)arg3 groupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)canUpdateAndFetchRecords;
- (void)invalidateCloudStoreAndClearCache:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)attachToContainer;
- (void)_cancelCloudStoreInitializationTimer;
- (void)_markEndCloudStoreDatabaseSetupWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_startCloudStoreInitializationTimer;
- (void)_resetContainerValues;
- (void)detachFromContainerWithState:(unsigned long long)arg1;
- (void)_fetchRecordZonesWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchAllSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteAllZonesWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_deleteAllZoneSubscriptionsWithOperationGroupNameSuffix:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_retryContainerStateWithError:(id)arg1 operationGroupNameSuffix:(id)arg2 retryCount:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_keychainSyncFinishedFired;
- (void)_resetCachedZoneDataForZoneID:(id)arg1;
- (id)_cannotPerformActionErrorWithFailureReason:(id)arg1;
- (void)_zoneOperationWithZonesToSave:(id)arg1 zonesIDsToDelete:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_subscriptionOperationWithSubscriptionsToSave:(id)arg1 subscriptionIDsToDelete:(id)arg2 operationGroupNameSuffix:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_queue_executeNextFecthRequestIfPossible;
- (void)_queue_fetchAllRecordsUsingStoredChangeToken:(_Bool)arg1 changeToken:(id)arg2 shouldSaveToken:(_Bool)arg3 operationGroupName:(id)arg4 operationGroupNameSuffix:(id)arg5 qualityOfService:(long long)arg6 batchHandler:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)modifyRecordsOperationWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 operationGroupName:(id)arg3 operationGroupNameSuffix:(id)arg4 qualityOfService:(long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_addOperation:(id)arg1;
- (id)recordTypesForCloudStoreItemType:(unsigned long long)arg1;
- (void)_fetchRecordsWithQuery:(id)arg1 operationGroupName:(id)arg2 operationGroupNameSuffix:(id)arg3 qualityOfService:(long long)arg4 cursor:(id)arg5 fetchedRecords:(id)arg6 zone:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)_cancelAllOperations;
- (void)_cloudStoreInitializationTimerFired;
- (id)cloudRecordObjectFromItemType:(unsigned long long)arg1 records:(id)arg2;
- (void)resetCachedContainerValues;

@end
