/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class UIImageView, UILabel;

@interface PSBadgedTableCell

{
    UIImageView *_badgeImageView;
    UILabel *_badgeNumberLabel;
    long long _badgeInt;
}

+ (id)reuseIdentifierForClassAndType:(long long)arg1;
+ (double)badgePadding;
+ (id)badgeNumberLabelTextColor;
+ (id)unreadBubbleImage;

- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)badgeWithInteger:(long long)arg1;
- (void)resetLocale;
- (_Bool)_shouldUseRoundStyle;

@end
