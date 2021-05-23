/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFSettingsCell.h>

@class UISwitch;

@interface WFSettingsSwitchCell : WFSettingsCell

{
    UISwitch *_switchControl;
}

@property (weak, nonatomic, readonly) UISwitch *switchControl;

- (void)prepareForReuse;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
