/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMapTable, NSString;

@protocol OS_dispatch_queue, REDonatedActionFilteredCacheDelegate;

@interface REDonatedActionFilteredCache : NSObject

{
    NSMapTable *_countsByActionType;
    NSMapTable *_countPerformedTodayByActionType;
    NSMapTable *_actions;
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_firstDonationDate;
    id <REDonatedActionFilteredCacheDelegate> _delegate;
}

@property (weak, nonatomic) id <REDonatedActionFilteredCacheDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchFirstPerformedActionDate:(CDUnknownBlockType)arg1;
- (void)donationActionStoreReceivedDonation:(id)arg1 isNewDonation:(_Bool)arg2;
- (void)donationActionStoreRemovedDonation:(id)arg1;
- (void)donationActionStoreRemovedDonationsFor:(id)arg1;
- (void)donationActionStoreRemoveAllDonations;
- (void)fetchDonationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_refreshAllDonations:(id)arg1;
- (id)_keyForAction:(id)arg1;
- (unsigned long long)_queue_performedCountForDonation:(id)arg1;
- (unsigned long long)_queue_performedTodayCountForBundleIdentifer:(id)arg1 actionIdentifier:(unsigned long long)arg2;
- (void)_queue_removeAllData;
- (void)_queue_storeDonation:(id)arg1;
- (void)_queue_removeDonation:(id)arg1;
- (void)_queue_removeDonationsForBundleIdentifier:(id)arg1;
- (void)_queue_incrementPerformedCountForDonation:(id)arg1;
- (void)fetchAllUniqueActions:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCountForAction:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)fetchPerformedCountForAction:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
