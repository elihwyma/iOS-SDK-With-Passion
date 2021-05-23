/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSAttributedString, NSLayoutConstraint, UIButton, UILabel, WFWorkflow, WFWorkflowSettingsLayoutMetrics;

@protocol WFWorkflowEmptyStateViewDelegate;

@interface WFWorkflowEmptyStateView : UIView

{
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    WFWorkflow *_workflow;
    id <WFWorkflowEmptyStateViewDelegate> _delegate;
    UILabel *_instructionLabel;
    UIButton *_tourButton;
    UIButton *_addButton;
    NSLayoutConstraint *_addButtonHeightConstraint;
}

@property (nonatomic, readonly) UILabel *instructionLabel;
@property (nonatomic, readonly) UIButton *tourButton;
@property (nonatomic, readonly) UIButton *addButton;
@property (nonatomic, readonly) NSLayoutConstraint *addButtonHeightConstraint;
@property (nonatomic, readonly) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (weak, nonatomic) id <WFWorkflowEmptyStateViewDelegate> delegate;
@property (copy, nonatomic) NSAttributedString *instructionText;

- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)updateFontSizes;
- (void)updateColors;
- (id)initWithWorkflow:(id)arg1 forNewWorkflow:(_Bool)arg2;
- (void)adoptTraitCollection:(id)arg1;
- (void)showTutorial;
- (void)showDrawer;

@end
