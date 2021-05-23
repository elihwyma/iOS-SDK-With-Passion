/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UIKit/UIView.h>

@class NCNotificationAction, NSString, UIButton, UIStackView, UITextView;

@protocol NCNotificationTextInputViewDelegate;

@interface NCNotificationTextInputView : UIView

{
    id <NCNotificationTextInputViewDelegate> _delegate;
    NCNotificationAction *_action;
    UIStackView *_horizontalStack;
    UITextView *_textView;
    UIButton *_button;
}

@property (retain, nonatomic) UIStackView *horizontalStack;
@property (retain, nonatomic) UITextView *textView;
@property (retain, nonatomic) UIButton *button;
@property (weak, nonatomic) id <NCNotificationTextInputViewDelegate> delegate;
@property (retain, nonatomic) NCNotificationAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isFirstResponder;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setPlaceholder:(id)arg1;
- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)safeAreaInsetsDidChange;
- (_Bool)canResignFirstResponder;
- (void)_buttonPressed:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)_updateForTextChange;
- (double)_textViewWidth;
- (double)_maximumTextViewHeight;

@end
