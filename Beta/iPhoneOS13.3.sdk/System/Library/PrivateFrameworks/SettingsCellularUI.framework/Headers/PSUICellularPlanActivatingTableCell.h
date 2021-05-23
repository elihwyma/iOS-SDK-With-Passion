/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSTableCell.h>

@class PSUIBadgeView, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanActivatingTableCell : PSTableCell

{
    PSUIBadgeView *_badgeView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_statusLabel;
    PSUIBadgeView *_centeredBadgeView;
    UILabel *_centeredTitleLabel;
    UILabel *_badgelessCenteredTitleLabel;
    UIActivityIndicatorView *_spinner;
}

@property (retain, nonatomic) PSUIBadgeView *badgeView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) PSUIBadgeView *centeredBadgeView;
@property (retain, nonatomic) UILabel *centeredTitleLabel;
@property (retain, nonatomic) UILabel *badgelessCenteredTitleLabel;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;

+ (long long)cellStyle;

- (id)textLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)detailTextLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canReload;
- (_Bool)canBeChecked;
- (void)_setBadge:(id)arg1 andTitle:(id)arg2 andSubtitle:(id)arg3 andStatus:(id)arg4;
- (void)_setCenteredBadge:(id)arg1 andCenteredTitle:(id)arg2 andStatus:(id)arg3;
- (void)_setBadgelessCenteredTitle:(id)arg1 andStatus:(id)arg2;

@end
