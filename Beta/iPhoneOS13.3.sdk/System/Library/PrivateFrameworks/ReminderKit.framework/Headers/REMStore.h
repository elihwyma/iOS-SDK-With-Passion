/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMStoreContainerToken, _REMInProgressSaveRequestsContainer;

@protocol REMDaemonController;

@interface REMStore : NSObject

{
    _Bool _assertOnMainThreadFetches;
    struct os_unfair_lock_s _lock;
    REMStoreContainerToken *_storeContainerToken;
    _REMInProgressSaveRequestsContainer *_l_inProgressSaveRequestsContainer;
    id <REMDaemonController> _daemonController;
    unsigned long long _mode;
    REMStore *_nonUserInteractiveStore;
}

@property (nonatomic, readonly) REMStoreContainerToken *storeContainerToken;
@property (nonatomic, readonly) _REMInProgressSaveRequestsContainer *l_inProgressSaveRequestsContainer;
@property (nonatomic, readonly) struct os_unfair_lock_s lock;
@property (retain, nonatomic) id <REMDaemonController> daemonController;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) _Bool assertOnMainThreadFetches;
@property (retain, nonatomic) REMStore *nonUserInteractiveStore;

+ (void)initialize;
+ (_Bool)notificationsEnabled;
+ (_Bool)siriShouldRouteIntentsToNewRemindersApp;
+ (id)storeDidChangeNotificationName;
+ (id)createIsolatedStoreContainerWithError:(id *)arg1;
+ (_Bool)destroyIsolatedStoreContainerWithToken:(id)arg1 error:(id *)arg2;
+ (_Bool)_shouldNotifyReminddOfInteractionWithPeople;
+ (void)notifyOfInteractionWithPeople:(id)arg1;
+ (void)notifyOfUserInterestInSiriSuggestedReminder:(id)arg1;
+ (_Bool)dataaccessDaemonStopSyncingReminders;
+ (_Bool)isEventKitSyncEnabledForReminderKit;

- (id)init;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)fetchReplicaManagerForAccountID:(id)arg1 error:(id *)arg2;
- (id)initWithStoreContainerToken:(id)arg1;
- (id)initWithDaemonController:(id)arg1 storeContainerToken:(id)arg2;
- (unsigned long long)storeGeneration;
- (id)fetchAccountsWithError:(id *)arg1;
- (id)fetchListWithObjectID:(id)arg1 error:(id *)arg2;
- (id)_withInProgressSaveRequestContainer:(CDUnknownBlockType)arg1;
- (id)fetchAccountWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchAccountsWithObjectIDs:(id)arg1 error:(id *)arg2;
- (id)fetchListsWithObjectIDs:(id)arg1 error:(id *)arg2;
- (id)fetchRemindersWithObjectIDs:(id)arg1 error:(id *)arg2;
- (id)fetchRemindersWithParentReminderIDs:(id)arg1 error:(id *)arg2;
- (id)fetchReminderWithObjectID:(id)arg1 error:(id *)arg2;
- (id)_xpcSyncStorePerformerWithReason:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_incrementStoreGeneration;
- (void)_saveAccountChangeItems:(id)arg1 listChangeItems:(id)arg2 reminderChangeItems:(id)arg3 author:(id)arg4 replicaManagerProvider:(id)arg5 synchronously:(_Bool)arg6 performer:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)fetchResultByExecutingFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_isUserInteractiveStore;
- (void)enumerateAllListsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateAllListsIncludingGroups:(_Bool)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)fetchEligibleDefaultListsWithError:(id *)arg1;
- (id)fetchDefaultListWithError:(id *)arg1;
- (id)initUserInteractive:(_Bool)arg1;
- (id)initWithDaemonController:(id)arg1;
- (void)nukeDatabase;
- (id)fetchAccountsIncludingInactive:(_Bool)arg1 error:(id *)arg2;
- (id)fetchAccountsForDumpingWithError:(id *)arg1;
- (id)fetchSiriFoundInAppsListWithError:(id *)arg1;
- (id)refreshAccount:(id)arg1;
- (id)refreshList:(id)arg1;
- (id)refreshReminder:(id)arg1;
- (id)optimisticallyMaterializeReminderChangeItem:(id)arg1;
- (id)fetchReplicaManagersForAccountID:(id)arg1 bundleID:(id)arg2 error:(id *)arg3;
- (_Bool)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 error:(id *)arg7;
- (void)saveSaveRequest:(id)arg1 accountChangeItems:(id)arg2 listChangeItems:(id)arg3 reminderChangeItems:(id)arg4 author:(id)arg5 replicaManagerProvider:(id)arg6 queue:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)resultsIndexedByObjectIDFromExecutingFetchRequest:(id)arg1 error:(id *)arg2;
- (id)resultFromPerformingInvocation:(id)arg1 error:(id *)arg2;
- (id)resultFromPerformingSwiftInvocation:(id)arg1 parametersData:(id)arg2 storages:(id)arg3 error:(id *)arg4;
- (void)enumerateAllRemindersWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAllGroupsAndListsWithBlock:(CDUnknownBlockType)arg1;
- (id)fetchShareForListWithID:(id)arg1 error:(id *)arg2;
- (id)createShareForListWithID:(id)arg1 error:(id *)arg2;
- (void)updateShare:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stopShare:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acceptShareWithMetadata:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)everConnectedToCar;
- (id)compressedDistributedEvaluationDataWithOptions:(id)arg1 error:(id *)arg2;
- (id)fetchDefaultAccountWithError:(id *)arg1;
- (void)_respondToCalDAVSharedList:(id)arg1 withResponse:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)acceptCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rejectCalDAVSharedList:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2 transactionAuthorKeysToExclude:(id)arg3;
- (id)provideChangeTrackingForAccountID:(id)arg1 clientName:(id)arg2;
- (id)provideAnonymousChangeTrackingWithTransactionAuthorKeysToExclude:(id)arg1;
- (void)notifyOfInteractionWithPeople:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)notifyOfUserInterestInSiriSuggestedReminder:(id)arg1;
- (id)fetchAllRemindersWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchListsForEventKitBridgingWithError:(id *)arg1;
- (id)fetchRemindersForEventKitBridgingWithListIDs:(id)arg1 error:(id *)arg2;
- (id)fetchIncompleteRemindersForEventKitBridgingWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id *)arg4;
- (id)fetchCompletedRemindersForEventKitBridgingWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id *)arg4;
- (id)fetchRemindersMatchingTitle:(id)arg1 dueAfter:(id)arg2 dueBefore:(id)arg3 isCompleted:(id)arg4 hasLocation:(id)arg5 location:(id)arg6 error:(id *)arg7;
- (id)fetchAccountWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchAccountsWithExternalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)fetchListsIncludingSpecialContainersInAccount:(id)arg1 error:(id *)arg2;
- (id)fetchListIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchListIncludingSpecialContainerWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchReminderIncludingMarkedForDeleteWithObjectID:(id)arg1 error:(id *)arg2;
- (id)fetchReminderWithExternalIdentifier:(id)arg1 inList:(id)arg2 error:(id *)arg3;
- (id)fetchRemindersWithExternalIdentifiers:(id)arg1 inList:(id)arg2 error:(id *)arg3;
- (id)fetchReminderWithDACalendarItemUniqueIdentifier:(id)arg1 inList:(id)arg2 error:(id *)arg3;
- (id)fetchRemindersWithDACalendarItemUniqueIdentifiers:(id)arg1 inList:(id)arg2 error:(id *)arg3;
- (id)fetchAllListsWithExternalIdentifier:(id)arg1 error:(id *)arg2;
- (void)_triggerSyncWithReason:(id)arg1 forcingCloudKitReload:(_Bool)arg2 discretionary:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateAccountsAndFetchMigrationState:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAccountWithAccountID:(id)arg1 restartDA:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestToMergeLocalDataIntoSyncDataWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestToDeleteSyncDataWithAccountIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestToDeleteLocalDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)triggerThrottledSyncWithReason:(id)arg1 discretionary:(_Bool)arg2 WithCompletion:(CDUnknownBlockType)arg3;
- (void)triggerSyncForDataAccessAccountsWithAccountIDs:(id)arg1;
- (void)updateAccountsAndSync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateAccountWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAccountWithAccountID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeOrphanedAccountsWithCompletion:(CDUnknownBlockType)arg1;
- (id)replicaManagerProviderForCalDAVSync;

@end
