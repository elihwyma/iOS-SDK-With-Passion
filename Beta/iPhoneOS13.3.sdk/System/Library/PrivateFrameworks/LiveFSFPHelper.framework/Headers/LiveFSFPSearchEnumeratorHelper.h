/*
 Image: /System/Library/PrivateFrameworks/LiveFSFPHelper.framework/LiveFSFPHelper
 */

@class NSFileProviderSearchQuery, NSMutableArray, NSObject, NSSortDescriptor;

@protocol OS_dispatch_queue;

@interface LiveFSFPSearchEnumeratorHelper

{
    NSFileProviderSearchQuery *_ourSearchQuery;
    NSMutableArray *searchResults;
    NSObject<OS_dispatch_queue> *_searchWorkQueue;
    NSMutableArray *_pendingReaderBlocks;
    NSSortDescriptor *_sortD;
}

@property (retain) NSSortDescriptor *sortD;

+ (id)criteriaForQuery:(id)arg1;
+ (id)newForQuery:(id)arg1 withExtension:(id)arg2;

- (void)start;
- (void)enumerateItemsForObserver:(id)arg1 startingAtPage:(id)arg2;
- (id)initForQuery:(id)arg1 withExtension:(id)arg2;
- (void)scheduleReaders;
- (CDUnknownBlockType)copySearchResultBlock;
- (CDUnknownBlockType)copySearchCompletionBlock;
- (void)finallyEnumerateItemsForObserver:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)waitForSearchResultsForObserver:(id)arg1 startingAtPage:(id)arg2;

@end
