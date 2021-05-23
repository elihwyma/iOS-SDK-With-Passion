/*
 Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

#import <Preferences/PSTableCell.h>

@interface ACUIAccountCollectionLinkCell : PSTableCell

+ (id)specifierWithTitle:(id)arg1 accounts:(id)arg2;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (id)_detailTextForAccountSpecifiers:(id)arg1;

@end
