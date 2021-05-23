/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <UIKit/UITableViewCell.h>

@class UISwitch;

@protocol AAUISwitchTableViewCellDelegate;

@interface AAUISwitchTableViewCell : UITableViewCell

{
    UISwitch *_control;
    id <AAUISwitchTableViewCellDelegate> _delegate;
}

@property (nonatomic, readonly) UISwitch *control;
@property (weak, nonatomic) id <AAUISwitchTableViewCellDelegate> delegate;

- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_delegate_switchTableViewCellDidUpdateValue;
- (void)_controlValueChanged:(id)arg1;

@end
