/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCountedSet, NSData, NSMutableDictionary, NSString, WBSHistoryTagMap;

@protocol OS_dispatch_queue, WBSHistoryStore;

@interface WBSHistory : NSObject

{
    NSObject<OS_dispatch_queue> *_entriesByURLStringAccessQueue;
    NSMutableDictionary *_entriesByURLString;
    NSObject<OS_dispatch_queue> *_hostnameToHistoryItemCountAccessQueue;
    NSCountedSet *_hostnameToHistoryItemCount;
    NSCountedSet *_stringsForUserTypedDomainExpansion;
    double _historyAgeLimit;
    _Bool _hasStartedLoadingHistory;
    NSObject<OS_dispatch_queue> *_waitUntilHistoryHasLoadedQueue;
    id <WBSHistoryStore> _historyStore;
    WBSHistoryTagMap *_historyTagMap;
}

@property (readonly) NSArray *allItems;
@property (nonatomic, readonly) _Bool hasAnyHistoryItems;
@property (nonatomic, readonly) unsigned long long numberOfHistoryItems;
@property (nonatomic, readonly) unsigned long long numberOfHistoryItemsOnHistoryQueue;
@property (nonatomic) double historyAgeLimit;
@property (nonatomic, readonly) WBSHistoryTagMap *historyTagMap;
@property (copy, nonatomic) NSData *pushThrottlerData;
@property (copy, nonatomic) NSData *fetchThrottlerData;
@property (copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData;
@property (copy, nonatomic) NSData *longLivedSaveOperationData;
@property (nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property (nonatomic) _Bool pushNotificationsAreInitialized;
@property (nonatomic) _Bool syncsWithManateeContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)clearExistingSharedHistory;
+ (id)existingSharedHistory;
+ (id)historyDatabaseURL;
+ (id)historyPropertyListURL;
+ (id)historyDatabaseWriteAheadLogURL;

- (id)init;
- (void)close;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)clearHistory;
- (id)itemForURL:(id)arg1;
- (id)itemForURLString:(id)arg1;
- (void)_removeAllVisitedLinks;
- (void)_startLoading;
- (void)performBlockAfterHistoryHasLoaded:(CDUnknownBlockType)arg1;
- (void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)performMaintenance;
- (void)setServerChangeTokenData:(id)arg1;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1;
- (void)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2;
- (void)replayAndAddTombstones:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAllTombstonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 populateAssociatedVisits:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)itemRedirectedFrom:(id)arg1 to:(id)arg2 origin:(long long)arg3 date:(id)arg4;
- (void)updateTitle:(id)arg1 forVisit:(id)arg2;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(_Bool)arg4 wasFailure:(_Bool)arg5 increaseVisitCount:(_Bool)arg6 origin:(long long)arg7;
- (void)waitUntilHistoryHasLoaded;
- (id)itemForURLString:(id)arg1 createIfNeeded:(_Bool)arg2;
- (Class)_historyItemClass;
- (void)_removeItemsInResponseToUserAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_waitUntilHistoryHasLoadedMainThread;
- (id)_removeItemForURLString:(id)arg1;
- (void)_addItemToStringsForUserTypedDomainExpansion:(id)arg1;
- (void)_removeItemFromStringsForUserTypedDomainExpansion:(id)arg1;
- (id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 timeOfVisit:(double)arg3 wasHTTPNonGet:(_Bool)arg4 wasFailure:(_Bool)arg5 increaseVisitCount:(_Bool)arg6 origin:(long long)arg7 attributes:(unsigned long long)arg8;
- (void)_loadHistoryAsynchronouslyIfNeeded;
- (void)_dispatchHistoryItemWillChange:(id)arg1;
- (void)_dispatchHistoryVisitAdded:(id)arg1;
- (void)_dispatchHistoryItemsAdded:(id)arg1 byUserInitiatedAction:(_Bool)arg2;
- (void)_dispatchHistoryItemDidChange:(id)arg1 byUserInitiatedAction:(_Bool)arg2;
- (_Bool)canRecordRedirectFromVisit:(id)arg1 to:(id)arg2;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_setAttributes:(unsigned long long)arg1 forVisit:(id)arg2;
- (void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_dispatchHistoryCleared:(id)arg1;
- (void)vacuumHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_dispatchDidRemoveHostnames:(id)arg1;
- (void)performMaintenance:(CDUnknownBlockType)arg1;
- (void)_loadHistory;
- (id)_createHistoryStore;
- (void)_addItem:(id)arg1 addToStringsForUserTypedDomainExpansions:(_Bool)arg2;
- (void)_dispatchHistoryItemsLoaded:(id)arg1;
- (void)_dispatchHistoryItemsRemovedDuringLoading:(id)arg1;
- (void)_dispatchHistoryLoaded;
- (void)_dispatchHistoryItemsRemoved:(id)arg1;
- (id)_updateHostnameCountWithDeletedHistoryItems:(id)arg1;
- (void)_updateHostnameCountWithAddedHistoryItems:(id)arg1;
- (void)_sendNotification:(id)arg1 withItems:(id)arg2;
- (void)_addVisitedLinksForItemsIfNeeded:(id)arg1;
- (void)_clearHostnameCount;
- (void)historyLoader:(id)arg1 didLoadItems:(id)arg2 discardedItems:(id)arg3 stringsForUserTypeDomainExpansion:(id)arg4;
- (void)historyLoaderDidFinishLoading:(id)arg1;
- (void)historyStore:(id)arg1 didPrepareToDeleteWithDeletionPlan:(id)arg2;
- (_Bool)historyStoreShouldCheckDatabaseIntegrity:(id)arg1;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)arg1;
- (void)historyStore:(id)arg1 didAddVisits:(id)arg2;
- (void)historyStore:(id)arg1 didRemoveItems:(id)arg2;
- (void)historyStore:(id)arg1 didRemoveVisits:(id)arg2;
- (void)removeItemsInResponseToUserAction:(id)arg1;
- (void)_removeHistoryItemsInResponseToUserAction:(id)arg1;
- (void)addAutocompleteTrigger:(id)arg1 forURLString:(id)arg2;
- (_Bool)_isStringForUserTypedDomainExpansionInHistory:(id)arg1;
- (void)enumerateItemsAsynchronouslyUsingBlock:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)itemVisitedAtURLString:(id)arg1 title:(id)arg2 wasHTTPNonGet:(_Bool)arg3 wasFailure:(_Bool)arg4 increaseVisitCount:(_Bool)arg5;
- (void)addAttributes:(unsigned long long)arg1 toVisit:(id)arg2;
- (void)removeAttributes:(unsigned long long)arg1 fromVisit:(id)arg2;
- (void)addTagWithIdentifier:(id)arg1 title:(id)arg2 toItemAtURL:(id)arg3 level:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_unload;

@end
