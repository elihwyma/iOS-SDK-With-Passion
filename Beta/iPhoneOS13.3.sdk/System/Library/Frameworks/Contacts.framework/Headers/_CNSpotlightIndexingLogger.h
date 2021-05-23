/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_os_log;

@interface _CNSpotlightIndexingLogger : NSObject

{
    NSObject<OS_os_log> *_log;
    NSObject<OS_os_log> *_summaryLog;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSObject<OS_os_log> *summaryLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)indexingContacts:(CDUnknownBlockType)arg1;
- (void)reindexingAllSearchableItems:(CDUnknownBlockType)arg1;
- (void)willReindexItemsWithIdentifiers:(id)arg1;
- (void)reindexingSearchableItemsWithIdentifiers:(CDUnknownBlockType)arg1;
- (void)deferringReindexAsFailedToPrepareForReindexing;
- (void)willStartIndexingWithClientState:(id)arg1;
- (void)noContactChangesToIndex;
- (void)willReindexAsFailedToRegisterForChangeHistory:(id)arg1 error:(id)arg2;
- (void)willReindexAsFailedToFetchChangeHistory:(id)arg1 error:(id)arg2;
- (void)willReindexAsChangeHistoryIsTruncated:(id)arg1;
- (void)willReindexAsFailedToFetchClientState;
- (void)willResumeReindexingAsNotFinished;
- (void)willReindexAsIndexVersionChangedFrom:(long long)arg1 to:(long long)arg2;
- (void)willReindexAsSnapshotAnchorChangedFrom:(id)arg1 to:(id)arg2;
- (void)willResumeIndexingAfterOffset:(long long)arg1;
- (void)failedToCreateSearchableItemForContactIdentifier:(id)arg1;
- (void)didNotFinishIndexingForFullSyncWithError:(id)arg1;
- (void)finishedIndexingForFullSyncWithCount:(unsigned long long)arg1;
- (void)failedToFetchContactForChange:(id)arg1;
- (void)didNotFinishIndexingForDeltaSyncWithError:(id)arg1;
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)finishedBatchIndexWithUpdateIdentifiers:(id)arg1 deleteIdentifiers:(id)arg2;
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)arg1 lastOffset:(long long)arg2 doneFullSync:(_Bool)arg3;
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;
- (void)willClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2;
- (void)failedToClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2 error:(id)arg3;
- (void)failedToFetchSearchableForContactIdentifiers:(id)arg1 error:(id)arg2;
- (void)verifyingIndex:(CDUnknownBlockType)arg1;
- (void)verifiedIndexWithSummmary:(id)arg1;
- (void)failedToFetchClientStateFromSpotlight:(id)arg1 willRetry:(_Bool)arg2;
- (void)failedToBeginIndexBatchWithSpotlight:(id)arg1;
- (void)failedToEndIndexBatchWithSpotlight:(id)arg1 willRetry:(_Bool)arg2;
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(_Bool)arg3;
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(_Bool)arg3;
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(id)arg1 willRetry:(_Bool)arg2;
- (void)failedToUnarchiveClientStateData:(id)arg1;
- (void)failedToCreateUnarchiverForClientStateWithError:(id)arg1;
- (id)_stringForSpotlightError:(id)arg1 willRetry:(_Bool)arg2;

@end
