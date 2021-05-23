/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKDatabase, CKNotificationListener, CKSyncEngineMetadata, NSOperationQueue;

@protocol CKSyncEngineDataSource, OS_dispatch_queue;

@interface CKSyncEngine : NSObject

{
    _Bool _ignoringSystemConditions;
    _Bool _waitingForIdentityUpdate;
    _Bool _waitingForHSA2;
    _Bool _useUniqueActivityIdentifiers;
    _Bool _skipRetryOnOperationError;
    _Bool _automaticSyncingDisabled;
    id <CKSyncEngineDataSource> _dataSource;
    CKDatabase *_database;
    CKSyncEngineMetadata *_metadata;
    unsigned long long _lastNotifiedMetadataChangeCount;
    CKNotificationListener *_notificationListener;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_batchCreationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _maxRecordCountPerBatch;
    unsigned long long _maxRecordBytesPerBatch;
    unsigned long long _maxZoneCountPerBatch;
    long long _lastKnownAccountStatus;
    long long _priorityForFetches;
    long long _priorityForModifications;
}

@property (retain, nonatomic) CKDatabase *database;
@property (retain, nonatomic) CKSyncEngineMetadata *metadata;
@property (nonatomic) unsigned long long lastNotifiedMetadataChangeCount;
@property (retain, nonatomic) CKNotificationListener *notificationListener;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *batchCreationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) unsigned long long maxRecordCountPerBatch;
@property (nonatomic) unsigned long long maxRecordBytesPerBatch;
@property (nonatomic) unsigned long long maxZoneCountPerBatch;
@property (nonatomic, getter=isWaitingForIdentityUpdate) _Bool waitingForIdentityUpdate;
@property (nonatomic, getter=isWaitingForHSA2) _Bool waitingForHSA2;
@property (nonatomic) long long lastKnownAccountStatus;
@property (nonatomic) _Bool useUniqueActivityIdentifiers;
@property (nonatomic, readonly) _Bool ignoringSystemConditions;
@property (nonatomic) long long priorityForFetches;
@property (nonatomic) long long priorityForModifications;
@property (nonatomic) _Bool skipRetryOnOperationError;
@property (nonatomic, getter=isAutomaticSyncingDisabled) _Bool automaticSyncingDisabled;
@property (weak, nonatomic, readonly) id <CKSyncEngineDataSource> dataSource;

+ (id)supportedDatabaseScopes;
+ (id)activityIdentifierWithName:(id)arg1 database:(id)arg2 ignoringSystemConditions:(_Bool)arg3 uniquenessPointer:(id)arg4;
+ (id)earliestStartDateAfterError:(id)arg1;
+ (id)fetchChangesActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;
+ (id)modifyPendingChangesActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;
+ (id)saveSubscriptionActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;
+ (void)unregisterActivitiesWithDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;
+ (_Bool)shouldDeferAfterError:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)databaseSubscription;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priorityForFetches:(long long)arg5 priorityForModifications:(long long)arg6;
- (void)commonInitWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 useUniqueActivityIdentifiers:(_Bool)arg5 disableAutomaticSyncing:(_Bool)arg6 priorityForFetches:(long long)arg7 priorityForModifications:(long long)arg8;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 ignoringSystemConditions:(_Bool)arg5 useUniqueActivityIdentifiers:(_Bool)arg6 disableAutomaticSyncing:(_Bool)arg7;
- (void)registerSchedulerActivities;
- (void)registerForSubscriptions;
- (void)accountChangedNotification:(id)arg1;
- (void)scheduleInitialWorkIfNecessary;
- (id)activityIdentifierWithName:(id)arg1;
- (void)scheduleModifyPendingChangesIfNecessaryWithEarliestStartDate:(id)arg1;
- (void)notifyDataSourceForUnserializedMetadataIfNecessary;
- (id)defaultOperationConfiguration;
- (void)_modifyPendingChangesWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__modifyPendingChangesWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ensureAccountAvailableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addOperationsToModifyZonesIfNecessaryInOperationGroup:(id)arg1;
- (id)existingOperationsToModifyZones;
- (id)existingOperationToModifyRecordBatchesIncludingExecutingOperations:(_Bool)arg1;
- (id)newOperationToModifyRecordBatchesWithOperationGroup:(id)arg1;
- (id)existingOperationToFetchChangesIncludingExecutingOperations:(_Bool)arg1;
- (id)nextBatchOfRecordsToModify;
- (void)modifyRecordBatchesOperation:(id)arg1 perRecordProgressForRecord:(id)arg2 progress:(double)arg3;
- (void)modifyRecordBatchesOperation:(id)arg1 perRecordSaveCompletionForRecord:(id)arg2 inBatch:(id)arg3 error:(id)arg4;
- (void)modifyRecordBatchesOperation:(id)arg1 completedBatch:(id)arg2 withSavedRecords:(id)arg3 deletedRecordIDs:(id)arg4 error:(id)arg5;
- (void)modifyRecordBatchesOperation:(id)arg1 completedWithError:(id)arg2;
- (_Bool)shouldRetryAfterError:(id)arg1;
- (void)modifyRecordBatchesOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 inBatch:(id)arg3 error:(id)arg4;
- (void)updateReadinessStateFromError:(id)arg1;
- (_Bool)_hasPendingModifications;
- (id)newOperationToModifyZonesToSave:(id)arg1 zoneIDsToDelete:(id)arg2 inOperationGroup:(id)arg3;
- (id)nextBatchOfRecordsToModifyWithCustomBatching;
- (id)nextBatchOfRecordsToModifyDefaultBehavior;
- (void)_fetchChangesWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)__fetchChangesWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newOperationToFetchChangesWithOperationGroup:(id)arg1;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasPurged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 databaseChangeTokenUpdated:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 completedFetchingDatabaseChangesWithError:(id)arg2;
- (_Bool)shouldFetchChangesForZoneID:(id)arg1;
- (void)fetchChangesOperation:(id)arg1 recordChanged:(id)arg2;
- (void)fetchChangesOperation:(id)arg1 recordWithIDWasDeleted:(id)arg2 recordType:(id)arg3;
- (void)fetchChangesOperation:(id)arg1 updatedServerChangeToken:(id)arg2 clientChangeToken:(id)arg3 forRecordZoneID:(id)arg4;
- (void)fetchChangesOperation:(id)arg1 completedFetchingChangesForRecordZoneID:(id)arg2 serverChangeToken:(id)arg3 clientChangeToken:(id)arg4 error:(id)arg5;
- (void)fetchChangesOperation:(id)arg1 completedWithError:(id)arg2;
- (void)scheduleFetchChangesIfNecessaryWithEarliestStartDate:(id)arg1;
- (void)didReceiveDatabaseNotification:(id)arg1;
- (void)saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_saveSubscriptionIfNecessaryWithOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)scheduleSaveSubscriptionIfNecessaryWithEarliestStartDate:(id)arg1;
- (id)fetchChangesActivityIdentifier;
- (void)performFetchChangesActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)modifyPendingChangesActivityIdentifier;
- (void)performModifyPendingChangesActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)saveSubscriptionActivityIdentifier;
- (void)performSaveSubscriptionActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)isReadyToSubmitSchedulerActivity;
- (void)submitActivityIfNecessaryWithIdentifier:(id)arg1 earliestStartDate:(id)arg2 priority:(long long)arg3;
- (void)updateAccountInfoAndScheduleWorkIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startWaitingForIdentityUpdateIfNecessary;
- (void)startWaitingForHSA2IfNecessary;
- (void)identityUpdateNotification:(id)arg1;
- (void)updateAccountInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3;
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 useUniqueActivityIdentifiers:(_Bool)arg4 disableAutomaticSyncing:(_Bool)arg5;
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;
- (void)addRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (void)modifyPendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)numberOfModifyPendingRecordsOperations;
- (_Bool)hasPendingModifications;
- (void)fetchChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveSubscriptionIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterActivities;
- (_Bool)hasSchedulerActivityWithIdentifier:(id)arg1;

@end
