/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class AVAsset, ISAnimatedImageView, ISWrappedAVAudioSession, ISWrappedAVPlayer, NSString, PHAnimatedImage, PHLivePhoto, PHLivePhotoView, PUAvalancheStackView, PUBackgroundColorView, PUPhotoDecoration, PUTextBannerView, PXCollectionTileLayoutTemplate, PXFeatureSpec, PXRoundedCornerOverlayView, PXTitleSubtitleUILabel, PXUIAssetBadgeView, PXVideoPlayerView, UIColor, UIImage, UIImageView, UIView;

@protocol PUPhotoViewContentHelperDelegate;

@interface PUPhotoViewContentHelper : NSObject

{
    PUBackgroundColorView *_photoDecorationBorderView;
    PUBackgroundColorView *_photoDecorationOverlayView;
    _Bool _hasTransform;
    _Bool _hasLayerBackgroundColor;
    struct {
        _Bool respondsToLivePhotoWillBeginPlaybackWithStyle;
    } _delegateFlags;
    _Bool _hasPendingPlaybackRequest;
    long long _pendingPlaybackRequestStyle;
    UIColor *_layerDefaultBackgroundColor;
    struct {
        _Bool titleSubtitleUILabel;
        _Bool loopingVideoView;
        _Bool animatedImageView;
    } _needsUpdateFlags;
    PXVideoPlayerView *_loopingVideoView;
    ISWrappedAVPlayer *_loopingVideoPlayer;
    ISAnimatedImageView *_animatedImageView;
    _Bool _isTextBannerVisible;
    _Bool _avoidsImageViewIfPossible;
    _Bool _flattensBadgeView;
    _Bool _avoidsPhotoDecoration;
    _Bool _animatingRoundedCorners;
    _Bool _useOverlay;
    _Bool _highlighted;
    _Bool _livePhotoHidden;
    _Bool _shouldPrepareForPlayback;
    _Bool _loopingPlaybackAllowed;
    _Bool _showsLivePhoto;
    _Bool _needsAvalancheStack;
    UIView *_contentView;
    long long _fillMode;
    UIImage *_photoImage;
    UIImage *_placeHolderImage;
    UIView *_transitionSnapshotView;
    PUPhotoDecoration *_photoDecoration;
    double _cornerRadius;
    unsigned long long _cornersToRound;
    UIColor *_overlayColor;
    double _contentAlpha;
    double _darkContentOverlayAlpha;
    UIColor *_backgroundColor;
    id <PUPhotoViewContentHelperDelegate> _delegate;
    PHLivePhoto *_livePhoto;
    AVAsset *_loopingVideoAsset;
    PHAnimatedImage *_animatedImage;
    struct CGColor *_avalancheStackBackgroundColor;
    long long _badgeStyle;
    PUTextBannerView *_textBannerView;
    PXFeatureSpec *_featureSpec;
    PXCollectionTileLayoutTemplate *_collectionTileLayoutTemplate;
    NSString *_titleFontName;
    NSString *_title;
    NSString *_subtitle;
    UIImageView *_photoImageView;
    UIView *_darkContentOverlay;
    UIImageView *__crossfadeImageView;
    PUAvalancheStackView *_avalancheStackView;
    PHLivePhotoView *_livePhotoView;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIView *__highlightOverlayView;
    PXUIAssetBadgeView *__badgeView;
    PXTitleSubtitleUILabel *__titleSubtitleLabel;
    ISWrappedAVAudioSession *__audioSession;
    struct CGSize _photoSize;
    struct CGSize _customPaddingForBadgeElements;
    struct PXAssetBadgeInfo _badgeInfo;
    struct CGAffineTransform _imageTransform;
}

@property (retain, nonatomic) UIImageView *photoImageView;
@property (retain, nonatomic) UIView *darkContentOverlay;
@property (retain, nonatomic) UIImageView *_crossfadeImageView;
@property (retain, nonatomic) PUAvalancheStackView *avalancheStackView;
@property (retain, nonatomic) PHLivePhotoView *livePhotoView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (retain, nonatomic, setter=_setHighlightOverlayView:) UIView *_highlightOverlayView;
@property (retain, nonatomic, setter=_setBadgeView:) PXUIAssetBadgeView *_badgeView;
@property (retain, nonatomic, setter=_setTitleSubtitleUILabel:) PXTitleSubtitleUILabel *_titleSubtitleLabel;
@property (retain, nonatomic, setter=_setAudioSession:) ISWrappedAVAudioSession *_audioSession;
@property (weak, nonatomic, readonly) UIView *contentView;
@property (nonatomic) long long fillMode;
@property (nonatomic) struct CGAffineTransform imageTransform;
@property (nonatomic) struct CGSize photoSize;
@property (nonatomic, readonly) struct CGRect imageContentFrame;
@property (retain, nonatomic) UIImage *photoImage;
@property (retain, nonatomic) UIImage *placeHolderImage;
@property (retain, nonatomic) UIView *transitionSnapshotView;
@property (copy, nonatomic) PUPhotoDecoration *photoDecoration;
@property (nonatomic, getter=isImageViewEdgeAntialiasingEnabled) _Bool imageViewEdgeAntialiasingEnabled;
@property (nonatomic) _Bool avoidsImageViewIfPossible;
@property (nonatomic) _Bool flattensBadgeView;
@property (nonatomic) _Bool avoidsPhotoDecoration;
@property (nonatomic, readonly) UIView *badgeContainerView;
@property (nonatomic, readonly) _Bool providesVisualFeedbackOnPress;
@property (nonatomic, getter=isAnimatingRoundedCorners) _Bool animatingRoundedCorners;
@property (nonatomic) double cornerRadius;
@property (nonatomic, readonly) unsigned long long cornersToRound;
@property (nonatomic) _Bool useOverlay;
@property (retain, nonatomic) UIColor *overlayColor;
@property (nonatomic) double contentAlpha;
@property (nonatomic) double darkContentOverlayAlpha;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic, getter=isLivePhotoHidden) _Bool livePhotoHidden;
@property (weak, nonatomic) id <PUPhotoViewContentHelperDelegate> delegate;
@property (retain, nonatomic) PHLivePhoto *livePhoto;
@property (nonatomic) _Bool shouldPrepareForPlayback;
@property (copy, nonatomic) AVAsset *loopingVideoAsset;
@property (retain, nonatomic) PHAnimatedImage *animatedImage;
@property (nonatomic) _Bool loopingPlaybackAllowed;
@property (nonatomic) _Bool showsLivePhoto;
@property (nonatomic) _Bool needsAvalancheStack;
@property (nonatomic) struct CGColor *avalancheStackBackgroundColor;
@property (nonatomic) struct PXAssetBadgeInfo badgeInfo;
@property (nonatomic) long long badgeStyle;
@property (nonatomic) struct CGSize customPaddingForBadgeElements;
@property (nonatomic, getter=isTextBannerVisible) _Bool textBannerVisible;
@property (nonatomic, readonly) PUTextBannerView *textBannerView;
@property (retain, nonatomic) PXFeatureSpec *featureSpec;
@property (retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate;
@property (retain, nonatomic) NSString *titleFontName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGSize)sizeThatFits:(struct CGSize)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;
+ (struct CGRect)_imageContentFrameForBounds:(struct CGRect)arg1 imageSize:(struct CGSize)arg2 fillMode:(long long)arg3;

- (id)init;
- (id)initWithContentView:(id)arg1;
- (void)_updateImageView;
- (void)_updateHighlight;
- (_Bool)_needsUpdate;
- (struct CGSize)contentViewSizeThatFits:(struct CGSize)arg1;
- (void)stopPlayback;
- (void)startPlaybackWithStyle:(long long)arg1;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
- (void)_updateIfNeeded;
- (void)_updateSubviewOrdering;
- (void)setCornersToRound:(unsigned long long)arg1;
- (void)_updateLivePhotoView;
- (void)_invalidateBadgeView;
- (void)_updateRoundedCornersOverlayView;
- (struct CGRect)photoDecorationBorderViewFrameForImageContentFrame:(struct CGRect)arg1;
- (struct CGRect)imageContentFrameForBounds:(struct CGRect)arg1;
- (void)updatePhotoImageWithoutReconfiguring:(id)arg1;
- (void)setCornerRadius:(double)arg1 cornersToRound:(unsigned long long)arg2 useOverlay:(_Bool)arg3 overlayColor:(id)arg4;
- (void)_updateLivePhotoViewVisibility;
- (void)_updateLivePhotoViewPreparing;
- (void)_startPlaybackWhenLivePhotoAvailableWithStyle:(long long)arg1;
- (void)_removePhotoImageViewIfNecessary;
- (void)_addAvalancheStackViewIfNecessary;
- (void)_removeAvalancheStackViewIfNecessary;
- (void)_updateLayerBackgroundColorIfNeeded;
- (void)_updateContentViewClipsToBounds;
- (void)_updateTextBannerView;
- (void)_updateBadgeView;
- (void)_updatePhotoDecoration;
- (void)_updateLayerCornerRadius;
- (void)_invalidateLoopingVideoView;
- (void)_updateLoopingVideoViewIfNeeded;
- (void)_invalidateAnimatedImageView;
- (void)_updateAnimatedImageViewIfNeeded;
- (void)_invalidateTitleSubtitleUILabel;
- (void)_updateTitleSubtitleUILabelIfNeeded;
- (void)layoutSubviewsOfContentView;
- (void)contentViewDynamicUserInterfaceTraitDidChange;
- (void)animateCrossfadeToImage:(id)arg1;

@end
