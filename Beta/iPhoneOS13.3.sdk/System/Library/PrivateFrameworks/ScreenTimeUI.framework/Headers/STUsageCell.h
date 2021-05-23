/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/STTableCell.h>

@class NSLayoutConstraint, STCandyBarView, UILabel;

__attribute__((visibility("hidden")))
@interface STUsageCell : STTableCell

{
    UILabel *_itemNameLabel;
    STCandyBarView *_usageBarView;
    UILabel *_usageLabel;
    NSLayoutConstraint *_usageBarWidthConstraint;
}

@property (nonatomic, readonly) NSLayoutConstraint *usageBarWidthConstraint;
@property (nonatomic, readonly) UILabel *itemNameLabel;
@property (nonatomic, readonly) STCandyBarView *usageBarView;
@property (nonatomic, readonly) UILabel *usageLabel;

- (id)value;
- (void)setValue:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)_didFetchAppInfoOrIcon:(id)arg1;

@end
