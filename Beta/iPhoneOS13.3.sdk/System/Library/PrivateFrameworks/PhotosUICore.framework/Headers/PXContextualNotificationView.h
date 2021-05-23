/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class AVAsset, AVPlayerItem, AVVideoComposition, NSArray, NSLayoutConstraint, NSString, PXCapsuleButton, PXContextualNotification, PXContextualNotificationChevronView, PXImageRequester, PXVideoPlayerView, UIImage, UIImageView, UILabel;

@interface PXContextualNotificationView : UIView <Swift>

{
    _Bool _useRegularHitTesting;
    long long _style;
    PXContextualNotification *_contextualNotification;
    NSString *_title;
    UIImage *_titleIcon;
    NSString *_message;
    AVAsset *_loopingVideoAsset;
    AVVideoComposition *_loopingVideoComposition;
    UIView *_contentView;
    UIImage *_placeholderImage;
    PXImageRequester *_imageRequester;
    UILabel *_titleLabel;
    UIImageView *_titleIconView;
    UILabel *_messageLabel;
    UIImageView *_dismissIconView;
    PXVideoPlayerView *_mediaView;
    NSLayoutConstraint *_mediaViewHeightConstraint;
    double __mediaAspectRatio;
    AVPlayerItem *__loopingPlayerItem;
    PXCapsuleButton *_actionButton;
    PXContextualNotificationChevronView *_chevronView;
    NSArray *_constraints;
}

@property (retain, nonatomic) UIImage *placeholderImage;
@property (retain, nonatomic) PXImageRequester *imageRequester;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UIImageView *titleIconView;
@property (nonatomic, readonly) UILabel *messageLabel;
@property (nonatomic, readonly) UIImageView *dismissIconView;
@property (nonatomic, readonly) PXVideoPlayerView *mediaView;
@property (nonatomic, readonly) NSLayoutConstraint *mediaViewHeightConstraint;
@property (nonatomic, setter=_setMediaAspectRatio:) double _mediaAspectRatio;
@property (retain, nonatomic, setter=_setLoopingPlayerItem:) AVPlayerItem *_loopingPlayerItem;
@property (retain, nonatomic) PXCapsuleButton *actionButton;
@property (retain, nonatomic) PXContextualNotificationChevronView *chevronView;
@property (copy, nonatomic) NSArray *constraints;
@property (nonatomic, readonly) long long style;
@property (weak, nonatomic) PXContextualNotification *contextualNotification;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleIcon;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) AVAsset *loopingVideoAsset;
@property (copy, nonatomic) AVVideoComposition *loopingVideoComposition;
@property (nonatomic) _Bool useRegularHitTesting;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_handleActionButton:(id)arg1;
- (void)_preferredContentSizeChanged:(id)arg1;
- (void)_updateMessageLabelForCMMCard;
- (void)setPlaceholderImage:(id)arg1 imageRequester:(id)arg2;
- (void)_updateLoopingPlayerItem;
- (void)_handleDidSetVideoAudioSession;
- (void)_startLoopingWithItem:(id)arg1;
- (_Bool)isPointInsideDismissArea:(struct CGPoint)arg1;
- (_Bool)isPointInsidePassthroughArea:(struct CGPoint)arg1;

@end
