/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIActivityIndicatorView;

@interface PSSpinnerTableCell

{
    UIActivityIndicatorView *_spinner;
}

- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)refreshCellContentsWithSpecifier:(id)arg1;

@end
