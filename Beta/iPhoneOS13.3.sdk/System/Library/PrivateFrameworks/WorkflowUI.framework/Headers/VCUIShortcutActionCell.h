/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface VCUIShortcutActionCell : UITableViewCell

{
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

@property (nonatomic, readonly) UIImageView *iconView;
@property (nonatomic, readonly) UILabel *titleLabel;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
