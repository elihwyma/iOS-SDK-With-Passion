/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSTableCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanOptionTableCell : PSTableCell

{
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_centeredNameLabel;
}

@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *centeredNameLabel;

+ (long long)cellStyle;

- (id)textLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)detailTextLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canReload;
- (_Bool)canBeChecked;
- (void)setCellEnabled:(_Bool)arg1;
- (void)_setLabel:(id)arg1 andPhoneNumber:(id)arg2;
- (void)_setCenteredText:(id)arg1;

@end
