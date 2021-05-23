/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIStackView, WFMultilineBackgroundFadingButton;

@interface WFAutomationTypeExplanationPlatterView : UIView

{
    UIStackView *_stackView;
    UIImageView *_iconView;
    UILabel *_explanationTextLabel;
    WFMultilineBackgroundFadingButton *_button;
}

@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) UIImageView *iconView;
@property (nonatomic, readonly) UILabel *explanationTextLabel;
@property (nonatomic, readonly) WFMultilineBackgroundFadingButton *button;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setIcon:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setButtonColor:(id)arg1;
- (void)configureForAutomationType:(unsigned long long)arg1;
- (void)setExplanatoryText:(id)arg1;
- (id)homeAutomationIcon;
- (id)homeExplanatoryText;
- (id)homeButtonColor;

@end
