/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, WBSCloudHistoryFetchResult, WBSHistory;

@protocol OS_dispatch_queue;

@interface WBSCloudHistoryMergeOperation : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    WBSHistory *_history;
    WBSCloudHistoryFetchResult *_fetchResult;
    _Bool _mergeStarted;
    NSMutableDictionary *_visitsByVisitIdentifiers;
    NSMutableSet *_redirectChainEarliestVisits;
    NSSet *_tombstones;
    NSMutableDictionary *_tombstonesByURLString;
    NSSet *_existingVisits;
    NSSet *_redirectChainSourceVisits;
}

- (id)initWithHistory:(id)arg1 fetchResult:(id)arg2;
- (void)mergeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateClientVersions;
- (void)_buildVisitsByVisitIdentifiersMap;
- (void)_buildRedirectChains;
- (void)_filterVisitsByTombstones;
- (void)_removeDuplicateVisits;
- (void)_mergeVisitsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lookupRedirectChainSourcesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lookUpExistingItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_loadTombstonesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_replayAndAddTombstones:(CDUnknownBlockType)arg1;

@end
