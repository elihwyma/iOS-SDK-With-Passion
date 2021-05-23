/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <UIKit/UITableViewCell.h>

@class UIView;

@protocol FIUIHealthSettingsForceUpdatable;

@interface FIUIHealthSettingsTableViewCell : UITableViewCell

{
    UIView *_inputView;
    id <FIUIHealthSettingsForceUpdatable> _forceUpdatable;
}

@property (weak, nonatomic) id <FIUIHealthSettingsForceUpdatable> forceUpdatable;

- (_Bool)becomeFirstResponder;
- (_Bool)resignFirstResponder;
- (id)inputView;
- (void)setInputView:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
