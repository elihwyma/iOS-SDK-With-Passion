/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, NSMutableDictionary, TableViewManager;

@interface ManagedTableViewCell : UITableViewCell

{
    TableViewManager *_parentTableManager;
    NSMutableDictionary *_cellDict;
    NSIndexPath *_currentIndexPath;
    double _cellXEdgeInset;
    double _neededContentHeight;
    double _computedRightmostEditTextInset;
    double _forcedRightmostEditTextInset;
    struct CGRect _modifiedContentViewFrame;
}

@property (nonatomic) TableViewManager *parentTableManager;
@property (retain, nonatomic) NSMutableDictionary *cellDict;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic, readonly) double neededContentHeight;
@property (nonatomic, readonly) double computedRightmostEditTextInset;
@property (nonatomic) double forcedRightmostEditTextInset;

- (void)dealloc;
- (void)prepareForReuse;
- (id)accessibilityValue;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)edgeInsetValue:(id)arg1;
- (double)rightInsetForView:(id)arg1 withItem:(id)arg2;
- (double)usableContentWidthForItem:(id)arg1 withVerticalNeighborView:(id)arg2;
- (double)usableContentWidth;
- (double)leftInsetForView:(id)arg1 withItem:(id)arg2;
- (double)horizontalSpacingForView:(id)arg1 withItem:(id)arg2;
- (double)verticalSpacingForView:(id)arg1 withItem:(id)arg2;
- (double)verticalInset;
- (double)calculateFrameSizeForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned long long)arg3 withRemainingContentWidth:(double)arg4;
- (void)calculatePositionForView:(id)arg1 forItem:(id)arg2 atItemIndex:(unsigned long long)arg3;
- (void)repositionView:(id)arg1 ifOverlapsPreviousView:(id)arg2;

@end
