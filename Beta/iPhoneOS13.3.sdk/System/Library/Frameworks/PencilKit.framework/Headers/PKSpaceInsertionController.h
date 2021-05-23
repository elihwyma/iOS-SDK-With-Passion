/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, PKDrawing, PKSelectionController, PKSpaceInsertionView, PKStroke, PKStrokeSelection, UIImageView, UIPanGestureRecognizer, UIView;

@interface PKSpaceInsertionController : NSObject

{
    NSMutableOrderedSet *_strokesBelow;
    NSMutableOrderedSet *_strokesAbove;
    UIView *_tapToDismissView;
    PKSpaceInsertionView *_topInsertionView;
    PKSpaceInsertionView *_bottomInsertionView;
    struct CGPoint _beginDragLocation;
    struct CGPoint _initialViewLocation;
    UIPanGestureRecognizer *_dragTopLollipopGR;
    UIPanGestureRecognizer *_dragBottomLollipopGR;
    PKStrokeSelection *_bottomStrokeSelection;
    PKStrokeSelection *_topStrokeSelection;
    UIImageView *_topImageView;
    UIImageView *_bottomImageView;
    _Bool _topHandleRemovesWhitespace;
    _Bool _isCurrentlyAddingSpace;
    _Bool _didMoveStrokes;
    PKStroke *_lassoStroke;
    PKDrawing *_drawing;
    PKSelectionController *_selectionController;
}

@property (nonatomic) _Bool isCurrentlyAddingSpace;
@property (retain, nonatomic) PKStroke *lassoStroke;
@property (retain, nonatomic) PKDrawing *drawing;
@property (weak, nonatomic, readonly) PKSelectionController *selectionController;
@property (nonatomic, readonly) _Bool didMoveStrokes;

- (void)didScroll:(struct CGPoint)arg1;
- (void)_layoutViewsIfNecessary;
- (void)dismissSpacingResizeHandles;
- (void)commitSpacingResize;
- (id)initWithSelectionController:(id)arg1;
- (void)didBeginCreatingSpaceWithLassoStroke:(id)arg1 drawing:(id)arg2;
- (double)_initalBufferBetweenLollipops;
- (void)_blitStrokesToViewForSpaceInsertionType:(unsigned long long)arg1;
- (void)_temporarilyShiftStrokesWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;
- (void)_makeSpaceWithOffset:(double)arg1 spaceInsertionType:(unsigned long long)arg2;
- (void)_didEndCreatingSpace;
- (void)_sortStrokesAboveOrBelow;
- (void)_addSpacingViewsWithFrame:(struct CGRect)arg1;
- (void)projectPath:(struct CGPath *)arg1 toEndOfFrame:(struct CGRect)arg2;
- (void)_dragLollipop:(id)arg1;
- (void)initTopAndBottomSelectionIfNecessary;
- (double)offsetInStrokeSpaceFromViewOffset:(double)arg1 inDrawing:(id)arg2;
- (id)_visibleStrokesOnPage:(id)arg1;

@end
