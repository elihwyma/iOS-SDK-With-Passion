/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UILabel;

@interface PSSubtitleDisclosureTableCell

{
    UILabel *_valueLabel;
}

@property (retain, nonatomic) UILabel *valueLabel;

+ (long long)cellStyle;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)_valueLabelForSpecifier:(id)arg1;
- (_Bool)canReload;

@end
