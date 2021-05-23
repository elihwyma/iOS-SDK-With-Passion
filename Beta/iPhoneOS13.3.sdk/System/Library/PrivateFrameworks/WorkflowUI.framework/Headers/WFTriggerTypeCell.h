/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface WFTriggerTypeCell : UITableViewCell

{
    Class _triggerTypeClass;
    UIImageView *_triggerIconView;
    UILabel *_triggerTitleLabel;
    UILabel *_triggerDescriptionLabel;
}

@property (nonatomic, readonly) UIImageView *triggerIconView;
@property (nonatomic, readonly) UILabel *triggerTitleLabel;
@property (nonatomic, readonly) UILabel *triggerDescriptionLabel;
@property (retain, nonatomic) Class triggerTypeClass;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateUI;

@end
