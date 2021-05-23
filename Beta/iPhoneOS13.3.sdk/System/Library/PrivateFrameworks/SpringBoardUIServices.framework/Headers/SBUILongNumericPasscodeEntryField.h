/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUINumericPasscodeEntryFieldBase.h>

@class SBUIButton, UIButton, UILabel, UIView;

@interface SBUILongNumericPasscodeEntryField : SBUINumericPasscodeEntryFieldBase

{
    SBUIButton *_okButton;
    _Bool _showsOkButton;
    UILabel *_promptLabel;
    _Bool _showsPromptLabel;
    _Bool _firstResponder;
    UIView *_springView;
    UIView *_springViewParent;
}

@property (nonatomic, readonly) UIButton *okButton;
@property (nonatomic) _Bool showsOkButton;
@property (nonatomic, readonly) UILabel *promptLabel;
@property (nonatomic) _Bool showsPromptLabel;

+ (_Bool)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
+ (_Bool)_usesTextFieldForFirstResponder;

- (_Bool)isFirstResponder;
- (struct CGSize)_viewSize;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canResignFirstResponder;
- (void)_handleKeyUIEvent:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;
- (void)_okButtonHit;
- (void)_getPasscodeFieldSize:(struct CGSize *)arg1 okButtonSize:(struct CGSize *)arg2;

@end
