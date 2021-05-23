/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class HFTriggerItem, UIColor, UILabel, WFAutomationSummaryIconsView, WFConfiguredTrigger, WFWorkflow;

@interface WFAutomationListCell : UITableViewCell

{
    WFConfiguredTrigger *_configuredTrigger;
    WFWorkflow *_workflow;
    HFTriggerItem *_homeTrigger;
    WFAutomationSummaryIconsView *_summaryIconsView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UIColor *_normalBackgroundColor;
    UIColor *_selectedBackgroundColor;
}

@property (retain, nonatomic) WFConfiguredTrigger *configuredTrigger;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) HFTriggerItem *homeTrigger;
@property (nonatomic, readonly) WFAutomationSummaryIconsView *summaryIconsView;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (nonatomic, readonly) UIColor *normalBackgroundColor;
@property (nonatomic, readonly) UIColor *selectedBackgroundColor;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateUI;
- (void)setConfiguredTrigger:(id)arg1 workflow:(id)arg2;

@end
