/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, PKSelectionView, PKSpaceInsertionController, PKStrokeSelection, PKTiledView, UIDropInteraction;

@protocol OS_dispatch_queue;

@interface PKSelectionController : NSObject

{
    struct CGPoint _dropPosition;
    NSUUID *_previousDrawingUUIDForSelection;
    int _selectionViewCount;
    double _cachedStrokeImageScale;
    PKSpaceInsertionController *_spaceInsertionController;
    UIDropInteraction *_dropInteraction;
    _Bool _hasCurrentSelection;
    _Bool _isCurrentlyAddingSpace;
    PKTiledView *_tiledView;
    PKStrokeSelection *_currentStrokeSelection;
    NSObject<OS_dispatch_queue> *_selectionHullQueue;
    PKSelectionView *_selectionView;
    struct CGAffineTransform _selectionTransform;
}

@property (weak, nonatomic) PKTiledView *tiledView;
@property (nonatomic) _Bool hasCurrentSelection;
@property (nonatomic, readonly) _Bool shouldClampInputPoints;
@property (retain, nonatomic) PKStrokeSelection *currentStrokeSelection;
@property (nonatomic) struct CGAffineTransform selectionTransform;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *selectionHullQueue;
@property (nonatomic) _Bool isCurrentlyAddingSpace;
@property (retain, nonatomic) PKSelectionView *selectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)topView;
- (void)delete:(id)arg1;
- (void)didScroll:(struct CGPoint)arg1;
- (void)duplicate:(id)arg1;
- (struct CGAffineTransform)_selectionDrawingTransformForDrawing:(id)arg1;
- (void)setImageOnSelectionViewForStrokeSelection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearSelectionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateImageForStrokeSelection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)clearSelectionIfNecessary;
- (_Bool)_isValidDropPointForStrokes:(struct CGPoint)arg1;
- (void)didMoveStrokeSelectionToLocation:(struct CGPoint)arg1 transform:(struct CGAffineTransform)arg2;
- (void)commitStrokesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setAdditionalStrokes:(id)arg1 inDrawing:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithTiledView:(id)arg1;
- (void)changeColorOfSelection:(id)arg1;
- (void)_layoutViewsIfNecessary;
- (_Bool)didResizeWhitespace;
- (void)dismissSpacingResizeHandles;
- (struct CGRect)boundsForDrawing:(id)arg1;
- (void)_selectionRefreshWithChangeToDrawings:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetSelectedStrokeStateForRenderer;
- (id)_drawingForLiveAttachment;
- (struct CGRect)_visibleOnscreenBoundsForDrawing:(id)arg1;
- (_Bool)_liveDrawingIsAtEndOfDocument;
- (id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2 visibleOnscreenStrokes:(id)arg3;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(struct CGAffineTransform)arg3 drawing:(id)arg4;
- (id)_drawingForSelectionRect:(struct CGRect)arg1;
- (void)didBeginSpaceInsertionWithLassoStroke:(id)arg1 drawing:(id)arg2;
- (void)didSelectStrokesNotification:(id)arg1;
- (void)didSelect:(id)arg1 lassoStroke:(id)arg2 transform:(struct CGAffineTransform)arg3 drawing:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)moveSelectionViewBasedOnStrokeTransform:(struct CGAffineTransform)arg1 drawing:(id)arg2;
- (void)_addViewForStrokeSelection:(id)arg1 isDragSource:(_Bool)arg2 drawing:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (struct CGPoint)_selectionOffsetForDrawing:(id)arg1;
- (struct CGRect)_calculateFrameForSelectionView:(id)arg1 inDrawing:(id)arg2;
- (id)_rotateImageIfNecessary:(id)arg1;
- (id)rotateUIImage:(id)arg1 clockwise:(_Bool)arg2;
- (void)_removeSelectionViewAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 selectionAction:(long long)arg3 inkChanges:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)newStrokesForSelection:(id)arg1 toDrawing:(id)arg2;
- (void)registerCommandWithUndoManager:(id)arg1;
- (id)_newInk:(id)arg1 withChange:(id)arg2;
- (id)drawingForUUID:(id)arg1;
- (void)applyCommand:(id)arg1 toDrawing:(id)arg2;
- (void)clearSelectionIfNecessaryAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_selectionRefreshWithChangeToDrawings:(id)arg1;
- (void)_removeSelectionView;
- (void)resetStrokesAndClearSelection;
- (void)eraseSelection;
- (void)_addItemsToPasteboard:(id)arg1;
- (void)_pasteStrokeSelection:(id)arg1 atPoint:(struct CGPoint)arg2 inDrawing:(id)arg3;
- (struct CGSize)viewSizeForStrokeSelection:(id)arg1;
- (struct CGPoint)closestPointForPastedSelectionRect:(struct CGRect)arg1 withDrawing:(id *)arg2;
- (struct CGAffineTransform)_selectionTransformForStrokes:(id)arg1 atLocation:(struct CGPoint)arg2 dragOffsetInDragView:(struct CGPoint)arg3 transform:(struct CGAffineTransform)arg4 constrainSelection:(_Bool)arg5 inDrawing:(id)arg6;
- (id)_commitStrokeSelection:(id)arg1 toDrawing:(id)arg2 selectionAction:(long long)arg3;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(_Bool)arg2 withStrokeSelection:(id)arg3;
- (struct CGPoint)_pointInStrokeSpace:(struct CGPoint)arg1 inDrawing:(id)arg2;
- (id)setupSpaceInsertionControllerIfNecessary;
- (void)_createSelectionViewForDropSession:(id)arg1 removeFromSource:(_Bool)arg2;
- (void)updateCurrentStrokeSelectionTransformForLocation:(id)arg1 atLocation:(struct CGPoint)arg2 offsetInTouchView:(struct CGPoint)arg3 transform:(struct CGAffineTransform)arg4;
- (struct CGRect)_scrollViewDrawingFrame;
- (struct CGRect)_extendedBoundsForDrawing:(id)arg1;
- (id)_attachmentForSelectionRect:(struct CGRect)arg1;
- (id)intersectedStrokesFromStroke:(id)arg1 drawing:(id)arg2;
- (struct CGPoint)intersectionPointAlongStroke:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (id)strokesForSpaceInsertionWithStrokeSelection:(id)arg1 inDrawing:(id)arg2 offset:(double)arg3;
- (void)hideStrokes:(id)arg1 inDrawing:(id)arg2;
- (struct CGRect)_scrollViewVisibleBounds;
- (id)_visibleStrokesWithinExtendedBounds:(id)arg1 forDrawing:(id)arg2;

@end
