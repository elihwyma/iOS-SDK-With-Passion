/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

#import <SafariShared/Swift-Protocol.h>

@class NSArray, NSCountedSet, NSData, NSDate, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSTimer, NSURL, WBSHistoryCrypto, WBSHistoryTagDatabaseController, WBSPeriodicActivityScheduler, WBSSQLiteDatabase, WBSSQLiteStatementCache;

@protocol OS_dispatch_queue, WBSHistoryStoreDelegate;

@interface WBSHistorySQLiteStore : NSObject <Swift>

{
    NSURL *_databaseURL;
    unsigned long long _itemCountLimit;
    Class _historyItemClass;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    WBSSQLiteStatementCache *_statements;
    NSMutableDictionary *_clientVersions;
    NSMutableDictionary *_itemsByDatabaseID;
    NSMapTable *_weakVisitsByDatabaseID;
    NSMutableSet *_pendingAddsOrUpdates;
    NSMutableSet *_pendingDeletes;
    NSMutableSet *_pendingVisitDeletes;
    NSMutableSet *_pendingTombstones;
    _Bool _commitGenerationValuesOnNextWrite;
    long long _currentGeneration;
    long long _lastSyncedGeneration;
    NSData *_pushThrottlerData;
    NSData *_fetchThrottlerData;
    NSData *_syncCircleSizeRetrievalThrottlerData;
    long long _cachedNumberOfDevicesInSyncCircle;
    _Bool _loadInProgress;
    NSArray *_loadedItems;
    NSArray *_discardedItems;
    NSCountedSet *_loadedStringsForUserTypedDomainExpansion;
    NSDate *_loadStartTime;
    NSTimer *_writeTimer;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    _Bool _isClosed;
    NSDate *_lastMaintenanceDate;
    _Bool _writeLastMaintenanceDateOnNextWrite;
    _Bool _checkpointWriteAheadLogOnNextWrite;
    WBSPeriodicActivityScheduler *_maintenanceScheduler;
    WBSHistoryTagDatabaseController *_tagController;
    _Bool _pushNotificationsAreInitialized;
    _Bool _syncsWithManateeContainer;
    id <WBSHistoryStoreDelegate> _delegate;
    double _historyAgeLimit;
    WBSSQLiteDatabase *_database;
    WBSHistoryCrypto *_crypto;
}

@property (nonatomic, readonly) WBSSQLiteDatabase *database;
@property (nonatomic, readonly) WBSHistoryCrypto *crypto;
@property (weak, nonatomic) id <WBSHistoryStoreDelegate> delegate;
@property (copy, nonatomic) NSData *pushThrottlerData;
@property (copy, nonatomic) NSData *fetchThrottlerData;
@property (copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData;
@property (copy, nonatomic) NSData *longLivedSaveOperationData;
@property (nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property (nonatomic) _Bool pushNotificationsAreInitialized;
@property (nonatomic) double historyAgeLimit;
@property (nonatomic, readonly) NSData *salt;
@property (nonatomic) _Bool syncsWithManateeContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isUsingInMemoryDatabase;

- (void)dealloc;
- (id).cxx_construct;
- (void)startLoading;
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)_currentGeneration;
- (void)checkIfLocalVisitExistsInAnyOfItems:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_checkDatabaseIntegrity;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
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
- (void)removePastHistoryVisitsForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)itemWasReplaced:(id)arg1 byItem:(id)arg2;
- (id)lastSeenDateForCloudClientVersion:(unsigned long long)arg1;
- (void)visitsWereAdded:(id)arg1;
- (void)visitsWereModified:(id)arg1;
- (void)getVisitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)visitTitleWasUpdated:(id)arg1;
- (void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchTopicsFromStartDate:(id)arg1 toEndDate:(id)arg2 limit:(unsigned long long)arg3 minimumItemCount:(unsigned long long)arg4 sortOrder:(long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)assignHistoryItem:(id)arg1 toTopicTags:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tagsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2 level:(long long)arg3 creatingIfNecessary:(_Bool)arg4 withTitles:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)setTitle:(id)arg1 ofTag:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)vacuumHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performMaintenance:(CDUnknownBlockType)arg1;
- (void)_loadHistory;
- (void)waitForLoadingToComplete;
- (void)itemsWereAdded:(id)arg1 byUserInitiatedAction:(_Bool)arg2;
- (void)itemsWereModified:(id)arg1 byUserInitiatedAction:(_Bool)arg2;
- (void)removeItemsOnDatabaseQueue:(id)arg1;
- (void)removeVisitsOnDatabaseQueue:(id)arg1;
- (void)addOrUpdateItemsOnDatabaseQueue:(id)arg1;
- (id)allVisitsForItemsOnDatabaseQueue:(id)arg1;
- (void)enumerateLastVisitForItemsOnDatabaseQueue:(id)arg1 ignoringVisits:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:(id)arg1 items:(id)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (void)_processPendingWrites;
- (void)_finishLoadingOnMainThreadIfNeeded;
- (void)_updateGenerationForVisits:(id)arg1;
- (id)_visitsCreatedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 addingTombstone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)_shouldEmitLegacyTombstones;
- (void)_clearHistoryVisitsMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 addingTombstone:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_insertTombstone:(id)arg1;
- (void)_removeVisitsProvidedByBlockInvokedOnDatabaseQueue:(CDUnknownBlockType)arg1 addingTombstone:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_visitsCreatedMatchingURLString:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3;
- (id)_visitsCreatedMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4;
- (void)_incrementCurrentGeneration;
- (id)_visitsNeedingSyncWithVisitSyncWindow:(double)arg1;
- (id)_tombstonesNeedingSync;
- (void)_updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 convertTombstonesToSecureFormat:(_Bool)arg2;
- (long long)_lastSyncedGeneration;
- (void)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1;
- (void)_setLastSyncedGeneration:(unsigned long long)arg1;
- (id)_visitsFromRows:(id)arg1 predicate:(CDUnknownBlockType)arg2;
- (id)visitForRow:(id)arg1;
- (id)_metadataDataValueForKey:(id)arg1;
- (void)_setMetadataDataValue:(id)arg1 forKey:(id)arg2;
- (void)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1;
- (void)_setMetadataInt64Value:(long long)arg1 forKey:(id)arg2;
- (void)_clearHistoryVisitsMatchingURLHash:(id)arg1 salt:(id)arg2 afterDate:(id)arg3 beforeDate:(id)arg4 addingTombstone:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (long long)_metadataInt64ValueForKey:(id)arg1;
- (void)_scheduleWrite;
- (id)existingItemFromVisitRow:(id)arg1;
- (id)visitForItem:(id)arg1 row:(id)arg2;
- (id)_tagsWithIdentifiers:(id)arg1 titles:(id)arg2 ofType:(unsigned long long)arg3 level:(long long)arg4 creatingIfNeeded:(_Bool)arg5 createdTags:(id *)arg6 error:(id *)arg7;
- (id)_fetchHistoryTagsWithPredicate:(id)arg1 error:(id *)arg2;
- (id)_createHistoryTagsWithIdentifiers:(id)arg1 titles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id *)arg5;
- (Class)_classForHistoryTagType:(unsigned long long)arg1;
- (_Bool)_populateHistoryItemsInHistoryTopicTag:(id)arg1 fromStartDate:(id)arg2 toEndDate:(id)arg3 error:(id *)arg4;
- (void)_openDatabase:(id)arg1 andCheckIntegrity:(_Bool)arg2;
- (void)_finishLoadingOnMainThread;
- (void)_registerHistoryTagFrecencyScoringFunction;
- (void)_loadFromDatabase;
- (void)_loadRedirectVisitsForLoadedItems:(id)arg1;
- (double)_ageLimitSinceReferenceDate;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircleOnDatabaseQueue;
- (void)_loadClientVersions;
- (void)_scheduleMaintenance;
- (void)_writeTimerFired;
- (void)_processPendingDeletes;
- (void)_insertItem:(id)arg1;
- (void)_updateItem:(id)arg1;
- (void)_updateVisitRedirectRelationships:(id)arg1;
- (void)_checkpointWriteAheadLog;
- (void)_processPendingVisitDeletes;
- (void)_insertVisit:(id)arg1;
- (void)_updateVisit:(id)arg1;
- (id)_lastSeenDateForCloudClientVersionOnDatabaseQueue:(unsigned long long)arg1;
- (id)_deletionPlanForDeletionOfVisits:(id)arg1;
- (void)_performMaintenance:(CDUnknownBlockType)arg1;
- (void)_recomputeDerivedVisitCountScores;
- (void)_expireOldVisits;
- (void)_enforceAgeAndItemCountLimits:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 itemCountLimit:(unsigned long long)arg2 historyAgeLimit:(double)arg3 historyItemClass:(Class)arg4;
- (_Bool)_shouldMigrateFromPropertyListWhenLoadingDatabase:(id)arg1;
- (int)_setOrigin:(long long)arg1 forVisitsFromOrigin:(long long)arg2;
- (id)_visitsWithOrigins:(id)arg1;

@end
