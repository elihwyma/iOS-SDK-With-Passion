/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSTableCell.h>

@class PSUIBadgeView, UILabel;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanTableCell : PSTableCell

{
    PSUIBadgeView *_badgeView;
    UILabel *_nameLabel;
    UILabel *_numberLabel;
    UILabel *_statusLabel;
    PSUIBadgeView *_centeredBadgeView;
    UILabel *_centeredNameLabel;
}

@property (retain, nonatomic) PSUIBadgeView *badgeView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) PSUIBadgeView *centeredBadgeView;
@property (retain, nonatomic) UILabel *centeredNameLabel;

+ (long long)cellStyle;

- (id)textLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)detailTextLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canReload;
- (_Bool)canBeChecked;
- (void)_setBadge:(id)arg1 andLabel:(id)arg2 andPhoneNumber:(id)arg3;
- (void)_setCenteredBadge:(id)arg1 andLabel:(id)arg2;

@end
