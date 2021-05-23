/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Preferences/PSTableCell.h>

@class NSLayoutConstraint;

@interface FASharedServicesSpecifierCell : PSTableCell

{
    NSLayoutConstraint *_widthConstraint;
}

- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)blankIcon;
- (id)getLazyIcon;

@end
