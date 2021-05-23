/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class WFAutomationTypeExplanationPlatterView;

@interface WFAutomationEmptyStateCell : UITableViewCell

{
    WFAutomationTypeExplanationPlatterView *_automationTypeView;
}

@property (nonatomic, readonly) WFAutomationTypeExplanationPlatterView *automationTypeView;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureForAutomationType:(unsigned long long)arg1 buttonTarget:(id)arg2 action:(SEL)arg3;

@end
