/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class UIButton, UILabel, WFWidgetExplanationSettings;

@protocol WFWidgetExplanationPageViewDelegate;

@interface WFWidgetExplanationPageView : UIView

{
    id <WFWidgetExplanationPageViewDelegate> _delegate;
    UILabel *_sloganLabel;
    UILabel *_supplementaryLabel;
    UIButton *_continueButton;
    WFWidgetExplanationSettings *_settings;
}

@property (weak, nonatomic) UILabel *sloganLabel;
@property (weak, nonatomic) UILabel *supplementaryLabel;
@property (weak, nonatomic) UIButton *continueButton;
@property (retain, nonatomic) WFWidgetExplanationSettings *settings;
@property (weak, nonatomic) id <WFWidgetExplanationPageViewDelegate> delegate;

- (id)initWithSettings:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)completedOnboarding;
- (void)continueButtonPressed;
- (struct CGSize)sloganSizeThatFits:(struct CGSize)arg1;
- (struct CGSize)supplementarySizeThatFits:(struct CGSize)arg1;

@end
