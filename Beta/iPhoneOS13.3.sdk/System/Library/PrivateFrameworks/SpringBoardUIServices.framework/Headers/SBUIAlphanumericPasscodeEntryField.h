/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UITextInputTraits, UIView;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField

{
    UIView *_springView;
    UIView *_springViewParent;
}

@property (weak, nonatomic, readonly) UITextInputTraits *textInputTraits;

- (struct CGSize)_viewSize;
- (void)layoutSubviews;
- (void)_resetForFailedPasscode:(_Bool)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;
- (void)notePasscodeFieldTextDidChange;

@end
