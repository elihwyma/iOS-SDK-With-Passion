/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, SFDialogTextField, SFDialogTextView, UIButton, UIStackView, _SFDialogView;

__attribute__((visibility("hidden")))
@interface SFDialogContentView : UIView

{
    NSArray *_actionButtons;
    UIStackView *_actionButtonsView;
    UIButton *_closeButton;
    unsigned long long _actionIndexTriggeredByOptionReturnKey;
    unsigned long long _actionIndexTriggeredByEscapeKey;
    unsigned long long _actionIndexTriggeredByReturnKey;
    _Bool _hasAttemptedHardwareKeyboardFocus;
    SFDialogTextField *_inputTextField;
    NSArray *_layoutConstraintsWhenInputIsVisible;
    NSArray *_layoutConstraintsWhenPasswordIsVisible;
    NSArray *_layoutConstraintsWhenInputAndPasswordAreVisible;
    SFDialogTextView *_messageTextView;
    SFDialogTextField *_passwordTextField;
    NSLayoutConstraint *_actionButtonsLeadingConstraintForHorizontalStackAlignment;
    NSLayoutConstraint *_actionButtonsLeadingConstraintForVerticalStackAlignment;
    _SFDialogView *_dialogView;
    NSArray *_actions;
}

@property (weak, nonatomic) _SFDialogView *dialogView;
@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)endEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (void)updateConstraints;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)keyCommands;
- (void)setTitleText:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)didAppear;
- (void)_actionTriggered:(id)arg1;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)_returnAction:(id)arg1;
- (void)_optionReturnAction:(id)arg1;
- (void)_escapeAction:(id)arg1;
- (void)_focusInputTextField:(id)arg1;
- (double)_desiredButtonsWidth;
- (void)_updateActionButtons;
- (void)_setText:(id)arg1 placeholder:(id)arg2 forTextField:(id)arg3;
- (_Bool)_usesLoginFormAppearance;
- (void)_invokeDelegateWithSelectedIndex:(unsigned long long)arg1;

@end
