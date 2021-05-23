/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUIPasscodeLockViewBase.h>

@class NSString, SBPasscodeKeyboardAnimator, SBUIAlphanumericPasscodeEntryField, UIControl, UILabel, UIView;

@interface SBUIPasscodeLockViewWithKeyboard : SBUIPasscodeLockViewBase

{
    SBPasscodeKeyboardAnimator *_keyboardAnimator;
    SBUIAlphanumericPasscodeEntryField *_alphaEntryField;
    UIView *_statusFieldBackground;
    UIControl *_emergencyCallButton;
    _Bool _usesLightStyle;
    _Bool _isResigningResponderStatus;
    _Bool _keyboardVisible;
    double _keyboardHeightOffset;
    _Bool _keyboardTracksLockView;
    UIView *_keyboardTrackingView;
    UILabel *_statusField;
    UILabel *_statusSubtitleView;
}

@property (retain, nonatomic) UILabel *statusField;
@property (retain, nonatomic) UILabel *statusSubtitleView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)_updateFont;
- (id)passcode;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardDidHideNotification:(id)arg1;
- (void)setShowsEmergencyCallButton:(_Bool)arg1;
- (void)setShowsStatusField:(_Bool)arg1;
- (void)updateForTransitionToPasscodeView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(_Bool)arg3;
- (void)_luminanceBoostDidChange;
- (void)becomeActiveWithAnimationSettings:(id)arg1;
- (void)beginTransitionToState:(long long)arg1;
- (void)didEndTransitionToState:(long long)arg1;
- (id)initWithLightStyle:(_Bool)arg1;
- (id)_newStatusField;
- (id)_newStatusSubtitleView;
- (void)_hardwareReturnKeyPressed:(id)arg1;
- (void)_keyboardDidRequestDismissalNotification:(id)arg1;
- (void)_toggleForEmergencyCall;
- (void)_toggleForStatusField;
- (void)_setKeyboardTracksLockView:(_Bool)arg1;
- (id)_viewForKeyboardTracking;
- (void)_layoutForMinimizationState:(_Bool)arg1;
- (void)_acceptOrCancelReturnKeyPress;
- (void)_notifyDelegatePasscodeEntered;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegateThatEmergencyCallButtonWasPressed;
- (struct CGRect)_keyboardFrameForInterfaceOrientation:(long long)arg1;
- (double)_keyboardToEntryFieldOffset;
- (double)_largeTextEmergencyButtonMaxWidth;
- (void)_layoutStatusView;
- (double)_statusTitleWidth;
- (double)_statusFieldHeightWithWidth:(double)arg1;
- (void)_updateKeyboardHeightOffsetForKeyboardNotification:(id)arg1;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (_Bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (_Bool)passcodeEntryFieldShouldShowSystemKeyboard:(id)arg1;
- (void)resignActiveWithAnimationSettings:(id)arg1;
- (id)_statusTitleView;
- (id)_statusSubtitleView;
- (id)_alphanumericPasscodeEntryField;

@end
