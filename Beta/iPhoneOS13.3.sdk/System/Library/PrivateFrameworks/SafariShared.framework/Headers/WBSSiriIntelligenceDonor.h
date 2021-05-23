/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface WBSSiriIntelligenceDonor : NSObject

{
    NSObject<OS_dispatch_queue> *_coreSpotlightDonationSerialQueue;
}

+ (id)sharedInstance;
+ (id)coreSpotlightPageDonationIdentifier;
+ (id)historyItemIdentifierForURL:(id)arg1;
+ (id)_historyItemIdentifierForURLString:(id)arg1;
+ (id)_coreSpotlightItemIdentifierForURLString:(id)arg1;
+ (id)_bookmarkItemIdentifierForURLString:(id)arg1;

- (id)init;
- (void)_indexHistoryItemsToCoreSpotlight:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_computeCoreSpotlightIDsForBookmarks:(id)arg1;
- (id)_indexedBookmarksIDs:(id *)arg1;
- (void)_computeCoreSpotlightIndexingRequirementsForAllBookmarksIDs:(id)arg1 indexedBookmarksIDs:(id)arg2 outIndexIDs:(id *)arg3 outRemoveIDs:(id *)arg4;
- (void)_removeCoreSpotlightDataWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_searchableItemsForIDs:(id)arg1 allBookmarks:(id)arg2;
- (void)_indexCoreSpotlightData:(id)arg1;
- (void)_sanitizeAttributeSet:(id)arg1;
- (void)donateDataForPageWithURL:(id)arg1 fullPageText:(id)arg2 readerText:(id)arg3;
- (void)export30DaysWorthOfHistoryToCoreSpotlightWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)donateSafariBookmarksToCoreSpotlight:(id)arg1;
- (void)processRemovedHistoryItems:(id)arg1;
- (void)removeAllCoreSpotlightHistoryDataDonatedBySafari;

@end
