/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, WBSHistoryService, WBSURLCompletionHistorySnapshot;

@protocol OS_dispatch_queue;

@interface WBSHistoryURLCompletionDataStore : NSObject

{
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_dataStoreQueue;
    NSDate *_snapshotLastModifiedDate;
    WBSURLCompletionHistorySnapshot *_snapshot;
}

- (id)initWithHistoryService:(id)arg1;
- (void)_loadFromDatabaseIfNecessary;
- (Ref_acc025bb)_completionItemFromRow:(id)arg1;
- (void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (RefPtr_ed2a6bdb)_completionItemFromDatabase:(id)arg1 withVisitDatabaseID:(long long)arg2;
- (void)getSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
