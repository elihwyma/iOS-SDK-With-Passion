/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIStackView.h>

@class NSMutableArray;

@interface OBStackedIconTextList : UIStackView

{
    double _itemSpacing;
    NSMutableArray *_entries;
    double _iconTextPadding;
    unsigned long long _dataDetectorTypes;
}

@property (nonatomic) double iconTextPadding;
@property (nonatomic) unsigned long long dataDetectorTypes;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 text:(id)arg3;
- (void)addEntryWithIcon:(id)arg1 iconSize:(struct CGSize)arg2 attributedText:(id)arg3;

@end
