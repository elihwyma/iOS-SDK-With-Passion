/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXUIMediaProvider.h>

@class NSMutableDictionary, NSObject, PHCachingImageManager;

@protocol OS_dispatch_queue;

@interface PXPhotoKitAdjustedUIMediaProvider : PXUIMediaProvider

{
    _Atomic int _nextRequestID;
    NSMutableDictionary *_requestsByIdentifier;
    NSMutableDictionary *_unadjustedRequestIdentifiersByIdentifier;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_renderQueue;
    PHCachingImageManager *_imageManager;
    _Bool _useCachedRenders;
    _Bool _delayRenders;
    _Bool _cachesUnadjustedImageForRequestedAssets;
}

@property (nonatomic) _Bool useCachedRenders;
@property (nonatomic) _Bool delayRenders;
@property (nonatomic) _Bool cachesUnadjustedImageForRequestedAssets;

+ (void)clearCachedRenders;

- (id)init;
- (long long)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)startCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAssets:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4;
- (void)stopCachingImagesForAllAssets;
- (long long)_nextRequestID;
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestLivePhotoForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (long long)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)cachedImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2;
- (long long)requestURLForVideo:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(CDUnknownBlockType)arg4;
- (long long)requestURLForImage:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(CDUnknownBlockType)arg4;
- (long long)requestURLsForLivePhoto:(id)arg1 pairingIdentifier:(id)arg2 options:(id)arg3 reaultHandler:(CDUnknownBlockType)arg4;
- (long long)requestCGImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)_handleRequestCompletedWithID:(long long)arg1 info:(id)arg2;
- (void)_removeRequestforID:(long long)arg1;

@end
