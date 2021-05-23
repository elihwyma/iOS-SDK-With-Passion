/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, PXImageRequest, UIImage;

@protocol PXDisplayAsset, PXUIImageProvider;

@interface PXImageRequester : PXObservable

{
    struct {
        _Bool targetSize;
        _Bool imageRequest;
        _Bool isInCloud;
    } _needsUpdateFlags;
    _Bool _hasFullQuality;
    _Bool _isInCloud;
    id <PXUIImageProvider> _mediaProvider;
    id <PXDisplayAsset> _asset;
    double _scale;
    UIImage *_image;
    UIImage *_opportunisticImage;
    double _loadingProgress;
    id <PXDisplayAsset> __currentImageSourceAsset;
    PXImageRequest *__currentRequest;
    struct CGSize _contentSize;
    struct CGSize _maximumRequestSize;
    struct CGSize _viewportSize;
    struct CGSize __targetSize;
    struct CGRect _desiredContentsRect;
    struct CGRect _cropRect;
    struct CGRect _contentsRect;
}

@property (retain, nonatomic, setter=_setImage:) UIImage *image;
@property (retain, nonatomic, setter=_setOpportunisticImage:) UIImage *opportunisticImage;
@property (retain, nonatomic, setter=_setCurrentImageSourceAsset:) id <PXDisplayAsset> _currentImageSourceAsset;
@property (nonatomic, setter=_setHasFullQuality:) _Bool hasFullQuality;
@property (nonatomic, setter=_setIsInCloud:) _Bool isInCloud;
@property (retain, nonatomic, setter=_setCurrentRequest:) PXImageRequest *_currentRequest;
@property (nonatomic, setter=_setTargetSize:) struct CGSize _targetSize;
@property (nonatomic, setter=_setLoadingProgress:) double loadingProgress;
@property (nonatomic, readonly) id <PXUIImageProvider> mediaProvider;
@property (nonatomic, readonly) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) struct CGSize contentSize;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) struct CGSize maximumRequestSize;
@property (nonatomic, readonly) struct CGRect desiredContentsRect;
@property (nonatomic, readonly) struct CGRect cropRect;
@property (nonatomic, readonly) struct CGSize viewportSize;
@property (nonatomic, readonly) struct CGRect contentsRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultOptions;

- (id)init;
- (void)dealloc;
- (void)setScale:(double)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setAsset:(id)arg1;
- (void)setContentsRect:(struct CGRect)arg1;
- (_Bool)_needsUpdate;
- (void)setCropRect:(struct CGRect)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (void)_updateIfNeeded;
- (void)setViewportSize:(struct CGSize)arg1;
- (void)setDesiredContentsRect:(struct CGRect)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)handlePreloadedImage:(id)arg1;
- (void)handlePreloadedImageRequester:(id)arg1;
- (void)setMaximumRequestSize:(struct CGSize)arg1;
- (id)initWithMediaProvider:(id)arg1 asset:(id)arg2;
- (void)_invalidateTargetSize;
- (void)_updateTargetSizeIfNeeded;
- (void)_invalidateImageRequest;
- (void)_updateImageRequestIfNeeded;
- (void)_handleProgressForImageRequest:(id)arg1 progress:(double)arg2;
- (void)_handleResultOfImageRequest:(id)arg1 image:(id)arg2 info:(id)arg3;
- (void)_invalidateIsInCloud;
- (void)_updateIsInCloudIfNeeded;
- (void)_cancelRequests;

@end
