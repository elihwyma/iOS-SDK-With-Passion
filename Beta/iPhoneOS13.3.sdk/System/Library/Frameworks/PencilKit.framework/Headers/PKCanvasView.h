/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIScrollView.h>

@class NSString, PKCanvasAttachmentView, PKDrawing, PKInk, PKTiledView, PKTool, UIGestureRecognizer, UIView;

@protocol PKCanvasViewDelegate, PKRulerHostingDelegate;

@interface PKCanvasView : UIScrollView

{
    PKTiledView *_tiledView;
    PKCanvasAttachmentView *_pageView;
    UIScrollView *_fixedPixelSizeScrollView;
    UIView *_fixedPixelSizeScrollViewWrapper;
    struct {
        unsigned int delegateCanvasViewDrawingDidChange:1;
        unsigned int delegateCanvasViewDidFinishRendering:1;
        unsigned int delegateCanvasViewDidBeginDrawing:1;
        unsigned int delegateCanvasViewDidEndDrawing:1;
        unsigned int delegateCanvasViewDidBeginUsingTool:1;
        unsigned int delegateCanvasViewDidEndUsingTool:1;
        unsigned int delegateCanvasViewBeganStroke:1;
        unsigned int delegateCanvasViewUpdatedStroke:1;
        unsigned int delegateCanvasViewEndedStroke:1;
        unsigned int delegateCanvasViewCancelledStroke:1;
        unsigned int delegateShouldBeginDrawingWithTouch:1;
        unsigned int delegateCanvasViewWillBeginDrawing:1;
    } _canvasViewFlags;
    _Bool _disableWideGamut;
    UIView *_contentView;
    id <PKRulerHostingDelegate> _rulerHostingDelegate;
    struct CGAffineTransform _drawingTransform;
}

@property (nonatomic, readonly) UIView *contentView;
@property (copy, nonatomic) PKDrawing *nonNullDrawing;
@property (retain, nonatomic) PKInk *ink;
@property (nonatomic) long long _maxFileFormatVersion;
@property (nonatomic) _Bool disableWideGamut;
@property (nonatomic) _Bool rulerEnabled;
@property (weak, nonatomic) id drawingUndoTarget;
@property (nonatomic) SEL drawingUndoSelector;
@property (nonatomic) _Bool predictionDisabled;
@property (nonatomic, readonly) UIView *selectionView;
@property (nonatomic, readonly) UIView *rulerView;
@property (weak, nonatomic) id <PKRulerHostingDelegate> rulerHostingDelegate;
@property (nonatomic, readonly) struct CGSize _fixedPixelSize;
@property (nonatomic) struct CGAffineTransform drawingTransform;
@property (nonatomic, readonly) struct CGAffineTransform strokeTransform;
@property (nonatomic, getter=isFingerDrawingEnabled) _Bool fingerDrawingEnabled;
@property (nonatomic, readonly) UIGestureRecognizer *_drawingGestureRecognizer;
@property (weak, nonatomic) id <PKCanvasViewDelegate> delegate;
@property (copy, nonatomic) PKDrawing *drawing;
@property (copy, nonatomic) PKTool *tool;
@property (nonatomic, getter=isRulerActive) _Bool rulerActive;
@property (nonatomic, readonly) UIGestureRecognizer *drawingGestureRecognizer;
@property (nonatomic) _Bool allowsFingerDrawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setContentSize:(struct CGSize)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)paste:(id)arg1;
- (void)awakeFromNib;
- (void)setMaximumZoomScale:(double)arg1;
- (id)_pinchGestureRecognizer;
- (id)_getDelegateZoomView;
- (id)rulerHostingView;
- (_Bool)rulerHostWantsSharedRuler;
- (_Bool)_hasSelection;
- (id)_selectionController;
- (void)_flushCaches;
- (id)initWithFrame:(struct CGRect)arg1 fixedPixelSize:(struct CGSize)arg2 drawingScale:(double)arg3 layerFixedPixelSize:(_Bool)arg4;
- (void)performUndo:(id)arg1;
- (void)_setFixedPixelSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)canvasViewDidBeginDrawing:(id)arg1;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)_setDrawing:(id)arg1 alreadyRenderedDrawing:(id)arg2 imageForAlreadyRenderedDrawing:(id)arg3 fullyRenderedCompletionBlock:(CDUnknownBlockType)arg4;
- (void)imageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)commitSelectionIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)_currentStroke;
- (void)_canvasViewWillBeginDrawing:(id)arg1;
- (void)canvasView:(id)arg1 beganStroke:(id)arg2;
- (void)canvasView:(id)arg1 endedStroke:(id)arg2;
- (void)canvasView:(id)arg1 cancelledStroke:(id)arg2;
- (void)canvasViewDidEraseStrokes:(id)arg1;
- (_Bool)canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;
- (void)set_fixedPixelSize:(struct CGSize)arg1;
- (struct CGSize)_metalViewDrawableSize;
- (struct CGSize)_rendererControllerPixelSize;
- (void)toolPickerSelectedToolDidChange:(id)arg1;
- (void)toolPickerIsRulerActiveDidChange:(id)arg1;
- (void)_toolPicker:(id)arg1 didChangeColor:(id)arg2;
- (void)_drawingDidChange;
- (void)_fullyRendered;
- (id)initWithFrame:(struct CGRect)arg1 drawingWidth:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 drawingWidth:(double)arg2 fixedPixelSizeScrollView:(id)arg3;
- (void)setupDrawingWidth:(double)arg1 fixedPixelSizeScrollView:(id)arg2;
- (void)_setChildrenOpaque:(_Bool)arg1;
- (void)_setChildrenBackgroundColor:(id)arg1;
- (void)updateFixedPixelSizeViewForBounds:(struct CGRect)arg1;
- (void)_setContentViewOpaqueBackgroundColorIfApplicable;
- (void)updateSubviewsForBounds:(struct CGRect)arg1;
- (void)_setSelectedStrokesColor:(id)arg1;
- (void)_setDrawing:(id)arg1 fullyRenderedCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)shouldToolPickerBecomeVisibleWhenFirstResponder:(id)arg1;
- (void)_updateCanvas;

@end
