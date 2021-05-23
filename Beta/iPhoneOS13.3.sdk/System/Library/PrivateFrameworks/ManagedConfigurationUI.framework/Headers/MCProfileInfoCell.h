/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <Preferences/PSTableCell.h>

__attribute__((visibility("hidden")))
@interface MCProfileInfoCell : PSTableCell

+ (float)desiredRowHeight;

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_scriptingInfo;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)setDisplayName:(id)arg1 organization:(id)arg2;
- (void)setIsNearExpiration:(_Bool)arg1;

@end
