/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSTableCell.h>

__attribute__((visibility("hidden")))
@interface PSUICarrierSpacePlanTableCell : PSTableCell

+ (id)checkIcon;
+ (id)spacerIcon;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setChecked:(_Bool)arg1;
- (id)detailText;
- (id)primaryText;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (_Bool)canBeChecked;
- (id)accessoryText;

@end
