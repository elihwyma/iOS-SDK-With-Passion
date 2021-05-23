/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIInputViewController.h>

@class NSLayoutConstraint, NSString, SFAutomaticPasswordInputView;

@interface _SFAutomaticPasswordInputViewController : UIInputViewController

{
    SFAutomaticPasswordInputView *_inputView;
    NSString *_password;
    struct CGSize _portraitKeyboardSize;
    struct CGSize _landscapeKeyboardSize;
    NSLayoutConstraint *_heightConstraint;
    long long _currentInterfaceOrientation;
    long long _keyboardType;
    _Bool _logGeneratedPasswordAcceptedImplicitly;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)inputViewControllerWithAutoFillContext:(id)arg1 passwordRules:(id)arg2 completion:(CDUnknownBlockType)arg3;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithPassword:(id)arg1 keyboardType:(long long)arg2;
- (void)_updateKeyboardHeight;
- (_Bool)_inputViewControllerShouldDirectlyInsertPassword;
- (void)_dismissKeyboard:(id)arg1;
- (void)_updateKeyboardMetricsAndInterfaceOrientationIfNeeded;
- (struct CGSize)_currentKeyboardSize;
- (void)_postButtonPressedNotificationForButton:(long long)arg1;
- (void)inputViewControllerDidSelectUseStrongPassword:(id)arg1;
- (void)inputViewControllerDidSelectUseCustomPassword:(id)arg1;
- (struct CGSize)intrinsicContentSizeForInputView:(id)arg1;

@end
