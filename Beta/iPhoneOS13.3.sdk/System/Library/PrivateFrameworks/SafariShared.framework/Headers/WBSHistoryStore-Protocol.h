/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/Swift-Protocol.h>

@class NSData;

@protocol WBSHistoryStoreDelegate;

@protocol WBSHistoryStore <Swift>

@property (weak, nonatomic) id <WBSHistoryStoreDelegate> delegate;
@property (nonatomic) double historyAgeLimit;
@property (copy, nonatomic) NSData *pushThrottlerData;
@property (copy, nonatomic) NSData *fetchThrottlerData;
@property (copy, nonatomic) NSData *syncCircleSizeRetrievalThrottlerData;
@property (copy, nonatomic) NSData *longLivedSaveOperationData;
@property (nonatomic) unsigned long long cachedNumberOfDevicesInSyncCircle;
@property (nonatomic) _Bool pushNotificationsAreInitialized;
@property (nonatomic) _Bool syncsWithManateeContainer;
@property (nonatomic, readonly) _Bool isUsingInMemoryDatabase;

- (unsigned short)closeWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)checkIfLocalVisitExistsInAnyOfItems:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)setServerChangeTokenData: /* Error: Ran out of types for this method. */;
- (unsigned short)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getServerChangeTokenDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)pruneTombstonesWithEndDatePriorToDate: /* Error: Ran out of types for this method. */;
- (unsigned short)updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)resetCloudHistoryDataWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setLastSeenDate:forCloudClientVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)replayAndAddTombstones:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllTombstonesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)visitIdentifiersMatchingExistingVisits:populateAssociatedVisits:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removePastHistoryVisitsForItem:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)itemWasReplaced:byItem: /* Error: Ran out of types for this method. */;
- (unsigned short)lastSeenDateForCloudClientVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)visitsWereAdded: /* Error: Ran out of types for this method. */;
- (unsigned short)visitsWereModified: /* Error: Ran out of types for this method. */;
- (unsigned short)getVisitsCreatedAfterDate:beforeDate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)visitTitleWasUpdated: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTopicsFromStartDate:toEndDate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchTopicsFromStartDate:toEndDate:limit:minimumItemCount:sortOrder:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)assignHistoryItem:toTopicTags:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)tagsWithIdentifiers:type:level:creatingIfNecessary:withTitles:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setTitle:ofTag:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearHistoryVisitsAddedAfterDate:beforeDate:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)clearHistoryWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)vacuumHistoryWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)performMaintenance: /* Error: Ran out of types for this method. */;
- (unsigned short)itemsWereAdded:byUserInitiatedAction: /* Error: Ran out of types for this method. */;
- (unsigned short)itemsWereModified:byUserInitiatedAction: /* Error: Ran out of types for this method. */;
- (unsigned short)removeItemsOnDatabaseQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)removeVisitsOnDatabaseQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)addOrUpdateItemsOnDatabaseQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)allVisitsForItemsOnDatabaseQueue: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateLastVisitForItemsOnDatabaseQueue:ignoringVisits:enumerationBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enumeratePriorVisitsInRedirectChainOnDatabaseQueue:items:enumerationBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateSubsequentVisitsInRedirectChainOnDatabaseQueue:items:enumerationBlock: /* Error: Ran out of types for this method. */;

@end
