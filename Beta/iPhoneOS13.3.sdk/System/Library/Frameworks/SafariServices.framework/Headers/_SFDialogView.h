/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, SFDialogContentView, UISwipeGestureRecognizer, UITapGestureRecognizer, _SFKeyboardLayoutAlignmentView;

@protocol _SFDialogViewDelegate;

@interface _SFDialogView : UIView

{
    SFDialogContentView *_contentView;
    SFDialogContentView *_contentViewConfiguredForMinimumHeight;
    _SFKeyboardLayoutAlignmentView *_keyboardAlignmentView;
    UISwipeGestureRecognizer *_keyboardDismissSwipeGesture;
    UITapGestureRecognizer *_keyboardDismissTapGesture;
    NSLayoutConstraint *_obscuredInsetTopConstraint;
    NSLayoutConstraint *_obscuredInsetLeftConstraint;
    NSLayoutConstraint *_obscuredInsetBottomConstraint;
    NSLayoutConstraint *_obscuredInsetRightConstraint;
    id <_SFDialogViewDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFDialogViewDelegate> delegate;
@property (nonatomic, readonly) UIView *contentView;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)becomeFirstResponder;
- (void)setTitleText:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)didAppear;
- (void)willDisappear;
- (void)setInputText:(id)arg1 placeholder:(id)arg2;
- (void)setPasswordText:(id)arg1 placeholder:(id)arg2;
- (void)setDialogActions:(id)arg1;
- (void)setUsesOpaqueAppearance:(_Bool)arg1;
- (void)_keyboardDismissGesture:(id)arg1;
- (void)setObscuredInsets:(struct UIEdgeInsets)arg1;

@end
