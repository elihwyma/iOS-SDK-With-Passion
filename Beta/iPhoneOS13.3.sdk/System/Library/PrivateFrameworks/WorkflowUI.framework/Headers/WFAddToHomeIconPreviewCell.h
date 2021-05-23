/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFAddToHomeIconPreviewCell : UITableViewCell

{
    UIImageView *_iconImageView;
    UILabel *_iconLabel;
}

@property (weak, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) UILabel *iconLabel;

+ (double)defaultRowHeight;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configureWithName:(id)arg1 icon:(id)arg2;
- (void)configureName:(id)arg1;
- (void)configureIcon:(id)arg1;

@end
