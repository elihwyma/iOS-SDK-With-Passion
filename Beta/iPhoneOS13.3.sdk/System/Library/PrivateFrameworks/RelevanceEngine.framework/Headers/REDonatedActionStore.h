/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REObservableSingleton.h>

@class NSObject, REUpNextScheduler;

@protocol OS_dispatch_queue;

@interface REDonatedActionStore : REObservableSingleton

{
    _Bool _isMonitoringLockState;
    _Bool _synchronized;
    NSObject<OS_dispatch_queue> *_queue;
    REUpNextScheduler *_donationsScheduler;
    REUpNextScheduler *_deletionsScheduler;
}

- (void)dealloc;
- (id)_init;
- (void)start;
- (id)callbackQueue;
- (void)_queue_distributeRecentDonatedActions;
- (void)_queue_distributeRecentDeletedActions;
- (_Bool)_shouldLimitQueries;
- (void)_queue_distributeAllDonatedActions;
- (void)_subscribeToNotifications;
- (void)_notified_addDonatedActionsForInstalledApps:(id)arg1;
- (void)_notified_removeDonatedActionsForUninstalledApps:(id)arg1;
- (void)_notified_removeThenDistributeAllActions:(id)arg1;
- (void)_notified_distributeRecentDonatedActions:(id)arg1;
- (void)_notified_distributeRecentDeletedActions:(id)arg1;
- (void)_beginLoadingData;
- (void)_finishLoadingData:(unsigned long long)arg1;
- (void)_queue_distributeAllDonatedActionsWithIdentifier:(id)arg1;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)synchronizeDonationsIfNecessary;
- (void)triggerDistributeAllDonatedActions:(_Bool)arg1;

@end
