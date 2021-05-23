/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UIScrollView.h>

@class UIActivityIndicatorView, UIButton, UIImageView, UILabel, UIView;

@interface CKRegistrationView : UIScrollView

{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_verbiageLabel;
    UILabel *_signingInLabel;
    UIActivityIndicatorView *_signingInSpinner;
    UIButton *_learnMoreButton;
    UIView *_authKitSignInView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *verbiageLabel;
@property (retain, nonatomic) UILabel *signingInLabel;
@property (retain, nonatomic) UIActivityIndicatorView *signingInSpinner;
@property (retain, nonatomic) UIButton *learnMoreButton;
@property (retain, nonatomic) UIView *authKitSignInView;

- (void)layoutSubviews;
- (void)setSigningIn:(_Bool)arg1;
- (void)_learnMorePressed:(id)arg1;
- (struct CGSize)manualSizeToFitForAuthKitSignInView;

@end
