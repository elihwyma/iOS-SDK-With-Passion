/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSTableCell.h>

@class NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface PSGFollowUpHeaderCell : PSTableCell

{
    UILabel *_followTitle;
    UILabel *_followSubtitle;
    NSArray *_constraints;
}

+ (long long)cellStyle;

- (void)layoutSubviews;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
