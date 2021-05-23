/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UIView.h>

@class CNFRegSplashSignInController, PSSpecifier, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface CNFRegSigninLearnMoreView : UIView

{
    long long _serviceType;
    PSSpecifier *_specifier;
    UIButton *_learnMoreButton;
    UIImageView *_splashImageView;
    UILabel *_titleLabel;
    UILabel *_verbiageLabel;
    UIView *_authKitSignInView;
    UILabel *_signingInLabel;
    UIActivityIndicatorView *_signingInSpinner;
    CNFRegSplashSignInController *_controller;
}

@property (nonatomic) long long serviceType;
@property (nonatomic) CNFRegSplashSignInController *controller;

- (id)titleLabel;
- (void)layoutSubviews;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)setAuthKitSignInView:(id)arg1;
- (void)setSigningIn:(_Bool)arg1;
- (id)signingInLabel;
- (id)signingInSpinner;
- (void)_learnMorePressed:(id)arg1;
- (id)verbiageLabel;
- (id)learnMoreButton;
- (id)_splashImage;
- (id)splashImageView;

@end
