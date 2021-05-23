/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedCell.h>

@class AVPlayerItem, ISWrappedAVAudioSession, ISWrappedAVPlayer, PUImageViewExtraction, PXRoundedCornerOverlayView, PXUIAssetBadgeView, PXVideoPlayerView, UIButton, UIImage, UIImageView, UIView;

@protocol PXVideoOverlayButton;

__attribute__((visibility("hidden")))
@interface PUFeedImageCell : PUFeedCell

{
    _Bool _imageHidden;
    _Bool __shouldUpdateOverlayPlayButtonBackground;
    _Bool __shouldHideOverlayPlayButton;
    _Bool __shouldHideCenterOverlayImageView;
    _Bool __shouldHideCommentButton;
    _Bool _shouldHideLikeBadge;
    int _playerItemRequestID;
    UIImage *_image;
    AVPlayerItem *_playerItem;
    long long _imageContentMode;
    long long _imageAlignment;
    long long _overlayOptions;
    long long _commentCount;
    double _cornerRadius;
    PXVideoPlayerView *_videoPlayerView;
    ISWrappedAVPlayer *_videoPlayer;
    ISWrappedAVAudioSession *_audioSession;
    UIImageView *__imageView;
    long long __imageTag;
    UIView<PXVideoOverlayButton> *__overlayPlayButton;
    UIImageView *__overlayPlayButtonBackgroundImageView;
    PUImageViewExtraction *__overlayPlayButtonBackgroundExtraction;
    UIImageView *__centerOverlayImageView;
    UIButton *__commentButton;
    PXUIAssetBadgeView *__photoIrisBadgeView;
    PXRoundedCornerOverlayView *_roundedCornerOverlayView;
    UIImageView *_likeBadgeView;
    struct CGSize _maximumImageSize;
    struct CGRect __imageFrame;
}

@property (nonatomic, readonly) PXVideoPlayerView *videoPlayerView;
@property (nonatomic, readonly) ISWrappedAVPlayer *videoPlayer;
@property (nonatomic, readonly) ISWrappedAVAudioSession *audioSession;
@property (retain, nonatomic, setter=_setImageView:) UIImageView *_imageView;
@property (nonatomic, setter=_setImageTag:) long long _imageTag;
@property (nonatomic, setter=_setImageFrame:) struct CGRect _imageFrame;
@property (retain, nonatomic, setter=_setOverlayPlayButton:) UIView<PXVideoOverlayButton> *_overlayPlayButton;
@property (retain, nonatomic, setter=_setOverlayPlayButtonBackgroundImageView:) UIImageView *_overlayPlayButtonBackgroundImageView;
@property (retain, nonatomic, setter=_setOverlayPlayButtonBackgroundExtraction:) PUImageViewExtraction *_overlayPlayButtonBackgroundExtraction;
@property (nonatomic, setter=_setShouldUpdateOverlayPlayButtonBackground:) _Bool _shouldUpdateOverlayPlayButtonBackground;
@property (nonatomic, setter=_setShouldHideOverlayPlayButton:) _Bool _shouldHideOverlayPlayButton;
@property (retain, nonatomic, setter=_setCenterOverlayImageView:) UIImageView *_centerOverlayImageView;
@property (nonatomic, setter=_setShouldHideCenterOverlayImageView:) _Bool _shouldHideCenterOverlayImageView;
@property (retain, nonatomic, setter=_setCommentButton:) UIButton *_commentButton;
@property (nonatomic, setter=_setShouldHideCommentButton:) _Bool _shouldHideCommentButton;
@property (nonatomic, setter=setShouldHideLikeBadge:) _Bool shouldHideLikeBadge;
@property (retain, nonatomic, setter=_setPhotoIrisBadgeView:) PXUIAssetBadgeView *_photoIrisBadgeView;
@property (retain, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView;
@property (retain, nonatomic) UIImageView *likeBadgeView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) AVPlayerItem *playerItem;
@property (nonatomic) int playerItemRequestID;
@property (nonatomic) long long imageContentMode;
@property (nonatomic, getter=isImageHidden) _Bool imageHidden;
@property (nonatomic) struct CGSize maximumImageSize;
@property (nonatomic) long long imageAlignment;
@property (nonatomic) long long overlayOptions;
@property (nonatomic) long long commentCount;
@property (nonatomic) double cornerRadius;

+ (Class)_contentViewClass;
+ (void)preloadResources;
+ (long long)_videoOverlayButtonStyle;
+ (_Bool)_allowHighQualityVideoOverlayButton;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setAudioSession:(id)arg1;
- (void)_updateVideoViewContentMode;
- (void)setParallaxOffset:(struct CGPoint)arg1;
- (void)setImage:(id)arg1 withTag:(long long)arg2;
- (void)_updateVideoPlayerContents;
- (void)_layoutImageView;
- (void)_updateOverlays;
- (void)_updateCommentButton;
- (void)_invalidateOverlayPlayButtonBackground;
- (void)_updateRoundedCornersOverlayView;
- (id)_imageCellDelegate;
- (void)_handlePlayButton:(id)arg1;
- (void)_handleCommentButton:(id)arg1;

@end
