/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCellLayoutOptions.h>

@interface HUGridServiceCellLayoutOptions : HUGridCellLayoutOptions

{
    double _lineSpacing;
}

@property (nonatomic) double lineSpacing;

+ (id)defaultOptionsForCellSizeSubclass:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
