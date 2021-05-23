/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCellLayoutOptions.h>

@class UIFont;

@interface HUGridStatusBannerCellLayoutOptions : HUGridCellLayoutOptions

{
    double _titleInterLineSpacing;
    double _trailingInset;
    double _horizontalItemSpacing;
    double _leadingInset;
    double _iconTopInset;
    double _iconTrailingInset;
    double _iconHeight;
    double _iconWidth;
    double _titleTopInset;
    UIFont *_descriptionFont;
    double _cellHeight;
    unsigned long long _maxNumberOfTitleLines;
    unsigned long long _maxNumberOfDescriptionLines;
    double _verticalLabelSpacing;
    double _verticalSpacingForLineView;
    double _verticalSpacingForLipElements;
    UIFont *_continueLabelFont;
}

@property (nonatomic) double titleInterLineSpacing;
@property (nonatomic) double trailingInset;
@property (nonatomic) double horizontalItemSpacing;
@property (nonatomic) double leadingInset;
@property (nonatomic) double iconTopInset;
@property (nonatomic) double iconTrailingInset;
@property (nonatomic) double iconHeight;
@property (nonatomic) double iconWidth;
@property (nonatomic) double titleTopInset;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (nonatomic) double cellHeight;
@property (nonatomic) unsigned long long maxNumberOfTitleLines;
@property (nonatomic) unsigned long long maxNumberOfDescriptionLines;
@property (nonatomic) double verticalLabelSpacing;
@property (nonatomic) double verticalSpacingForLineView;
@property (nonatomic) double verticalSpacingForLipElements;
@property (retain, nonatomic) UIFont *continueLabelFont;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)statusBannerCellHeightForWidth:(double)arg1 havingTitleAndDescription:(id)arg2 forContentSizeCategory:(id)arg3;

@end
