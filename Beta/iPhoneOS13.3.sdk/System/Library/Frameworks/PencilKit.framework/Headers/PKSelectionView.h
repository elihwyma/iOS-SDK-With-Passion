/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

#import <PencilKit/Swift-Protocol.h>

@class CAShapeLayer, NSMutableArray, NSString, PKSelectionController, PKStrokeSelection, UIBezierPath, UIDragInteraction, UIDragPreview, UIImage, UIImageView, UILongPressGestureRecognizer, UIResponder, UITapGestureRecognizer;

@interface PKSelectionView : UIView <Swift>

{
    UIImageView *_strokeSelectionImageView;
    UIDragInteraction *_dragInteraction;
    struct CGRect _originalStrokeFrame;
    struct CGPoint _initialDragPosition;
    double _initialRotation;
    PKSelectionController *_selectionController;
    _Bool _isClearingSelection;
    UITapGestureRecognizer *_editMenuGR;
    CAShapeLayer *_lassoLayer;
    CAShapeLayer *_whiteLassoLayer;
    NSMutableArray *_subLassoLayers;
    UIDragPreview *_previewProvider;
    double _rotation;
    double _scale;
    struct CGPoint _originalTranslation;
    double _startRotation;
    double _startScale;
    struct CGPoint _editMenuLocation;
    UIResponder *_previousResponder;
    _Bool _isDragging;
    _Bool _wantsDragPlatter;
    PKStrokeSelection *_strokeSelection;
    UIImage *_strokeSelectionImage;
    UILongPressGestureRecognizer *_dragGR;
    UIBezierPath *_lassoPath;
    CDUnknownBlockType _calculateSelectionHullBlock;
    struct CGPoint _offsetInTouchView;
    struct CGAffineTransform _selectionDrawingTransform;
    struct CGAffineTransform _userTransform;
}

@property (retain, nonatomic) UIBezierPath *lassoPath;
@property (copy, nonatomic) CDUnknownBlockType calculateSelectionHullBlock;
@property (nonatomic) struct CGAffineTransform userTransform;
@property (nonatomic, readonly) _Bool isDragging;
@property (retain, nonatomic) PKStrokeSelection *strokeSelection;
@property (nonatomic, readonly) struct CGPoint offsetInTouchView;
@property (retain, nonatomic) UIImage *strokeSelectionImage;
@property (nonatomic) struct CGAffineTransform selectionDrawingTransform;
@property (nonatomic) _Bool wantsDragPlatter;
@property (nonatomic, readonly) UILongPressGestureRecognizer *dragGR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)setAlpha:(double)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)willMoveToWindow:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;
- (void)_updateTransform;
- (void)delete:(id)arg1;
- (long long)editingInteractionConfiguration;
- (struct CGColor *)selectionColor;
- (void)duplicate:(id)arg1;
- (void)toggleEditMenu;
- (void)dragSelection:(id)arg1;
- (void)setupAnimatedLasso;
- (void)_setupWindowNotificationsForScene:(id)arg1;
- (void)_clearSelection:(id)arg1;
- (void)setupAnimatedLassoForStrokes:(id)arg1 lassoLayer:(id)arg2 whiteLassoLayer:(id)arg3 isSelection:(_Bool)arg4 lassoStroke:(id)arg5;
- (void)addAnimationsToSelectionLayer:(id)arg1 whiteLayer:(id)arg2;
- (vector_e1abc270)pointsOfInterestForStrokes:(id)arg1;
- (_Bool)lassoContainsPoint:(struct CGPoint)arg1;
- (void)_dragWillBegin;
- (void)didBeginDraggingSelection;
- (void)scrollContent:(struct CGPoint)arg1;
- (void)didEndGestureWithTranslation:(struct CGPoint)arg1 transform:(struct CGAffineTransform)arg2;
- (void)hideStrokeSelectionImageView:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 strokeSelection:(id)arg2 selectionController:(id)arg3;
- (void)generateStrokeImageForPasteAndDND;
- (void)scaleSelection:(id)arg1;
- (void)rotateSelection:(id)arg1;
- (void)makeViewAliveAtLocation:(struct CGPoint)arg1;
- (void)animateViewToOriginalPosition;
- (void)updateLocationForDrop:(struct CGPoint)arg1;
- (id)strokesContainedBySelection:(id)arg1;

@end
