/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIView.h>

@class FailureBarView, NSString, UIButton, UILabel;

@protocol PSPINEntryViewDelegate;

@interface PINView : UIView

{
    UILabel *_titleLabel;
    UILabel *_errorTitleLabel;
    FailureBarView *_failureView;
    UILabel *_pinPolicyLabel;
    _Bool _error;
    UIButton *_optionsButton;
    id <PSPINEntryViewDelegate> _delegate;
    CDUnknownBlockType _passcodeOptionsHandler;
    NSString *_optionsButtonTitle;
}

@property (copy, nonatomic) NSString *optionsButtonTitle;
@property (weak, nonatomic) id <PSPINEntryViewDelegate> delegate;
@property (copy, nonatomic) CDUnknownBlockType passcodeOptionsHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)appendString:(id)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)deleteLastCharacter;
- (void)setBlocked:(_Bool)arg1;
- (void)showFailedAttempts:(long long)arg1;
- (void)hideFailedAttempts;
- (void)hideError;
- (void)setPINPolicyString:(id)arg1 visible:(_Bool)arg2;
- (id)optionsButton;
- (double)getCurrentTitleFontSize;
- (void)optionsButtonTapped;
- (void)_layoutBottomSubview:(id)arg1 withMinY:(double)arg2 withSize:(struct CGSize)arg3;
- (void)setTextFieldKeyboardType:(long long)arg1;
- (void)setTextFieldKeyboardAppearance:(long long)arg1;
- (void)showError:(id)arg1 animate:(_Bool)arg2;
- (void)setTitle:(id)arg1 font:(id)arg2;
- (void)hidePasscodeField:(_Bool)arg1;
- (void)setShowsOptionsButton:(_Bool)arg1;
- (void)notifyDelegatePINChanged;
- (void)notifyDelegatePINEntered;
- (void)layoutTopLabel:(id)arg1 withMaxY:(double)arg2;
- (void)layoutBottomSubview:(id)arg1 withLabel:(id)arg2 withMinY:(double)arg3;

@end
