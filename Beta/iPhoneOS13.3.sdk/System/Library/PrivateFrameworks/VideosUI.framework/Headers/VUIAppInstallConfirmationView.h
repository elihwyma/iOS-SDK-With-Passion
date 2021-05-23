/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel, VUIAppInstallLockup, VUIBuyButtonLockup;

__attribute__((visibility("hidden")))
@interface VUIAppInstallConfirmationView : UIView

{
    _Bool _didLayout;
    VUIAppInstallLockup *_lockupView;
    UILabel *_imageSubtitleView;
    VUIBuyButtonLockup *_buyLockup;
    UILabel *_titleView;
    UILabel *_messageView;
    NSLayoutConstraint *_buttonHeightConstraint;
    NSString *_title;
    NSString *_message;
    UIButton *_actionButton;
    UIButton *_cancelButton;
    UIButton *_appStoreButton;
    UIButton *_secondaryLinkButton;
}

@property (retain, nonatomic) VUIAppInstallLockup *lockupView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *appStoreButton;
@property (retain, nonatomic) UIButton *secondaryLinkButton;

+ (struct CGSize)iconSize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)layoutSubviews;
- (void)setAppName:(id)arg1;
- (void)setAppIcon:(id)arg1;
- (id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2;
- (void)setAgeRating:(id)arg1;
- (void)setIAP:(id)arg1;
- (void)_layoutForTvos;
- (void)_layoutForIos;
- (void)setAppSubtitle:(id)arg1;

@end
