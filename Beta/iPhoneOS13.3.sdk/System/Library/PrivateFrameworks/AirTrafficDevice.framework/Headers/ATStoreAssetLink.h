/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class NSMapTable, NSMutableDictionary, NSString, SSDownloadManager;

@protocol ATAssetLinkDelegate, OS_dispatch_queue;

@interface ATStoreAssetLink : NSObject

{
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_assetsByStoreID;
    NSMapTable *_downloadsByAsset;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _open;
    id <ATAssetLinkDelegate> _delegate;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isOpen) _Bool open;
@property (weak, nonatomic) id <ATAssetLinkDelegate> delegate;

- (id)init;
- (_Bool)open;
- (void)close;
- (unsigned long long)priority;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (unsigned long long)maximumBatchSize;
- (id)downloadManager;
- (id)enqueueAssets:(id)arg1 force:(_Bool)arg2;
- (_Bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)prioritizeAsset:(id)arg1;
- (_Bool)linkIsReady;
- (id)_assetForDownload:(id)arg1;
- (void)_enqueueAssets:(id)arg1;
- (void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(_Bool)arg3;
- (void)_updateInstallProgress:(double)arg1 forAsset:(id)arg2;
- (id)_downloadForAsset:(id)arg1 error:(id *)arg2;
- (id)_storeKindForAssetType:(id)arg1;
- (id)_dataClassForStoreKind:(id)arg1;
- (id)_assetTypeForStoreKind:(id)arg1;

@end
