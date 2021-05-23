/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@class AKRoundedButton, NSString, UIColor, UILabel, UITextField, UIView;

@interface AKModalSignInViewController

{
    _Bool _hideTitle;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UITextField *_passwordField;
    AKRoundedButton *_signInButton;
    UIView *_containerView;
    UIColor *_backgroundColor;
    NSString *_customBodyText;
    NSString *_customButtonTitle;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UITextField *passwordField;
@property (retain, nonatomic) AKRoundedButton *signInButton;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) _Bool hideTitle;
@property (retain, nonatomic) NSString *customBodyText;
@property (retain, nonatomic) NSString *customButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)becomeFirstResponder;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)resignFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)_buttonTitle;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)context:(id)arg1 needsPasswordWithCompletion:(CDUnknownBlockType)arg2;
- (void)_setupViews;
- (id)_bodyText;
- (void)_createViews;
- (void)_setupConstraints;
- (_Bool)_isSignInAllowed;
- (void)_startBusyWorkUI;
- (void)_hidebusyWorkUI;
- (void)_passwordRecoveryButtonWasTapped:(id)arg1;
- (void)_passwordFieldDidChange:(id)arg1;
- (void)_signInButtonTapped:(id)arg1;
- (_Bool)_shouldShowForgotGlyph;
- (void)displayAlertForContext:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateViewConstraints;

@end
