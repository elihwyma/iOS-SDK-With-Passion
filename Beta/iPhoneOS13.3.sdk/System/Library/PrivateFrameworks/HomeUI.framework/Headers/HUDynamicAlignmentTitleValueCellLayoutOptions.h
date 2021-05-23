/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUGridCellLayoutOptions.h>

@class NSString;

@interface HUDynamicAlignmentTitleValueCellLayoutOptions : HUGridCellLayoutOptions

{
    NSString *_longestPossibleValueText;
    NSString *_longestPossibleTitleText;
}

@property (retain, nonatomic) NSString *longestPossibleValueText;
@property (retain, nonatomic) NSString *longestPossibleTitleText;

- (id)initWithCellSizeSubclass:(long long)arg1 longestPossibleValueText:(id)arg2 longestPossibleTitleText:(id)arg3;

@end
