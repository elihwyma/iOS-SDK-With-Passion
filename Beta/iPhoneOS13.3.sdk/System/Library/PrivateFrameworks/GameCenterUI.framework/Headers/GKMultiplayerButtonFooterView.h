/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIColor;

@interface GKMultiplayerButtonFooterView : UIView

{
    _Bool _forcingAutomatch;
    NSLayoutConstraint *_buttonHeightConstraint;
    NSLayoutConstraint *_buttonWidthConstraint;
    UIButton *_inviteFriendsButton;
    UIButton *_playNowButton;
    NSLayoutConstraint *_viewHeightConstraint;
    UIColor *_blueColor;
}

@property (retain, nonatomic) NSLayoutConstraint *buttonHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonWidthConstraint;
@property (retain, nonatomic) UIButton *inviteFriendsButton;
@property (retain, nonatomic) UIButton *playNowButton;
@property (retain, nonatomic) NSLayoutConstraint *viewHeightConstraint;
@property (retain, nonatomic) UIColor *blueColor;
@property (nonatomic) _Bool forcingAutomatch;

- (void)traitCollectionDidChange:(id)arg1;
- (void)awakeFromNib;
- (void)setButtonsEnabled:(_Bool)arg1;
- (void)configureForMatchRequest:(id)arg1;
- (void)setAction:(SEL)arg1 forTarget:(id)arg2 onButtonWithType:(long long)arg3;
- (void)configureViewsAndConstraintsForCurrentTraitCollection;

@end
