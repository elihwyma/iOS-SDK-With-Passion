/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFTriggerConfigurationHeaderCell : UITableViewCell

{
    Class _triggerTypeClass;
    UIImageView *_triggerIconView;
    UILabel *_triggerTitleLabel;
}

@property (nonatomic, readonly) UIImageView *triggerIconView;
@property (nonatomic, readonly) UILabel *triggerTitleLabel;
@property (retain, nonatomic) Class triggerTypeClass;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateUI;

@end
