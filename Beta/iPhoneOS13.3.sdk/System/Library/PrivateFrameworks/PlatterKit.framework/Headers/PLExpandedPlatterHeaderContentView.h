/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@interface PLExpandedPlatterHeaderContentView

- (void)setDate:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setDateFormatStyle:(long long)arg1;
- (void)_layoutUtilityButtonWithScale:(double)arg1;
- (void)setDateAllDay:(_Bool)arg1;
- (double)_headerHeightForWidth:(double)arg1;
- (void)_configureIconButton:(id)arg1 withIcon:(id)arg2;
- (double)_iconDimension;
- (double)_iconLeadingPadding;
- (double)_iconTrailingPadding;
- (void)_configureDateLabel;
- (void)_layoutDateLabelWithScale:(double)arg1;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_updateStylingForTitleLabel:(id)arg1;
- (void)_updateUtilityButtonFont;
- (void)_configureUtilityButton;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (struct CGRect)_titleLabelBoundsForSize:(struct CGSize)arg1;
- (id)_ellipsisHighlightedBackgroundImage;
- (void)_updateUtilityButtonVibrantStyling;
- (double)_largeTextTitleLabelBaselineOffset;
- (double)_titleFirstLineCenterY;

@end
