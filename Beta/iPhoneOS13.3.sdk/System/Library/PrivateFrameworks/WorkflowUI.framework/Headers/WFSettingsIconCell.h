/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFSettingsCell.h>

@class UIImage, UIImageView;

@interface WFSettingsIconCell : WFSettingsCell

{
    UIImageView *_iconView;
}

@property (weak, nonatomic) UIImageView *iconView;
@property (weak, nonatomic) UIImage *icon;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
