/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoView, GKGradientLabel, NSLayoutConstraint, NSString, UILabel, UITapGestureRecognizer;

@protocol GKAvatarContainerViewDelegate;

@interface GKAvatarContainerView : UIView

{
    id <GKAvatarContainerViewDelegate> _delegate;
    UILabel *_nicknameLabel;
    UILabel *_emailLabel;
    UIView *_imageContainer;
    GKGradientLabel *_editLabel;
    NSLayoutConstraint *_imageContainerTopConstraint;
    GKDashboardPlayerPhotoView *_playerAvatarView;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UILabel *emailLabel;
@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) GKGradientLabel *editLabel;
@property (retain, nonatomic) NSLayoutConstraint *imageContainerTopConstraint;
@property (retain, nonatomic) GKDashboardPlayerPhotoView *playerAvatarView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id <GKAvatarContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)awakeFromNib;
- (void)didSetPlayerAvatarImage:(id)arg1;
- (void)didSelectPlayerAvatarView:(id)arg1;
- (void)prepareForDefaultNicknameViewController;
- (void)refreshViewForLocalPlayer;
- (void)updateAvatarEditingAvailability;
- (void)refreshHeaderViewProfileImage;

@end
