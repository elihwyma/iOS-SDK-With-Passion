/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <NSObject.h>

@class ATStoreDownloadService, NSMutableOrderedSet, NSMutableSet, NSString;

@protocol ATAssetLinkDelegate, OS_dispatch_queue;

@interface ATStoreMediaAssetLink : NSObject

{
    _Bool _open;
    id <ATAssetLinkDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_resumeQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableSet *_enqueuedDownloadAssets;
    NSMutableSet *_enqueuedRestoreAssets;
    NSMutableSet *_cancelledAssets;
    NSMutableSet *_resumableAssets;
    NSMutableOrderedSet *_downloadsPendingEnqueue;
    ATStoreDownloadService *_downloadService;
    _Bool _resumeAssetDownloadsActivity;
    _Bool _isNetworkConstrained;
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
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (unsigned long long)maximumBatchSize;
- (id)enqueueAssets:(id)arg1 force:(_Bool)arg2;
- (_Bool)canEnqueueAsset:(id)arg1;
- (void)cancelAssets:(id)arg1;
- (void)prioritizeAsset:(id)arg1;
- (_Bool)linkIsReady;
- (void)ATStoreDownloadService:(id)arg1 didEnqueueAsset:(id)arg2;
- (void)ATStoreDownloadService:(id)arg1 didChangeStateForAsset:(id)arg2 oldState:(long long)arg3 newState:(long long)arg4;
- (void)ATStoreDownloadService:(id)arg1 didUpdateProgressForAsset:(id)arg2 progress:(float)arg3;
- (void)ATStoreDownloadService:(id)arg1 didFinishAsset:(id)arg2 withError:(id)arg3 cancelPendingAssetsInBatch:(_Bool)arg4;
- (_Bool)_canEnqueueAssetUnderCurrentEnvironmentConditions:(id)arg1 didUpdatePauseReason:(_Bool *)arg2;
- (long long)_ATAssetStateForStoreDownloadState:(long long)arg1;
- (void)_finishAsset:(id)arg1 error:(id)arg2 cancelPendingAssetsInBatch:(_Bool)arg3;
- (void)_setupActivityToResumeDownloads;
- (void)ATStoreDownloadService:(id)arg1 didResumeAsset:(id)arg2;

@end
