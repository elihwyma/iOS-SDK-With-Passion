/*
 Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/MSASAssetTransferer.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol MSASAssetDownloaderDelegate;

@interface MSASAssetDownloader : MSASAssetTransferer

{
    _Bool _didEncounterNetworkConditionError;
    _Bool _isDownloadingThumbnails;
    _Bool _isWaitingForFirstDownloadEvent;
    int _state;
    NSMutableArray *_itemsInFlight;
    NSMutableDictionary *_assetToItemInFlightMap;
    NSMutableArray *_finishedAssets;
    NSString *_currentFocusAlbumGUID;
    NSString *_currentFocusAssetCollectionGUID;
    NSString *_objectGUID;
    NSString *_downloadBatchPerfGUID;
}

@property (nonatomic) int state;
@property (retain, nonatomic) NSMutableArray *itemsInFlight;
@property (retain, nonatomic) NSMutableDictionary *assetToItemInFlightMap;
@property (retain, nonatomic) NSMutableArray *finishedAssets;
@property (nonatomic) _Bool didEncounterNetworkConditionError;
@property (nonatomic) _Bool isDownloadingThumbnails;
@property (retain, nonatomic) NSString *currentFocusAlbumGUID;
@property (retain, nonatomic) NSString *currentFocusAssetCollectionGUID;
@property (nonatomic) _Bool isWaitingForFirstDownloadEvent;
@property (retain, nonatomic) NSString *objectGUID;
@property (retain, nonatomic) NSString *downloadBatchPerfGUID;
@property (weak, nonatomic) id <MSASAssetDownloaderDelegate> delegate;

- (void)workQueueRetryOutstandingActivities;
- (void)unregisterAssets:(id)arg1;
- (id)_pathForPersonID:(id)arg1;
- (void)workQueueStop;
- (void)workQueueShutDownCompletionBlock:(CDUnknownBlockType)arg1;
- (void)workQueueCancel;
- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)didFinishPuttingAllAssets;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;
- (void)didFinishGettingAllAssets;
- (id)workQueueObjectGUID;
- (void)_workQueueGoIdle;
- (void)workQueueDownloadNextBatch;
- (void)registerAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)workQueueRegisterAssets:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)workQueueUnregisterAssets:(id)arg1;
- (void)didEnqueueAsset:(id)arg1 forAlbumGUID:(id)arg2;
- (void)_workQueueStopTrackingItem:(id)arg1;
- (void)_workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 error:(id)arg3;
- (id)_orphanedAssetError;

@end
