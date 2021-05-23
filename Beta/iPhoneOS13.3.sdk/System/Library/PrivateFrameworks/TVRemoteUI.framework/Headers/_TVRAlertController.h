/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIViewController.h>

@class NSString, TVRCKeyboardAttributes, UIView, _TVRAlertView, _TVRKeyboardView;

@protocol _TVRAlertControllerDelegate;

@interface _TVRAlertController : UIViewController

{
    NSString *_text;
    TVRCKeyboardAttributes *_keyboardAttributes;
    unsigned long long _type;
    id <_TVRAlertControllerDelegate> _delegate;
    _TVRAlertView *_alertView;
    _TVRKeyboardView *_keyboardView;
    UIView *_dimmingView;
    struct CGRect _previousKeyboardFrame;
}

@property (retain, nonatomic) _TVRAlertView *alertView;
@property (retain, nonatomic) _TVRKeyboardView *keyboardView;
@property (retain, nonatomic) UIView *dimmingView;
@property (nonatomic) struct CGRect previousKeyboardFrame;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) TVRCKeyboardAttributes *keyboardAttributes;
@property (weak, nonatomic) id <_TVRAlertControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)_keyboardChanged:(id)arg1;
- (void)_cancel;
- (void)keyboardViewDidHitReturnKey:(id)arg1;
- (void)keyboardView:(id)arg1 generatedTextInputPayload:(id)arg2;
- (void)keyboardViewDidCancel:(id)arg1;
- (void)keyboardViewPressedDictationButton:(id)arg1;
- (void)keyboardViewReleasedDictationButton:(id)arg1;
- (void)keyboardView:(id)arg1 didUpdateText:(id)arg2;
- (id)initWithTitle:(id)arg1 keyboardAttributes:(id)arg2;
- (id)initWithTitle:(id)arg1 PINEntryAttributes:(id)arg2;
- (void)_observeKeyboardNotifications;
- (id)initWithTitle:(id)arg1 passcodeSize:(long long)arg2;
- (void)_layoutForKeyboardFrame:(struct CGRect)arg1;
- (id)_contentViewBasedOnType;
- (void)alertView:(id)arg1 didUpdateText:(id)arg2;
- (void)alertViewDidCancel:(id)arg1;
- (id)initWithKeyboardAttributes:(id)arg1;
- (id)initForTextPasswordType:(id)arg1;

@end
