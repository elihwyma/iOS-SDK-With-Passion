/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFSettingsCell.h>

@interface WFSettingsButtonCell : WFSettingsCell

{
    _Bool _enabled;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;

+ (long long)cellStyle;

- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)disabledTintColor;

@end
