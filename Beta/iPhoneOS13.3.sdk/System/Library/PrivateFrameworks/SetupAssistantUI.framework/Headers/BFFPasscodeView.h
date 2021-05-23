/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <SetupAssistantUI/BFFTitleView.h>

@class BFFPasscodeInputView, UIViewController;

@interface BFFPasscodeView : BFFTitleView

{
    BFFPasscodeInputView *_passcodeInputView;
    UIViewController *_passcodeViewController;
    struct CGRect _currentKeyboardFrame;
}

@property (nonatomic) struct CGRect currentKeyboardFrame;
@property (weak, nonatomic) UIViewController *passcodeViewController;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)alwaysBounceVertical;
- (void)keyboardWillShow:(id)arg1;
- (id)passcodeInputView;
- (void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2;
- (void)animateTransitionToPasscodeInput:(id)arg1 animation:(unsigned long long)arg2;

@end
