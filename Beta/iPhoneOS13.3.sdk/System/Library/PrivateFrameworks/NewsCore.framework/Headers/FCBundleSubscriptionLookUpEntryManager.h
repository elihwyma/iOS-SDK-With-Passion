/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCBundleSubscriptionLookUpEntry, FCKeyValueStore;

@interface FCBundleSubscriptionLookUpEntryManager : NSObject

{
    FCBundleSubscriptionLookUpEntry *_bundleSubscriptionLookUpEntry;
    FCKeyValueStore *_localStore;
}

@property (retain, nonatomic) FCBundleSubscriptionLookUpEntry *bundleSubscriptionLookUpEntry;
@property (retain, nonatomic) FCKeyValueStore *localStore;

- (void)loadLocalCachesFromStore;
- (id)initWithLocalStore:(id)arg1;
- (void)updateEntry:(id)arg1;
- (void)cleanupStaleExpiredEntry;
- (void)addBundleChannelIDs:(id)arg1 purchaseID:(id)arg2 inTrialPeriod:(_Bool)arg3 isPurchaser:(_Bool)arg4 isAmplifyUser:(_Bool)arg5;
- (id)_bundleSubscriptionLookupEntryForPurchaseID:(id)arg1;

@end
