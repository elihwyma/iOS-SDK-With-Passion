/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UISwitch;

@protocol HKSwitchTableViewCellDelegate;

@interface HKSwitchTableViewCell : UITableViewCell

{
    UILabel *_countLabel;
    UISwitch *_switch;
    _Bool _shouldHideSwitch;
    _Bool _enabled;
    _Bool _centersIcon;
    id <HKSwitchTableViewCellDelegate> _delegate;
    NSString *_displayText;
}

@property (weak, nonatomic) id <HKSwitchTableViewCellDelegate> delegate;
@property (nonatomic) _Bool shouldHideSwitch;
@property (nonatomic, getter=isOn) _Bool on;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic) _Bool centersIcon;
@property (nonatomic, readonly) struct CGSize iconSize;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (copy, nonatomic) NSString *displayText;

+ (id)reuseIdentifier;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setIconImage:(id)arg1;
- (void)_updateFont;
- (void)_setupUI;
- (void)switchValueChanged:(id)arg1;
- (void)setCountText:(id)arg1;
- (void)_contextSizeCategoryChanged;
- (id)_displayLabelFont;

@end
