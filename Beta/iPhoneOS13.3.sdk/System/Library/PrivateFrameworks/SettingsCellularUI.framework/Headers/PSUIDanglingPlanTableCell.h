/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSTableCell.h>

@class UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PSUIDanglingPlanTableCell : PSTableCell

{
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_statusLabel;
    UILabel *_centeredNameLabel;
    UIView *_accessorySpacerView;
}

@property (retain, nonatomic) UIView *accessorySpacerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *centeredNameLabel;

+ (long long)cellStyle;

- (id)textLabel;
- (void)setAccessoryType:(long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)detailTextLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canReload;
- (_Bool)canBeChecked;
- (void)_setView;
- (void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2;
- (void)_setCenteredText:(id)arg1;

@end
