/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, REDonatedActionFilteredCache, RERelevanceEngine, REUpNextScheduler;

@protocol OS_dispatch_queue, REMLElementRanker;

@interface REDonatedActionsApplicationStore : NSObject

{
    REDonatedActionFilteredCache *_cache;
    REUpNextScheduler *_scheduler;
    REUpNextScheduler *_applicationScheduler;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_applications;
    RERelevanceEngine *_filteringEngine;
    id <REMLElementRanker> _elementRanker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)_notify;
- (id)initWithLocationManager:(id)arg1;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)donatedActionFilteredCacheDonationRemoved;
- (void)donatedActionFilteredCacheDidAddDonation:(id)arg1;
- (void)donatedActionFilteredCacheCountDidChange;
- (void)_notifyApplicationsUpdates;
- (void)_queue_loadApplicationsIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_shouldFilterDonation:(id)arg1;
- (void)_sortDonationsByCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchApplicationsProvidingDonations:(CDUnknownBlockType)arg1;
- (void)fetchTopDonationsForApplications:(id)arg1 fromOnlyRecentPlatform:(_Bool)arg2 block:(CDUnknownBlockType)arg3;
- (void)fetchAllUniqueDonationsWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPerformedCountForAction:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
