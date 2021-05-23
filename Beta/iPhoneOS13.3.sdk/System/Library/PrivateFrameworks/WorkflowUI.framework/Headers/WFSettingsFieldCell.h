/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFSettingsCell.h>

@class UITextField;

@interface WFSettingsFieldCell : WFSettingsCell

{
    UITextField *_textField;
    double _offsetX;
}

@property (weak, nonatomic, readonly) UITextField *textField;
@property (nonatomic) double offsetX;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
