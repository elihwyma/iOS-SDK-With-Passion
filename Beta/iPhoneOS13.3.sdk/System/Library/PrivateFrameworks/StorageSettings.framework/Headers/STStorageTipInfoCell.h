/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Preferences/PSTableCell.h>

@class NSMutableArray, UILabel;

@interface STStorageTipInfoCell : PSTableCell

{
    NSMutableArray *_constraints;
    UILabel *_infoLabel;
}

- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
