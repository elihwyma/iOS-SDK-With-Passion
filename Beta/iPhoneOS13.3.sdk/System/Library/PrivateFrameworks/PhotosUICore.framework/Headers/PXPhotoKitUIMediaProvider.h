/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIMediaProvider.h>

@class NSArray, NSMutableArray, NSObject, PHAssetResourceQualityClass, PHCachingImageManager, PHImageManager, PXPhotoKitThumbnailCache;

@protocol OS_dispatch_queue;

@interface PXPhotoKitUIMediaProvider : PXUIMediaProvider

{
    NSArray *_thumbnailQualityClasses;
    NSArray *_thumbnailCaches;
    struct CGSize _masterThumbnailSize;
    _Atomic long long _lastActivity;
    struct os_unfair_lock_s _preheatlock;
    NSMutableArray *_preheatLock_preheatStates;
    NSObject<OS_dispatch_queue> *_preheatQueue;
    unsigned long long _preheatQueue_state;
    struct os_unfair_lock_s _lock;
    struct CGSize _lock_lastTargetSize;
    long long _lock_lastQualityClassIndex;
    PHAssetResourceQualityClass *_lock_lastResourceQualityClass;
    PXPhotoKitThumbnailCache *_lock_lastThumbnailCache;
    PHImageManager *_imageManager;
    PHCachingImageManager *_cachingImageManager;
}

@property (nonatomic, readonly) PHImageManager *imageManager;
@property (nonatomic, readonly) PHCachingImageManager *cachingImageManager;

+ (id)defaultMediaProvider;

- (id)init;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 onlyFromCache:(_Bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4;
- (void)enumerateAvailableThumbnailDataFormats:(CDUnknownBlockType)arg1;
- (void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(struct CGSize)arg3;
- (struct CGSize)masterThumbnailSize;
- (id)initWithImageManager:(id)arg1;
- (void)_getQualityClass:(id *)arg1 cache:(id *)arg2 qualityClassIndex:(long long *)arg3 forTargetSize:(struct CGSize)arg4;
- (id)_thumbnailDataForAsset:(id)arg1 qualityClass:(id)arg2 cache:(id)arg3 onlyFromCache:(_Bool)arg4 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg5;
- (void)_noteActivity;
- (void)_preheatQueue_update;
- (id)_preheatInfoForQualityClassIndex:(long long)arg1;
- (void)_setPreheatInfo:(id)arg1 forQualityClassIndex:(long long)arg2;
- (void)_schedulePreheat;
- (void)_preheatQueue_schedulePreheat;
- (void)_preheatQueue_scheduleUpdateAfterDelay;

@end
