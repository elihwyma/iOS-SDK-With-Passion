/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class MTUIAlarmView, UISwitch;

@protocol HUAlarmTableViewCellDelegate;

@interface HUAlarmTableViewCell : UITableViewCell

{
    _Bool _disabled;
    _Bool _enabled;
    id <HUAlarmTableViewCellDelegate> _delegate;
    MTUIAlarmView *_alarmView;
    UISwitch *_enabledSwitch;
}

@property (retain, nonatomic) MTUIAlarmView *alarmView;
@property (retain, nonatomic) UISwitch *enabledSwitch;
@property (nonatomic) _Bool enabled;
@property (weak, nonatomic) id <HUAlarmTableViewCellDelegate> delegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (id)init;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)refreshUI:(id)arg1 animated:(_Bool)arg2;
- (void)_alarmActiveChanged:(id)arg1;
- (void)setAlarmActiveDelegate:(id)arg1;

@end
