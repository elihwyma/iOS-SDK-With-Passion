/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGTextureProvider.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString, PXGAssetImageCache, PXGImageRequestQueue, PXGThumbnailRequestQueue, PXMediaProvider;

@protocol OS_dispatch_queue, PXGDisplayAssetPixelBufferSourcesProvider;

@interface PXGDisplayAssetTextureProvider : PXGTextureProvider

{
    NSObject<OS_dispatch_queue> *_videoSessionsRequestQueue;
    PXGThumbnailRequestQueue *_requestQueue_thumbnailRequestQueue;
    NSMapTable *_workQueue_videoSessionsByAsset;
    NSMutableIndexSet *_workQueue_textureRequestIDsWithDeliveredVideoFrames;
    PXGThumbnailRequestQueue *_workQueue_thumbnailRequestQueue;
    PXGImageRequestQueue *_workQueue_imageRequestQueue;
    NSMutableDictionary *_workQueue_deferredImageRequestBlocksByTextureID;
    NSObject<OS_dispatch_queue> *_cancelationQueue;
    NSMutableDictionary *_cancelationQueue_mediaRequestIDByTextureID;
    NSMutableDictionary *_cancelationQueue_deferredMediaRequestIDByTextureID;
    struct os_unfair_lock_s _lookupLock;
    NSMutableIndexSet *_lookupLock_requestIDsWithDeliveredThumbnails;
    PXGAssetImageCache *_imageCache;
    _Bool _isLowSpec;
    NSArray *_requestOptions;
    struct CGImage *_lightPlaceholderImage;
    struct CGImage *_darkPlaceholderImage;
    struct CGSize _largestImageDataSpecSize;
    double _masterThumbnailShortSide;
    double _deferMediumRequestShortSideLimit;
    _Bool _videoRequestsAllowed;
    PXMediaProvider *_mediaProvider;
    id <PXGDisplayAssetPixelBufferSourcesProvider> _pixelBufferSourcesProvider;
    double _displayLinkLastTargetTimestamp;
}

@property double displayLinkLastTargetTimestamp;
@property (nonatomic) _Bool videoRequestsAllowed;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (retain, nonatomic) id <PXGDisplayAssetPixelBufferSourcesProvider> pixelBufferSourcesProvider;
@property (nonatomic, readonly) struct CGImage *placeholderImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (CDUnknownBlockType)defaultMediaVersionHandlerWithDataSourceBeforeChanges:(id)arg1 dataSourceAfterChanges:(id)arg2;

- (id)init;
- (void)dealloc;
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)performRequestForSpriteIndex:(unsigned int)arg1 textureRequestID:(int)arg2 sharedState:(id)arg3;
- (id)initWithMediaProvider:(id)arg1;
- (void)_setupRequestOptions;
- (id)_requestOptionsForUseCase:(unsigned long long)arg1 forDrawing:(_Bool)arg2;
- (void)registerImageDataSpecs:(id)arg1;
- (void)interactionStateDidChange:(CDStruct_93894d6c)arg1;
- (_Bool)_imageSizeSatisfiedByThumbnail:(struct CGSize)arg1;
- (void)_requestQueue_requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 observer:(id)arg2 textureRequestIDs:(struct _NSRange)arg3 displayAssetFetchResult:(id)arg4 presentationStyles:(unsigned long long)arg5 targetSize:(struct CGSize)arg6 screenScale:(double)arg7;
- (void)didFinishRequestingTextures;
- (void)_processThumbnailRequestsOnRequestQueue:(_Bool)arg1;
- (void)_requestQueue_handleThumbnailData:(id)arg1 spec:(struct PXMediaProviderThumbnailDataSpec)arg2 forTextureRequestID:(int)arg3;
- (_Bool)_hasDeliveredThumbnailForTextureRequestID:(int)arg1;
- (_Bool)_noteThumbnailAsDeliveredForRequestID:(int)arg1;
- (void)_workQueue_processImageRequestsWithAllowedIDs:(id)arg1;
- (void)_workQueue_processDeferredImageRequests;
- (void)_workQueue_performDeferredImageRequest:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5 textureRequestID:(int)arg6;
- (void)_workQueue_handleResult:(struct CGImage *)arg1 orientation:(long long)arg2 info:(id)arg3 targetSize:(struct CGSize)arg4 screenScale:(double)arg5 mediaRequest:(id)arg6 textureRequestID:(int)arg7;
- (void)_workQueue_handleCGImageResult:(struct CGImage *)arg1 orientation:(unsigned int)arg2 info:(id)arg3 shouldCache:(_Bool)arg4 textureRequestID:(int)arg5;
- (void)_workQueue_provideCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 forRequestID:(int)arg3;
- (void)_workQueue_requestVideoTexturesForSpriteAtIndex:(unsigned int)arg1 spriteReference:(id)arg2 displayAsset:(id)arg3 textureRequestID:(int)arg4;
- (void)_workQueue_startRequestingVideoTexturesForDisplayAsset:(id)arg1 pixelBufferSource:(id)arg2 textureRequestID:(int)arg3;
- (void)_handlePixelBufferChangedForVideoSession:(id)arg1;
- (void)_workQueue_provideVideoFrameForVideoSession:(id)arg1;
- (void)cancelTextureRequests:(id)arg1;
- (void)_cancelationQueue_cancelImageRequests:(id)arg1;
- (void)_workQueue_cancelTextureRequests:(id)arg1;

@end
