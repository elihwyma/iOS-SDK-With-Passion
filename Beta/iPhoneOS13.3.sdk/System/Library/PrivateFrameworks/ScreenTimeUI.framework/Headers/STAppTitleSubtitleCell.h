/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSTableCell.h>

__attribute__((visibility("hidden")))
@interface STAppTitleSubtitleCell : PSTableCell

{
    _Bool _hasSubtitle;
}

@property (nonatomic) _Bool hasSubtitle;
@property (nonatomic, readonly) _Bool isAppCell;

+ (long long)cellStyle;

- (void)layoutSubviews;
- (void)setSpecifier:(id)arg1;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)_didFetchAppInfoOrIcon:(id)arg1;

@end
