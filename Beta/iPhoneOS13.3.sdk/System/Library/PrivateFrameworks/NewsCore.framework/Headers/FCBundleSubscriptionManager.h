/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCBundleSubscription, FCBundleSubscriptionLookUpEntryManager, FCKeyValueStore, FCPurchaseLookupRecordSource, NFMutexLock, NSHashTable, NSString;

@protocol FCBundleChannelProviderType, FCBundleEntitlementsProviderType, FCCoreConfigurationManager, FCEntitlementsOverrideProviderType;

@interface FCBundleSubscriptionManager : NSObject

{
    id <FCBundleEntitlementsProviderType> _bundleEntitlementsProvider;
    FCPurchaseLookupRecordSource *_purchaseLookupRecordSource;
    FCBundleSubscription *_cachedSubscription;
    FCKeyValueStore *_localStore;
    FCBundleSubscriptionLookUpEntryManager *_bundleSubscriptionLookupEntryManager;
    NSHashTable *_observers;
    NFMutexLock *_accessLock;
    id <FCBundleChannelProviderType> _bundleChannelProvider;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property (nonatomic, readonly) id <FCBundleEntitlementsProviderType> bundleEntitlementsProvider;
@property (nonatomic, readonly) FCPurchaseLookupRecordSource *purchaseLookupRecordSource;
@property (retain, nonatomic) FCBundleSubscription *cachedSubscription;
@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (retain, nonatomic) FCBundleSubscriptionLookUpEntryManager *bundleSubscriptionLookupEntryManager;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NFMutexLock *accessLock;
@property (retain, nonatomic) id <FCBundleChannelProviderType> bundleChannelProvider;
@property (nonatomic, readonly) id <FCCoreConfigurationManager> configurationManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) FCBundleSubscription *bundleSubscription;
@property (retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)prepareForUseWithCompletion:(CDUnknownBlockType)arg1;
- (void)activityObservingApplicationDidEnterBackground;
- (void)setupCachedSubscription;
- (void)updateCachedSubscriptionWithSubscription:(id)arg1;
- (void)notifyObserversForSubscribedStateWithSubscription:(id)arg1;
- (id)changeSetBetween:(id)arg1 newSubscription:(id)arg2;
- (void)notifyObserversForChangeStateWithNewSubscription:(id)arg1 previousBundleSubscription:(id)arg2 changeSet:(id)arg3;
- (void)expireBundleSubscription;
- (void)notifyObserversForExpiredStateWithSubscription:(id)arg1;
- (void)refreshBundleSubscriptionWithCachePolicy:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bundleChannelProvider:(id)arg1 bundleChannelIDsDidChangeWithChannelIDs:(id)arg2;
- (id)bundleSubscriptionLookupEntry;
- (void)renewalNoticeShownWithPurchaseID:(id)arg1;
- (void)prewarmBundleTagIDsWithPurchaseID:(id)arg1;
- (void)clearBundleSubscription;
- (void)forceExpireBundleSubscriptionBasedOnInternalSettings;
- (id)initWithPrivateDataDirectory:(id)arg1 configurationManager:(id)arg2 purchaseLookupRecordSource:(id)arg3 appActivityMonitor:(id)arg4 entitlementsProvider:(id)arg5;

@end
