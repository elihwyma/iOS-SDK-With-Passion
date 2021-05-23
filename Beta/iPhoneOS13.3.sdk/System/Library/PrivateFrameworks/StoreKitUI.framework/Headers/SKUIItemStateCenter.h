/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class ASDJobManager, ASDSoftwareUpdatesStore, NSCountedSet, NSDate, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, SKUIStoreItemRelationshipCounsellor, SSAppPurchaseHistoryDatabase, SSDownloadManager, SSSoftwareUpdatesStore;

@protocol OS_dispatch_queue;

@interface SKUIItemStateCenter : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _appInstallRestricted;
    ASDSoftwareUpdatesStore *_appstoredUpdatesStore;
    ASDJobManager *_jobManager;
    BOOL _canAccessAppUpdates;
    BOOL _canAccessPurchaseHistory;
    SSDownloadManager *_downloadManager;
    NSMutableArray *_finishLoadBlocks;
    long long _gratisState;
    NSDate *_gratisStateLastUpdate;
    long long _loadCount;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_mediaLibraryQueue;
    NSMutableArray *_mediaLibraries;
    NSCountedSet *_observedLibraryItems;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    long long _parentalControlsRank;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
    SKUIStoreItemRelationshipCounsellor *_relationshipCouncellor;
    BOOL _runningInStoreDemoMode;
}

@property (readonly) SSSoftwareUpdatesStore *appUpdatesStore;
@property (readonly) ASDSoftwareUpdatesStore *appstoredUpdatesStore;
@property (readonly, getter=isApplicationInstallRestricted) _Bool applicationInstallRestricted;
@property (nonatomic, readonly, getter=isGratisEligible) _Bool gratisEligible;
@property (readonly) long long parentalControlsRank;
@property (readonly, getter=isRunningInStoreDemoMode) _Bool runningInStoreDemoMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultCenter;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)addDownloads:(id)arg1;
- (void)reloadFromServer;
- (void)_setDownloads:(id)arg1;
- (void)downloadQueue:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadQueue:(id)arg1 downloadStates:(id)arg2 didCompleteWithError:(id)arg3;
- (void)getUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)_purchaseHistoryDatabase;
- (void)jobManager:(id)arg1 changedJobs:(id)arg2;
- (void)jobManager:(id)arg1 completedJobs:(id)arg2;
- (void)jobManager:(id)arg1 updatedProgressOfJobs:(id)arg2;
- (void)jobManager:(id)arg1 updatedStateOfJobs:(id)arg2;
- (id)_jobManager;
- (void)evaluatePurchaseResponseForRentals:(id)arg1;
- (void)_reloadAppUpdatesStore;
- (void)_reloadDownloadManager;
- (void)_reloadJobManager;
- (void)_reloadPurchaseHistory;
- (void)_reloadSoftwareLibrary;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_storefrontDidChangeNotification:(id)arg1;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)_fireFinishLoadBlocksIfNecessary;
- (id)stateForItemWithIdentifier:(long long)arg1;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)performActionForSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)metricsActionTypeForItem:(id)arg1;
- (void)purchaseItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)cancelDownloadForItemWithIdentifier:(long long)arg1;
- (void)purchaseSoftwareItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_newPurchasesWithBundleItem:(id)arg1 bundleOffer:(id)arg2;
- (id)_newPurchaseWithItem:(id)arg1 offer:(id)arg2;
- (void)_performPurchases:(id)arg1 hasBundlePurchase:(_Bool)arg2 withClientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_newPurchasesForSoftwareWithBundleItem:(id)arg1 bundleOffer:(id)arg2;
- (id)_newSoftwarePurchaseWithItem:(id)arg1 offer:(id)arg2;
- (void)_performSoftwarePurchases:(id)arg1 withClientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)purchaseItems:(id)arg1 withClientContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_newPurchasesWithItems:(id)arg1;
- (_Bool)_gratisStateIsValid;
- (void)_setGratisIdentifiers:(id)arg1 error:(id)arg2;
- (void)_reloadStateForObservedMediaLibraryItems;
- (id)_addState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (void)_notifyObserversOfStateChange:(id)arg1;
- (id)_removeState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (id)_appstoredUpdatesStore;
- (void)_reloadMediaLibraryStateForItems:(id)arg1;
- (id)_setStateFlag:(unsigned long long)arg1 forItemsWithIdentifiers:(id)arg2 sendNotification:(_Bool)arg3;
- (id)stateForItemWithStoreIdentifier:(id)arg1;
- (void)_setAvailableAppstoredUpdatesWithUpdates:(id)arg1 decrementLoadCount:(_Bool)arg2;
- (void)performActionForLibraryItem:(id)arg1;
- (id)_downloadPhaseForJobPhase:(long long)arg1;
- (id)_copyItemsStatesForLibraryItems:(id)arg1;
- (void)_notifyObserversOfMediaLibraryChange;
- (void)_notifyObserversOfRestrictionsChange;
- (void)_appstoredUpdatesStoreChangeNotification:(id)arg1;
- (void)_enumerateAvailableItemsForLibraryItems:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_isPurchaseForOffDeviceContent:(id)arg1;
- (void)_replacePurchasingItem:(id)arg1 withDownloadIDs:(id)arg2;
- (void)_notifyObserversOfPurchasesResponses:(id)arg1;
- (void)_removePurchasingItemsForPurchases:(id)arg1;
- (void)_notifyObserversOfSoftwarePurchasesResponses:(id)arg1;
- (void)_updatesSoftwarePurchasingItemsForPurchases:(id)arg1 purchaseWasSuccessful:(_Bool)arg2;
- (void)_setJobs:(id)arg1;
- (void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg1;
- (void)_setFirstPartyRemovableItemsIdentifiers:(id)arg1;
- (void)_setPurchaseHistoryVPPItemsWithIdentifiers:(id)arg1;
- (void)_setInstalledItems:(id)arg1;
- (id)_setStateFlag:(unsigned long long)arg1 forOnlyItemsWithIdentifiers:(id)arg2 sendNotification:(_Bool)arg3;
- (void)addMediaLibrary:(id)arg1;
- (void)finishLoadingWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isItemRestrictedWithParentalControlsRank:(long long)arg1;
- (id)performActionForItem:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2;
- (void)purchaseItems:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (void)reloadMediaLibrary:(id)arg1;
- (void)removeMediaLibrary:(id)arg1;
- (void)addManifestDownloadWithURL:(id)arg1 placeholderMetadata:(id)arg2;
- (void)beginObservingLibraryItems:(id)arg1;
- (void)endObservingLibraryItems:(id)arg1;
- (void)getSoftwareUpdatesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)reloadSoftwareUpdatesFromServerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)findLibraryItemsForContentIdentifiers:(id)arg1 options:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)gratisEligibleItemIdentifiers;
- (void)purchaseTone:(id)arg1 withProperties:(id)arg2 clientContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)addRelationshipForParentAdamId:(id)arg1 withChildAdamIds:(id)arg2;
- (void)removeRelationshipsForParentAdamId:(id)arg1;
- (void)_updatesStoreChangeNotification:(id)arg1;

@end
