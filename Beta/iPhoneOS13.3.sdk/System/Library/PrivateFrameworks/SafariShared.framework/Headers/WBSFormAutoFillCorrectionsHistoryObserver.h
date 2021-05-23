/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, WBSCrowdsourcedFeedbackDomainNormalizer;

@protocol OS_dispatch_queue, OS_dispatch_source, WBSFormAutoFillCorrectionsStore;

@interface WBSFormAutoFillCorrectionsHistoryObserver : NSObject

{
    NSMutableArray *_pendingRemovedHistoryItemsToProcess;
    NSMutableArray *_pendingRemovedHistoryVisitsToProcess;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSObject<OS_dispatch_source> *_coalescingTimerSource;
    WBSCrowdsourcedFeedbackDomainNormalizer *_domainNormalizer;
    id <WBSFormAutoFillCorrectionsStore> _correctionsStore;
}

- (void)dealloc;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)_historyVisitsWereRemoved:(id)arg1;
- (void)_invalidateUpdateCoalescingTimer;
- (void)_updateCorrectionsStoreNow;
- (void)_updateCorrectionsStoreSoon;
- (id)_normalizeURL:(id)arg1;
- (id)initWithCorrectionsStore:(id)arg1;
- (void)flushPendingChangesAndDisconnectFromStoreAndHistory;

@end
