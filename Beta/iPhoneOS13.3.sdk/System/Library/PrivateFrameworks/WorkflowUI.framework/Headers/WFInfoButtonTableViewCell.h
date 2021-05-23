/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, UIButton, UIImageView;

@protocol WFInfoButtonTableViewCellDelegate;

@interface WFInfoButtonTableViewCell : UITableViewCell

{
    unsigned long long _accessoryMode;
    id <WFInfoButtonTableViewCellDelegate> _delegate;
    UIButton *_infoButton;
    UIImageView *_checkmarkView;
}

@property (nonatomic) unsigned long long accessoryMode;
@property (nonatomic, getter=isChecked) _Bool checked;
@property (weak, nonatomic) id <WFInfoButtonTableViewCellDelegate> delegate;
@property (nonatomic, readonly) UIButton *infoButton;
@property (nonatomic, readonly) UIImageView *checkmarkView;
@property (nonatomic, readonly) NSArray *accessoryViews;

- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)infoButtonPressed:(id)arg1;

@end
