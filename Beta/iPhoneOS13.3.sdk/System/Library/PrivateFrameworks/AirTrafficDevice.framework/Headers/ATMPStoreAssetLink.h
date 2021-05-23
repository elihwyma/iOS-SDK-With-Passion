/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class MPStoreDownloadManager, NSMutableDictionary, NSString;

@protocol ATAssetLinkDelegate, OS_dispatch_queue;

@interface ATMPStoreAssetLink : NSObject

{
    _Bool _open;
    id <ATAssetLinkDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MPStoreDownloadManager *_downloadManager;
    NSMutableDictionary *_assetMap;
    NSMutableDictionary *_downloadsMap;
}

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
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 didAddActiveDownloads:(id)arg2 removeActiveDownloads:(id)arg3;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;
- (unsigned long long)maximumBatchSize;
- (id)enqueueAssets:(id)arg1 force:(_Bool)arg2;
- (_Bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)prioritizeAsset:(id)arg1;
- (_Bool)linkIsReady;
- (void)_enqueueAssets:(id)arg1;
- (void)_finishAsset:(id)arg1 error:(id)arg2 retryable:(_Bool)arg3;
- (id)_dataClassForStoreKind:(id)arg1;
- (id)_assetTypeForStoreKind:(id)arg1;
- (id)_errorForFinishedDownload:(id)arg1;

@end
