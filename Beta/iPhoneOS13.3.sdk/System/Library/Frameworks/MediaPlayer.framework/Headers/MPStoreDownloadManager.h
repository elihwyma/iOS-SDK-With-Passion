/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSString, SSDownloadManager, SSPurchaseManager;

@protocol OS_dispatch_queue;

@interface MPStoreDownloadManager : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSArray *_activeDownloads;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    NSMutableArray *_blockObservers;
    NSDictionary *_downloadKindToRequiredClientBundleIdentifiers;
    NSMutableArray *_downloads;
    NSMutableArray *_userDownloads;
    NSMapTable *_downloadIdentifiersToDownloads;
    NSMapTable *_downloadsToObservers;
    NSMapTable *_libraryIdentifiersToDownloads;
    NSHashTable *_observersForAllDownloads;
    NSMapTable *_storeIdentifiersToDownloads;
    _Bool _fetchedInitialDownloads;
    SSDownloadManager *_downloadManager;
    SSPurchaseManager *_purchaseManager;
}

@property (nonatomic, readonly) NSArray *activeDownloads;
@property (nonatomic, readonly) NSArray *downloads;
@property (nonatomic, readonly) NSArray *userDownloads;
@property (nonatomic, readonly, getter=isUsingNetwork) _Bool usingNetwork;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_init;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (void)cancelDownloads:(id)arg1;
- (id)activeDownloadForMediaItemPersistentID:(unsigned long long)arg1;
- (id)activeDownloadForStoreID:(long long)arg1;
- (id)downloadForMediaPlaybackItemMetadata:(id)arg1;
- (id)_observersForAllDownloads;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (id)addDownloads:(id)arg1;
- (void)addFinishHandler:(CDUnknownBlockType)arg1 forDownloads:(id)arg2;
- (void)addObserver:(id)arg1 forDownloads:(id)arg2;
- (void)pauseDownloads:(id)arg1;
- (void)resumeDownloads:(id)arg1;
- (void)restartDownloads:(id)arg1;
- (id)downloadForDownloadPersistentIdentifier:(long long)arg1;
- (id)downloadForMediaItem:(id)arg1;
- (id)downloadForMediaItemPersistentID:(unsigned long long)arg1;
- (id)downloadForStoreID:(long long)arg1;
- (void)prioritizeDownloads:(id)arg1;
- (void)removeObserver:(id)arg1 forDownloads:(id)arg2;
- (void)reloadFromServer;
- (void)requestPermissionToDownloadWithType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addPurchaseFinishedHandler:(CDUnknownBlockType)arg1 forDownloads:(id)arg2;
- (void)_addStoreDownloadForRedownloadProductItem:(id)arg1;
- (_Bool)hasFetchedInitialDownloads;
- (id)_existingDownloadForSSDownload:(id)arg1;
- (id)_observersForDownload:(id)arg1;
- (void)_onQueue_addDownloadToMapTables:(id)arg1;
- (id)_onQueue_findStoreDownloadWithSSDownload:(id)arg1 SSPurchase:(id)arg2;
- (_Bool)_onQueue_hasExistingDownloadForStoreDownload:(id)arg1;
- (void)_onQueue_removeDownloadFromMapTables:(id)arg1;
- (void)_registerBlockObserver:(id)arg1;
- (void)_sendActiveDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2;
- (void)_sendDownloadsDidChangeToObserversWithAddedDownloads:(id)arg1 removedDownloads:(id)arg2;
- (void)_sendDownloadsDidFinishPurchasesToObserversForDownloads:(id)arg1;
- (void)_sendDownloadsDidFinishToObserversForDownloads:(id)arg1 notifyDownloadManager:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendDownloadsDidProgressToObserversForDownloads:(id)arg1;
- (_Bool)_shouldHideDownload:(id)arg1;
- (void)_unregisterBlockObserver:(id)arg1;
- (void)_updateActiveDownloadsWithChangedActiveDownloads:(id)arg1 inactiveDownloads:(id)arg2;
- (void)_updateDownloadsWithAdditions:(id)arg1 removals:(id)arg2;
- (void)_updateMediaItemPropertiesForFinishedStoreDownload:(id)arg1 SSDownload:(id)arg2;
- (void)_addNonCancelledDownloadsToActiveList:(id)arg1;
- (void)_updateActiveDownloadsWithCancelledDownloads:(id)arg1;
- (_Bool)_isActiveDownload:(id)arg1;

@end
