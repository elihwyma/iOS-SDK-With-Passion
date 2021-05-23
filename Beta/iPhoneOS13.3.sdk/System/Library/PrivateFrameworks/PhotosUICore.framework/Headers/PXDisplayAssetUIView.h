/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSError, NSString, PXImageRequester, PXLoadingFailureBadgeView, PXRoundProgressView, PXUIMediaProvider, UIImage;

@protocol PXDisplayAsset;

@interface PXDisplayAssetUIView : UIView <Swift>

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _displayLoadingIndicator;
    _Bool _isDisplayingFullQualityContent;
    _Bool _animatedContentEnabled;
    id <PXDisplayAsset> _asset;
    long long _playbackStyle;
    PXUIMediaProvider *_mediaProvider;
    NSArray *_placeholderImageFilters;
    double _placeholderTransitionDuration;
    NSError *_error;
    UIView *_contentView;
    UIImage *_image;
    PXImageRequester *_imageRequester;
    PXRoundProgressView *_progressView;
    PXLoadingFailureBadgeView *_failureView;
    double _imageProgress;
    double _loadingProgress;
    struct CGSize _targetSize;
    struct CGRect _contentBounds;
    struct CGRect _contentsRect;
}

@property (retain, nonatomic) id <PXDisplayAsset> asset;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic) struct CGSize targetSize;
@property (nonatomic) struct CGRect contentBounds;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect contentsRect;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (retain, nonatomic) PXRoundProgressView *progressView;
@property (retain, nonatomic) PXLoadingFailureBadgeView *failureView;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, readonly) double imageProgress;
@property (nonatomic, readonly) double loadingProgress;
@property (nonatomic, readonly) long long playbackStyle;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (copy, nonatomic) NSArray *placeholderImageFilters;
@property (nonatomic) double placeholderTransitionDuration;
@property (nonatomic) _Bool displayLoadingIndicator;
@property (nonatomic) _Bool isDisplayingFullQualityContent;
@property (nonatomic, readonly) struct CGRect currentContentsRect;
@property (nonatomic, readonly) UIImage *currentImage;
@property (nonatomic, getter=isAnimatedContentEnabled) _Bool animatedContentEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)viewPool;
+ (id)checkOutViewForAsset:(id)arg1;
+ (id)checkOutViewForAsset:(id)arg1 withPlaybackStyle:(long long)arg2;
+ (void)checkInView:(id)arg1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentMode:(long long)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)updateContent;
- (void)_updateProgressView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateIfNeeded;
- (void)becomeReusable;
- (void)imageDidChange;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (void)isDisplayingFullQualityContentDidChange;
- (void)invalidateLoadingProgress;
- (void)setNeedsUpdateContent;
- (void)setImageProgress:(double)arg1;
- (void)animatedContentEnabledDidChange;
- (void)contentModeDidChange;
- (void)placeholderTransitionDurationDidChange;
- (void)_updateTargetSize;
- (void)_updateFailureView;
- (void)_loadContentView;

@end
