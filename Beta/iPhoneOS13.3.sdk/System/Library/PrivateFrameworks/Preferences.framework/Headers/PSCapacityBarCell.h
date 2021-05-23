/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, PSCapacityBarLegendView, PSCapacityBarView, UIColor, UIFont, UILabel, UIStackView;

@interface PSCapacityBarCell

{
    double _tableWidth;
    NSMutableArray *_normalConstraints;
    NSMutableArray *_largeConstraints;
    NSMutableArray *_legendConstraints;
    NSMutableArray *_commonConstraints;
    NSLayoutConstraint *_barHeightConstraint;
    UILabel *_titleLabel;
    UILabel *_sizeLabel;
    UILabel *_loadingLabel;
    PSCapacityBarView *_barView;
    UIStackView *_legendView;
    NSArray *_legends;
    PSCapacityBarLegendView *_otherLegend;
    UIFont *_legendFont;
    UIFont *_bigFont;
    UIColor *_legendTextColor;
    _Bool _hideLegend;
    _Bool _showOtherLegend;
    _Bool _forceLoading;
    _Bool _sizesAreMem;
    NSString *_sizeFormat;
}

+ (id)specifierWithTitle:(id)arg1;
+ (id)specifierWithTitle:(id)arg1 useStandardFontSizeForSizeLabel:(_Bool)arg2;

- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (void)initializeViews;
- (void)createLargeConstraints;
- (void)createNormalConstraints;
- (void)createCommonConstraints;
- (void)addVerticalLegends;
- (void)addHorizontalLegends;
- (id)usageString:(id)arg1;
- (void)createLegends:(id)arg1;

@end
