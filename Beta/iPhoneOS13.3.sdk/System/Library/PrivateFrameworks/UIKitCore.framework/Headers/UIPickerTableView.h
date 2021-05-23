/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSMutableIndexSet, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIPickerTableView : UITableView <Swift>

{
    struct CGRect _selectionBarRect;
    long long _selectionBarRow;
    NSMutableIndexSet *_checkedRows;
    double _lastClickedOffset;
    long long _lastSelectedRow;
    UIColor *_textColor;
    struct CGRect _visibleRect;
    NSMutableArray *_referencingCells;
    struct {
        unsigned int allowsMultipleSelection:1;
        unsigned int scrollingDirection:2;
        unsigned int didSelectDisabled:1;
        unsigned int skipRowChangeNotifications:1;
        unsigned int scrollingForSelection:1;
        unsigned int pickerViewImplementsSelectionBarChanged:2;
        unsigned int cancellingAnimation:1;
        unsigned int updatingContentInset:1;
    } _pickerTableFlags;
    _Bool _playsFeedback;
    _Bool _generatorActivated;
}

@property (nonatomic, setter=_setSelectionBarRow:) long long selectionBarRow;
@property (nonatomic) _Bool generatorActivated;
@property (nonatomic) struct CGRect selectionBarRect;
@property (nonatomic) long long lastSelectedRow;
@property (getter=_playsFeedback, setter=_setPlaysFeedback:) _Bool playsFeedback;
@property (retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_isInternalTableView;

- (void)dealloc;
- (id)_containerView;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)_updateContentInsets;
- (struct CGRect)_visibleBounds;
- (long long)_contentInsetAdjustmentBehavior;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(_Bool)arg2;
- (id)_pickerView;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 visibleRect:(struct CGRect)arg3;
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3 updateChecked:(_Bool)arg4;
- (_Bool)isRowChecked:(long long)arg1;
- (_Bool)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(_Bool)arg2;
- (void)_setContentOffset:(struct CGPoint)arg1 notify:(_Bool)arg2;
- (_Bool)selectRow:(long long)arg1 animated:(_Bool)arg2 notify:(_Bool)arg3;
- (id)_anyDateLabel;
- (struct CGPoint)contentOffsetForRowAtIndexPath:(id)arg1;
- (void)_notifyContentOffsetChange;
- (id)_checkedRows;
- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;
- (double)_yRangingFromZeroTo:(double)arg1 forUnitY:(double)arg2;
- (double)_viewYForUnitY:(double)arg1;
- (double)_rotationForCellCenterY:(double)arg1;
- (double)_distanceToCenterForY:(double)arg1;
- (double)_yForY:(double)arg1;
- (double)_unitYForViewY:(double)arg1;
- (double)_zForUnitY:(double)arg1;
- (struct CATransform3D)_transformForCellAtY:(double)arg1;
- (void)_playClickIfNecessary;
- (_Bool)_beginTrackingWithEvent:(id)arg1;
- (_Bool)didSelectDisabled:(_Bool)arg1;
- (void)_deactivateFeedbackGeneratorIfNeeded;
- (void)_scrollingFinished;
- (struct CGRect)_selectionBarRectForBounds:(struct CGRect)arg1;
- (double)_zCoordinateForYCoordinate:(double)arg1;
- (void)_scrollViewDidInterruptDecelerating:(id)arg1;
- (_Bool)_shouldWrapCells;

@end
