/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMediaProvider.h>

@class NSMutableDictionary, PXImportImageCache, PXLoadingStatusManager;

@interface PXImportMediaProvider : PXMediaProvider

{
    _Bool _hasBeenIdle;
    unsigned short _thumbnailImageFormat;
    PXLoadingStatusManager *loadingStatusManager;
    long long _nextRequestID;
    NSMutableDictionary *_thumbnailRequestsByID;
    PXImportImageCache *_imageCache;
    long long _imageRequestsInflight;
    long long _lastRequestsInflight;
    NSMutableDictionary *_extensionPlaceholderCachesByRequestSize;
}

@property (nonatomic) long long nextRequestID;
@property (nonatomic, readonly) struct CGSize gridItemSize;
@property (nonatomic, readonly) unsigned short thumbnailImageFormat;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager;
@property (retain, nonatomic) NSMutableDictionary *thumbnailRequestsByID;
@property (retain, nonatomic) PXImportImageCache *imageCache;
@property (nonatomic) long long imageRequestsInflight;
@property (nonatomic) long long lastRequestsInflight;
@property (retain, nonatomic) NSMutableDictionary *extensionPlaceholderCachesByRequestSize;
@property (nonatomic) _Bool hasBeenIdle;

+ (void)registerPXImportMediaProviderNotificationsReceiver:(struct NSObject *)arg1;
+ (void)unregisterPXImportMediaProviderNotificationsReceiver:(struct NSObject *)arg1;

- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)initWithImageFormat:(unsigned short)arg1;
- (id)thumbnailDataForAsset:(id)arg1 targetSize:(struct CGSize)arg2 onlyFromCache:(_Bool)arg3 outDataSpec:(struct PXMediaProviderThumbnailDataSpec *)arg4;
- (void)enumerateAvailableThumbnailDataFormats:(CDUnknownBlockType)arg1;
- (long long)imageOfSize:(unsigned long long)arg1 forModel:(id)arg2 localCacheOnly:(_Bool)arg3 priority:(unsigned char)arg4 completion:(CDUnknownBlockType)arg5;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)requestImageForImportItem:(id)arg1 ofSize:(unsigned long long)arg2 priority:(unsigned char)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)thumbnailExistsForModel:(id)arg1 atSize:(unsigned long long)arg2;
- (_Bool)thumbnailExistsForModel:(id)arg1;
- (id)cachedImageForModel:(id)arg1 atSize:(unsigned long long)arg2;
- (void)performIdleProcessingIfNecessary;
- (double)idleTimeOut;
- (id)_newPlaceholderImageForItemWithExtension:(id)arg1 size:(struct CGSize)arg2;
- (id)_placeholderExtensionForItem:(id)arg1;
- (id)_placeholderForItem:(id)arg1 size:(unsigned long long)arg2;
- (void)ppt_sendMediaProviderDidProcessAsset:(id)arg1;
- (void)sendMediaProviderThumbnailingBecameIdle;

@end
