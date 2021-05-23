/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@interface WFAutomationSwitchCell : UITableViewCell

{
    UISwitch *_switchControl;
}

@property (nonatomic, readonly) UISwitch *switchControl;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
