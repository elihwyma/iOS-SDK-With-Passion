/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class NSString, PHImageRequestOptions, PLPhotoEditRenderer;

@interface _PXPhotoKitAdjustedUIImageRequest : _PXPhotoKitAdjustedUIMediaRequest

{
    PLPhotoEditRenderer *_renderer;
    _Bool _hasReturnedAdjustedResult;
    int _currentVersionRequestID;
    NSString *_uniqueContentIdentifier;
    struct CGSize _targetSize;
    long long _contentMode;
    PHImageRequestOptions *_options;
    CDUnknownBlockType _resultHandler;
}

@property (nonatomic, readonly) struct CGSize targetSize;
@property (nonatomic, readonly) long long contentMode;
@property (nonatomic, readonly) PHImageRequestOptions *options;
@property (copy, nonatomic, readonly) CDUnknownBlockType resultHandler;

+ (id)memoryCache;

- (void)cancel;
- (void)start;
- (void)editSourceDidChange;
- (void)progressDidChange;
- (void)_renderIfNeeded;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 contentMode:(long long)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (id)memoryCachedImage;
- (void)cacheImageInMemory:(id)arg1;
- (id)_cachedImageURL;
- (id)_unscaledCachedImageURL;
- (id)_existingCachedImageURL;
- (id)memoryCacheKey;
- (_Bool)_deliverCachedImageIfPossible;
- (_Bool)_deliverCachedUnscaledImageIfPossible;
- (void)_handleCurrentVersionImageResult:(id)arg1 info:(id)arg2;
- (void)_handleImageWasCached;
- (void)_handleRenderedImage:(id)arg1 error:(id)arg2;
- (void)_handleRenderingFinishedWithData:(id)arg1 destinationURL:(id)arg2 targetSize:(struct CGSize)arg3;

@end
