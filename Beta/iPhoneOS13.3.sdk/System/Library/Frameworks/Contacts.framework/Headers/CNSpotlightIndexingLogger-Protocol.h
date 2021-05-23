/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@protocol CNSpotlightIndexingLogger <Swift>

- (unsigned short)indexingContacts: /* Error: Ran out of types for this method. */;
- (unsigned short)reindexingAllSearchableItems: /* Error: Ran out of types for this method. */;
- (unsigned short)willReindexItemsWithIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)reindexingSearchableItemsWithIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)deferringReindexAsFailedToPrepareForReindexing;
- (unsigned short)willStartIndexingWithClientState: /* Error: Ran out of types for this method. */;
- (unsigned short)noContactChangesToIndex;
- (unsigned short)willReindexAsFailedToRegisterForChangeHistory:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willReindexAsFailedToFetchChangeHistory:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willReindexAsChangeHistoryIsTruncated: /* Error: Ran out of types for this method. */;
- (unsigned short)willReindexAsFailedToFetchClientState;
- (unsigned short)willResumeReindexingAsNotFinished;
- (unsigned short)willReindexAsIndexVersionChangedFrom:to: /* Error: Ran out of types for this method. */;
- (unsigned short)willReindexAsSnapshotAnchorChangedFrom:to: /* Error: Ran out of types for this method. */;
- (unsigned short)willResumeIndexingAfterOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToCreateSearchableItemForContactIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)didNotFinishIndexingForFullSyncWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)finishedIndexingForFullSyncWithCount: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToFetchContactForChange: /* Error: Ran out of types for this method. */;
- (unsigned short)didNotFinishIndexingForDeltaSyncWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)finishedIndexingForDeltaSyncWithUpdateCount:deleteCount: /* Error: Ran out of types for this method. */;
- (unsigned short)finishedBatchIndexWithUpdateIdentifiers:deleteIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)willBatchIndexForFullSyncWithCount:lastOffset:doneFullSync: /* Error: Ran out of types for this method. */;
- (unsigned short)willBatchIndexForDeltaSyncWithUpdateCount:deleteCount: /* Error: Ran out of types for this method. */;
- (unsigned short)willClearChangeHistory:toChangeAnchor: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToClearChangeHistory:toChangeAnchor:error: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToFetchSearchableForContactIdentifiers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)verifyingIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)verifiedIndexWithSummmary: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToFetchClientStateFromSpotlight:willRetry: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToBeginIndexBatchWithSpotlight: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToEndIndexBatchWithSpotlight:willRetry: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToJournalSearchableItemsForIndexingWithSpotlight:identifiers:willRetry: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToJournalItemIdentifiersForDeletionWithSpotlight:identifiers:willRetry: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToDeleteAllSearchableItemsWithSpotlight:willRetry: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToUnarchiveClientStateData: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToCreateUnarchiverForClientStateWithError: /* Error: Ran out of types for this method. */;

@end
