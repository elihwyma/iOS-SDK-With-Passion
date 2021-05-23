/*
 Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

#import <MobileTimerUI/MTUIBaseTableViewCell.h>

@class UISwitch;

@protocol MTUISwitchTableViewCellDelegate;

@interface MTUISwitchTableViewCell : MTUIBaseTableViewCell

{
    id <MTUISwitchTableViewCellDelegate> _delegate;
    UISwitch *_enabledSwitch;
}

@property (retain, nonatomic) UISwitch *enabledSwitch;
@property (weak, nonatomic) id <MTUISwitchTableViewCellDelegate> delegate;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)switchAction:(id)arg1;
- (void)setSwitchStateEnabled:(_Bool)arg1;

@end
