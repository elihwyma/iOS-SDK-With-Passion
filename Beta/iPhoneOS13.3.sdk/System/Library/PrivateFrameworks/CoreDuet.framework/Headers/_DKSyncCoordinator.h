/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class APSConnection, NSArray, NSHashTable, NSString, _DKKnowledgeStorage, _DKSyncState, _DKThrottledActivity;

@protocol OS_dispatch_queue;

@interface _DKSyncCoordinator : NSObject

{
    NSObject<OS_dispatch_queue> *_executionQueue;
    _DKThrottledActivity *_activityThrottler;
    NSString *_triggeredSyncDelayActivityName;
    NSString *_syncActivityName;
    _DKSyncState *_syncState;
    _Bool _periodJobIsRegistered;
    _Bool _databaseObserversRegistered;
    _Bool _cloudSyncAvailablityObserverRegistered;
    _Bool _siriSyncEnabledObserverRegistered;
    _Bool _syncPolicyChangedObserverRegistered;
    APSConnection *_connection;
    _Bool _triggeredSyncObserverRegistered;
    NSArray *_streamNamesObservedForAdditions;
    NSArray *_streamNamesObservedForDeletions;
    NSHashTable *_syncCoordinatorEventNotificationDelegates;
    id c2;
    _DKKnowledgeStorage *_storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _DKKnowledgeStorage *storage;

+ (void)validateConfigurationWithStorePath:(id)arg1;

- (void)dealloc;
- (void)_performSyncTogglesChangedActions;
- (void)_registerSyncPolicyChangedObserver;
- (void)_registerCloudSyncAvailablityObserver;
- (void)_registerSiriSyncEnabledObserver;
- (void)_unregisterCloudSyncAvailablityObserver;
- (void)_unregisterSiriSyncEnabledObserver;
- (void)_registerPeriodicJob;
- (void)_registerDatabaseObservers;
- (void)_unregisterPeriodicJob;
- (void)_unregisterDatabaseObservers;
- (void)_createPushConnection;
- (void)_possiblyPerformInitialSync;
- (void)_destroyPushConnection;
- (void)_performPeriodicJob;
- (void)_cloudSyncAvailabilityDidChange:(id)arg1;
- (void)_syncPolicyDidChange:(id)arg1;
- (void)syncWithReply:(CDUnknownBlockType)arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;
- (id)initWithStorage:(id)arg1;
- (void)_siriSyncEnabledDidChange;
- (void)_unregisterSyncPolicyChangedObserver;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didHaveInsertsAndDeletesWithCount:(unsigned long long)arg2;
- (void)knowledgeStorage:(id)arg1 didInsertEventsWithStreamNameCounts:(id)arg2;
- (void)knowledgeStorage:(id)arg1 didDeleteEventsWithStreamNameCounts:(id)arg2;
- (void)addSyncCoordinatorEventNotificationDelegate:(id)arg1;
- (void)_deleteAllRemoteSyncDataIfSiriCloudSyncHasBeenDisabled;
- (id)_lastSyncDownFromCloudDate;
- (void)_performSyncWithPolicy:(id)arg1 isTriggeredSync:(_Bool)arg2 localChangeSets:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_deleteRemoteCloudEventsAndStorage;
- (void)_addLastSyncDate:(id)arg1;
- (id)_lastDaySyncDates;
- (void)performSyncWithPolicy:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)__performSyncWithPolicy:(id)arg1 isTriggeredSync:(_Bool)arg2 localChangeSets:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_lastLocalQueryEndDate;
- (id)_queryStartDateGivenPolicy:(id)arg1 lastQueryEndDate:(id)arg2 isTriggeredSync:(_Bool)arg3;
- (id)_lastSyncQueryEndDate;
- (id)_fetchLocalChangeSetsSinceQueryStartDate:(id)arg1 error:(id *)arg2;
- (_Bool)_performSyncUpWithPolicy:(id)arg1 queryStartDate:(id)arg2 localChangeSets:(id)arg3 error:(id *)arg4;
- (void)_setLastLocalQueryEndDate:(id)arg1;
- (void)_setLastSyncUpToCloudDate:(id)arg1;
- (void)_setLastSyncDownFromCloudDate:(id)arg1;
- (_Bool)_performSyncDownWithPolicy:(id)arg1 queryStartDate:(id)arg2 error:(id *)arg3;
- (void)_setLastSyncQueryEndDate:(id)arg1;
- (unsigned long long)_sequenceNumberOfLastDeletionChangeSetProcessedFromDevice:(id)arg1;
- (id)changeSetForSyncWithInsertedObjects:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id *)arg4;
- (id)changeSetForSyncWithTombstones:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id *)arg4;
- (id)_changeSetsByDeviceFromChangeSets:(id)arg1;
- (_Bool)_device:(id)arg1 hasMissingChangeSetInDeletionChangeSets:(id)arg2;
- (void)_deleteEventsForDevices:(id)arg1;
- (id)_prunedAdditionChangeSets:(id)arg1 withDevicesToPrune:(id)arg2;
- (id)_prunedAdditionChangeSetsFromSyncChanges:(id)arg1;
- (_Bool)_performSyncDownWithPolicy:(id)arg1 additionChangeSets:(id)arg2;
- (_Bool)_performSyncDownWithPolicy:(id)arg1 deletionChangeSets:(id)arg2;
- (void)_sendNotificationsForAppliedRemoteAdditionChangeSet:(id)arg1;
- (void)_sendNotificationsForAppliedRemoteDeletionChangeSet:(id)arg1 deleted:(unsigned long long)arg2;
- (void)_setIfHigherSequenceNumber:(unsigned long long)arg1 ofLastDeletionChangeSetProcessedFromDevice:(id)arg2;
- (void)_setLastChangeCount:(unsigned long long)arg1;
- (void)_sendNotificationsForCreatedDeletionChangeSet:(id)arg1;
- (void)_sendNotificationsForCreatedAdditionChangeSet:(id)arg1;
- (double)_intervalForJobGivenPolicy:(id)arg1 isSingleDevice:(_Bool)arg2;
- (void)_databaseDidHaveInsertsAndDeletesWithInsertsAndDeletesCount:(unsigned long long)arg1;
- (unsigned long long)_lastChangeCount;
- (void)_checkIfNumChangesTriggersSync;
- (void)_databaseDidAddToStreamName:(id)arg1;
- (void)_databaseDidDeleteFromStreamName:(id)arg1;
- (void)_cloudSyncDidReset:(id)arg1;
- (void)_deleteRemoteCloudEvents;
- (id)_lastSyncUpToCloudDate;
- (void)removeSyncCoordinatorEventNotificationDelegate:(id)arg1;
- (void)_deleteSiriSyncData;

@end
