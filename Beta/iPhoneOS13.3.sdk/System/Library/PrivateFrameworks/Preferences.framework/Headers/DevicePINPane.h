/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/Swift-Protocol.h>

@class DevicePINKeypadContainerView, NSString, UIKeyboard, UITextInputPasswordRules, UITransitionView, UIView;

@protocol PINEntryView;

@interface DevicePINPane <Swift>

{
    UITransitionView *_transitionView;
    _Bool _transitioning;
    UIView<PINEntryView> *_pinView;
    UIKeyboard *_keypad;
    _Bool _keypadActive;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _keyboardType;
    long long _keyboardAppearance;
    _Bool _playSound;
    _Bool _isBlocked;
    _Bool _simplePIN;
    _Bool _numericKeyboard;
    DevicePINKeypadContainerView *_keypadContainerView;
    unsigned int _PINLength;
    CDUnknownBlockType _passcodeOptionsHandler;
    NSString *_passcodeOptionsTitle;
}

@property (retain, nonatomic) UIView<PINEntryView> *pinView;
@property (copy, nonatomic) NSString *passcodeOptionsTitle;
@property (nonatomic) unsigned int PINLength;
@property (copy, nonatomic) CDUnknownBlockType passcodeOptionsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool enablesReturnKeyAutomatically;
@property (nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property (copy, nonatomic) NSString *textContentType;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (nonatomic, readonly) _Bool hasText;

- (void)dealloc;
- (id)password;
- (void)setTitle:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (void)transitionViewDidComplete:(id)arg1;
- (_Bool)requiresKeyboard;
- (id)specifierLabel;
- (void)dismissKeypad;
- (void)showFailedAttempts:(long long)arg1;
- (void)showError:(id)arg1 error:(id)arg2 isBlocked:(_Bool)arg3 animate:(_Bool)arg4;
- (void)hideFailedAttempts;
- (void)hideError;
- (void)setPINPolicyString:(id)arg1 visible:(_Bool)arg2;
- (_Bool)simplePIN;
- (void)okButtonPressed;
- (void)slideToNewPasscodeField:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3 transition:(int)arg4 showsOptionsButton:(_Bool)arg5;
- (void)clearPassword;
- (void)setSimplePIN:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3 showsOptions:(_Bool)arg4;
- (void)pinView:(id)arg1 pinValueChanged:(id)arg2;
- (void)pinView:(id)arg1 pinEntered:(id)arg2;
- (void)_setPlaysKeyboardClicks:(_Bool)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)setKeyboardIsNumeric:(_Bool)arg1;
- (void)_setKeypadState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSimplePIN:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3;
- (void)transitionToSimplePIN:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3 showsOptions:(_Bool)arg4;
- (void)activateKeypadView;
- (void)deactivateKeypadView;
- (void)setKeyboardUserInteractionEnabled:(_Bool)arg1;
- (void)slideToNewPasscodeField:(_Bool)arg1 requiresKeyboard:(_Bool)arg2 numericOnly:(_Bool)arg3;
- (void)delayForTextEntryAnimationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSimplePIN:(_Bool)arg1 requiresKeyboard:(_Bool)arg2;
- (void)slideToNewPasscodeField:(_Bool)arg1 withKeyboard:(_Bool)arg2;

@end
