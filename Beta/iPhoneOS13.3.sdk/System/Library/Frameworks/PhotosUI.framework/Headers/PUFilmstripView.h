/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

#import <PhotosUI/Swift-Protocol.h>

@class AVAsset, AVVideoComposition, NSArray, NSObject, NSString, PUFilmstripDataSource, PUFilmstripMediaProvider, PUTileViewAnimator, PUTilingView, UIImage;

@protocol OS_dispatch_queue;

@interface PUFilmstripView : UIView <Swift>

{
    _Bool _needsUpdateThumbnailAspectRatio;
    _Bool _needsUpdateDataSource;
    _Bool _needsUpdateLayout;
    _Bool _needsUpdateGeneratedPlaceholder;
    NSObject<OS_dispatch_queue> *_placeholderGenerationQueue;
    PUTileViewAnimator *_animator;
    _Bool _generatesPlaceholderImage;
    _Bool _useContentAspectRatio;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    UIImage *_placeholderImage;
    NSArray *_indicatorInfos;
    PUTilingView *__tilingView;
    PUFilmstripMediaProvider *__mediaProvider;
    PUFilmstripDataSource *__dataSource;
    double __thumbnailAspectRatio;
    UIImage *_generatedPlaceholderImage;
    struct CGRect _visibleRect;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) struct CGRect visibleRect;
@property (copy, nonatomic) AVAsset *asset;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) _Bool useContentAspectRatio;
@property (nonatomic, readonly) PUTilingView *_tilingView;
@property (retain, nonatomic, setter=_setMediaProvider:) PUFilmstripMediaProvider *_mediaProvider;
@property (retain, nonatomic, setter=_setDataSource:) PUFilmstripDataSource *_dataSource;
@property (nonatomic, setter=_setThumbnailAspectRatio:) double _thumbnailAspectRatio;
@property (retain, nonatomic) UIImage *generatedPlaceholderImage;
@property (copy, nonatomic) AVAsset *asset;
@property (copy, nonatomic) AVVideoComposition *videoComposition;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) _Bool generatesPlaceholderImage;
@property (nonatomic) struct CGRect visibleRect;
@property (copy, nonatomic) NSArray *indicatorInfos;
@property (nonatomic) _Bool useContentAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_invalidateLayout;
- (void)_setNeedsUpdate;
- (void)reloadThumbnails;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_invalidateDataSource;
- (void)_updateDataSourceIfNeeded;
- (void)_releaseAVObjects;
- (void)setLivePhotoTrimScrubberThumbnail:(id)arg1;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForTransitionFromLayout:(id)arg2 toLayout:(id)arg3 withContext:(id)arg4;
- (id)tilingView:(id)arg1 dataSourceConverterForTransitionFromLayout:(id)arg2 toLayout:(id)arg3;
- (id)tilingView:(id)arg1 tileTransitionCoordinatorForChangeFromFrame:(struct CGRect)arg2 toFrame:(struct CGRect)arg3 duration:(double)arg4;
- (id)tilingView:(id)arg1 tileControllerWithIndexPath:(id)arg2 kind:(id)arg3 dataSource:(id)arg4;
- (void)_invalidateThumbnailAspectRatio;
- (void)_updateThumbnailAspectRatioIfNeeded;
- (void)_invalidateMediaProvider;
- (_Bool)_isMediaProviderValid;
- (void)_updateMediaProviderPlaceholderImage;
- (void)_invalidateGeneratedPlaceholderImage;
- (void)_updateGeneratedPlaceholderImageIfNeeded;
- (id)_filmstripLayout;

@end
