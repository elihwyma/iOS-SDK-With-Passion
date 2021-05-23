/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@protocol BFFPasscodeInputViewDelegate;

@interface BFFPasscodeInputView : UIView

{
    id <BFFPasscodeInputViewDelegate> _delegate;
    UILabel *_instructions;
    UIView *_footerView;
    UIButton *_footerButton;
    UIButton *_instructionsLinkButton;
}

@property (retain, nonatomic) UILabel *instructions;
@property (retain, nonatomic) UIButton *instructionsLinkButton;
@property (weak, nonatomic) id <BFFPasscodeInputViewDelegate> delegate;
@property (retain, nonatomic) UIView *footerView;
@property (retain, nonatomic) UIButton *footerButton;

- (void)disable;
- (_Bool)isFirstResponder;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (id)passcodeField;
- (id)passcode;
- (void)setPasscode:(id)arg1;
- (void)footerButtonPressed;
- (void)_instructionsLinkButtonPressed;
- (id)passcodeDisplayView;
- (void)_layoutForBounds:(struct CGRect)arg1;
- (void)setFooterButtonText:(id)arg1;
- (void)setInstructionsLinkText:(id)arg1;
- (void)shakePasscode;

@end
