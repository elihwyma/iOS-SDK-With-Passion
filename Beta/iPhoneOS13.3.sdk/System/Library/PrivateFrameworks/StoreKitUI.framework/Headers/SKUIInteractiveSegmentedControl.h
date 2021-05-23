/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray;

@interface SKUIInteractiveSegmentedControl : UIControl

{
    NSMutableArray *_dividerViews;
    CDUnknownBlockType _dividerCreationBlock;
    double _dividerWidth;
    NSArray *_segments;
    double _selectionProgress;
}

@property (copy, nonatomic) CDUnknownBlockType dividerCreationBlock;
@property (nonatomic) double dividerWidth;
@property (copy, nonatomic) NSArray *segments;
@property (nonatomic) double selectionProgress;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_unregisterForObservationOfSegment:(id)arg1;
- (id)_createDividerViewWithFrame:(struct CGRect)arg1;
- (long long)selectedSegmentIndexForSelectionProgress:(double)arg1;
- (double)relativeSelectionProgressForSelectionProgress:(double)arg1 segmentIndex:(long long)arg2;
- (void)_registerForObservationOfSegment:(id)arg1;
- (double)selectionProgressForRelativeSectionProgress:(double)arg1 segmentIndex:(long long)arg2;
- (_Bool)_setSelectionProgress:(double)arg1;
- (void)_applySelectionProgressToSegments;
- (void)_notifyClientsOfSelectionProgressChange;
- (double)selectionProgressForSelectedSegmentAtIndex:(long long)arg1;
- (void)_segmentControlTouchUpInsideAction:(id)arg1;

@end
