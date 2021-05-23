/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXLoadingStatusManager;

@interface PXMediaProvider : NSObject

{
    PXLoadingStatusManager *_loadingStatusManager;
}

@property (nonatomic, readonly) struct CGSize masterThumbnailSize;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager;

+ (id)preheatQueue;

- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestURLForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 onlyFromCache:(_Bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4;
- (void)enumerateAvailableThumbnailDataFormats:(CDUnknownBlockType)arg1;
- (void)preheatThumbnailDataForAssets:(id)arg1 origin:(long long)arg2 targetSize:(struct CGSize)arg3;

@end
