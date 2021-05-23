/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUTitleValueCell.h>

@class HUDynamicAlignmentTitleValueCellLayoutOptions;

@interface HUDynamicAlignmentTitleValueCell : HUTitleValueCell

{
    HUDynamicAlignmentTitleValueCellLayoutOptions *_layoutOptions;
}

@property (retain, nonatomic) HUDynamicAlignmentTitleValueCellLayoutOptions *layoutOptions;

- (void)_ensureCorrectHeaderViewOrientation;
- (_Bool)useVerticalLayout;

@end
