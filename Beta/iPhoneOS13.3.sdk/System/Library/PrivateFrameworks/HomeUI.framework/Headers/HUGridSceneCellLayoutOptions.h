/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCellLayoutOptions.h>

@class UIFont;

@interface HUGridSceneCellLayoutOptions : HUGridCellLayoutOptions

{
    double _iconInnerHorizontalMargin;
    double _titleInterLineSpacing;
    double _titleDescriptionLineSpacing;
    UIFont *_descriptionFont;
    double _cellHeight;
    unsigned long long _numberOfTitleLines;
}

@property (nonatomic) double iconInnerHorizontalMargin;
@property (nonatomic) double titleInterLineSpacing;
@property (nonatomic) double titleDescriptionLineSpacing;
@property (retain, nonatomic) UIFont *descriptionFont;
@property (nonatomic) double cellHeight;
@property (nonatomic) unsigned long long numberOfTitleLines;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
