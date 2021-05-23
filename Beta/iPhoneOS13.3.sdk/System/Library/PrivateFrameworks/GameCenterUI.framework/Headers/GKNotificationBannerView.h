/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoView, UIImageView, UILabel;

@interface GKNotificationBannerView : UIView

{
    _Bool _canTransitionToPlayerAvatar;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    double _duration;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _touchHandler;
    GKDashboardPlayerPhotoView *_playerAvatarView;
    UILabel *_messageLabel2;
    UILabel *_actionLabel;
    UIView *_centeringView;
    double _preferredBannerWidth;
}

@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView;
@property (nonatomic) _Bool canTransitionToPlayerAvatar;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *messageLabel;
@property (retain, nonatomic) UILabel *messageLabel2;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIView *centeringView;
@property (nonatomic, readonly) double preferredBannerWidth;
@property (nonatomic) double duration;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType touchHandler;

+ (_Bool)_preventsAppearanceProxyCustomization;

- (void)dealloc;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)createBackdropView;
- (void)createTitleLabel:(id)arg1 withTextStyle:(id)arg2;
- (void)createMessageLabel:(id)arg1 withTextStyle:(id)arg2;
- (id)initWithTitle:(id)arg1 player:(id)arg2 imageView:(id)arg3 message:(id)arg4;
- (void)transitionToPlayerAvatar;
- (void)startLoadingPlayerAvatar;
- (id)initWithTitle:(id)arg1 image:(id)arg2 message:(id)arg3;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showWithTouchHandler:(CDUnknownBlockType)arg1;
- (void)hideBanner;
- (void)_wasTouched:(id)arg1;
- (void)callCompletionHandler;
- (void)fadeInWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fadeOutQuickly:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
