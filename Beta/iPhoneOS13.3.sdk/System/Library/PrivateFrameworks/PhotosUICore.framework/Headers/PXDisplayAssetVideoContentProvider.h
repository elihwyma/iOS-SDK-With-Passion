/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXVideoContentProvider.h>

@class NSMutableDictionary, NSObject, NSString, PXMediaProvider;

@protocol OS_dispatch_queue, PXDisplayAsset;

@interface PXDisplayAssetVideoContentProvider : PXVideoContentProvider

{
    long long _videoRequestID;
    NSObject<OS_dispatch_queue> *_loadingQueue;
    NSObject<OS_dispatch_queue> *_postprocessingQueue;
    NSMutableDictionary *_loadingQueue_requestsByPriority;
    long long _loadingQueue_lastRequestedPriority;
    id <PXDisplayAsset> _loadingQueue_asset;
    NSString *_contentIdentifier;
    PXMediaProvider *_mediaProvider;
}

@property (retain, nonatomic) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) _Bool needsPostprocessing;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancelLoading;
- (id)contentIdentifier;
- (void)requestLoadingProgressDidChange:(id)arg1;
- (void)request:(id)arg1 didFinishWithPlayerItem:(id)arg2 info:(id)arg3;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (void)beginLoadingWithPriority:(long long)arg1;
- (id)postprocessPlayerItem:(id)arg1;
- (void)reloadContent;
- (void)_loadingQueue_setAsset:(id)arg1;
- (void)_loadingQueueBeginLoadingWithPriority:(long long)arg1;
- (void)_loadingQueue_cancelAllRequests;
- (void)_loadingQueue_beginRequestForPriorityIfNeeded:(long long)arg1;
- (_Bool)_loadingQueue_needsNewRequestForPriority:(long long)arg1;
- (void)_postprocessingQueue_performPostprocessingOfItem:(id)arg1 info:(id)arg2 priority:(long long)arg3;
- (void)_loadingQueue_reloadContent;

@end
