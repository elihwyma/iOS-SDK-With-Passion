/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, WBSCloudHistoryConfiguration, WBSCloudHistoryPushAgentProxy, WBSCloudKitThrottler, WBSHistory, WBSOneShotTimer;

@protocol NSObject, OS_dispatch_queue, WBSCloudHistoryDataStore, WBSCloudKitContainerManateeObserving;

@interface WBSCloudHistory : NSObject

{
    NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
    WBSHistory *_history;
    _Bool _cloudHistoryEnabled;
    _Bool _saveChangesWhenHistoryLoads;
    _Bool _fetchChangesWhenHistoryLoads;
    id <NSObject> _historyWasLoadedObserver;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _saveOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _fetchOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _replayLongLivedSaveOperationSuddenTerminationDisabler;
    _Bool _replayLongLivedSaveOperationHasBeenPerformed;
    WBSCloudHistoryConfiguration *_configuration;
    id <WBSCloudHistoryDataStore> _store;
    WBSCloudKitThrottler *_saveChangesThrottler;
    WBSCloudKitThrottler *_fetchChangesThrottler;
    WBSCloudKitThrottler *_syncCircleSizeRetrievalThrottler;
    WBSOneShotTimer *_serverBackoffTimer;
    _Bool _saveChangesWhenBackoffTimerFires;
    _Bool _fetchChangesWhenBackoffTimerFires;
    WBSCloudHistoryPushAgentProxy *_pushAgent;
    WBSOneShotTimer *_pushNotificationFetchTimer;
    unsigned long long _numberOfDevicesInSyncCircle;
    NSMutableDictionary *_syncCircleSizeRetrievalCompletionHandlersByOperation;
    CDUnknownBlockType _fetchCompletionHandler;
    CDUnknownBlockType _saveCompletionHandler;
    id <WBSCloudKitContainerManateeObserving> _containerManateeObserver;
    NSMutableArray *_storeDeterminationCompletionBlocks;
    long long _currentManateeState;
    _Bool _manateeStateNeedsUpdate;
    _Bool _isWaitingForPCSIdentityUpdate;
    _Bool _determiningStoreType;
    _Bool _removedHistoryItemsArePendingSave;
}

@property (nonatomic) unsigned long long numberOfDevicesInSyncCircle;
@property (nonatomic, getter=isCloudHistoryEnabled) _Bool cloudHistoryEnabled;
@property (nonatomic) _Bool removedHistoryItemsArePendingSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id).cxx_construct;
- (void)_historyItemsWereRemoved:(id)arg1;
- (id)recordOfPastOperationsForThrottler:(id)arg1;
- (void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2;
- (id)initWithHistory:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_determineCloudHistoryStoreWithCompletion:(CDUnknownBlockType)arg1;
- (id)_currentSaveChangesThrottlerPolicyString;
- (id)_currentFetchChangesThrottlerPolicyString;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (void)_replayPersistedLongLivedSaveOperationIfNecessary;
- (void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
- (void)_initializePushNotificationSupport;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(CDUnknownBlockType)arg1;
- (void)_cloudHistoryConfigurationChanged:(id)arg1;
- (void)_pushNotificationReceived:(id)arg1;
- (void)_transitionCloudHistoryStoreToManateeState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveChangesBypassingThrottler:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(_Bool)arg1;
- (void)_callAndResetSaveCompletionHandlerWithError:(id)arg1;
- (void)_registerSaveCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg1 databaseGeneration:(long long)arg2;
- (void)_removePersistedLongLivedSaveOperationDictionary;
- (void)_handleManateeErrorIfNeeded:(id)arg1;
- (void)_resetForAccountChangeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)_backoffTimeIntervalFromError:(id)arg1;
- (void)_backOffWithInterval:(double)arg1;
- (void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(_Bool)arg3 longLivedOperationPersistenceCompletion:(CDUnknownBlockType)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(_Bool)arg3;
- (long long)_resultFromError:(id)arg1;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (void)fetchAndMergeChangesBypassingThrottler:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerFetchCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_callAndResetFetchCompletionHandlerWithError:(id)arg1;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 withPriority:(long long)arg2;
- (void)_getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAndMergeChanges;
- (void)saveChangesToCloudHistoryStore;
- (id)_manateeErrorCode:(id)arg1;
- (void)_deleteAllCloudHistoryAndSaveAgain;
- (void)_pcsIdentitiesChangedNotification:(id)arg1;
- (void)_setServerChangeToken:(id)arg1;
- (void)_processPendingPushNotifications;
- (void)_persistedLongLivedSaveOperationID:(id *)arg1 databaseGeneration:(long long *)arg2;
- (void)_updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setPushNotificationAreInitialized:(_Bool)arg1;
- (void)_pushNotificationsAreInitializedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_updateDeviceCountInResponseToPushNotification;
- (void)_fetchChangesInResponseToPushNotification:(id)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_historyWasLoaded:(id)arg1;
- (void)_serverBackoffTimerFired:(id)arg1;
- (void)_updateThrottlerPolicies;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (void)_resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHistory:(id)arg1 configuration:(id)arg2;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)fetchAndMergeChangesBypassingThrottler;
- (void)_saveChangesWhenHistoryLoads;
- (void)_fetchChangesWhenHistoryLoads;
- (void)resetForAccountChange;

@end
