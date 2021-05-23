/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface WFWorkflowConflictCell : UITableViewCell

{
    UIImageView *_iconImageView;
}

@property (weak, nonatomic) UIImageView *iconImageView;

+ (id)uncheckedImage;
+ (id)checkedImage;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateImages;
- (void)setConflictedWorkflow:(id)arg1 fromDevice:(id)arg2 isRemote:(_Bool)arg3;

@end
