/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class HUTriggerIconView, UIImageView, UIStackView, WFRowOfIconsView;

@interface WFAutomationSummaryIconsView : UIView

{
    UIStackView *_stackView;
    UIImageView *_triggerIconView;
    HUTriggerIconView *_homeTriggerIconView;
    UIImageView *_arrowImageView;
    WFRowOfIconsView *_actionsIconsView;
}

@property (nonatomic, readonly) UIStackView *stackView;
@property (retain, nonatomic) UIImageView *triggerIconView;
@property (retain, nonatomic) HUTriggerIconView *homeTriggerIconView;
@property (nonatomic, readonly) UIImageView *arrowImageView;
@property (nonatomic, readonly) WFRowOfIconsView *actionsIconsView;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTriggerIcon:(id)arg1;
- (void)setHomeTriggerIcon:(id)arg1;
- (void)setActionIcons:(id)arg1;
- (void)setHomeActionIcons:(id)arg1;

@end
