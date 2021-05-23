/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <UIKit/UIView.h>

@class AKPageController, NSHashTable, NSString, PKCanvasView, PKInk, UIGestureRecognizer;

@protocol AKInkOverlayViewDelegate, PKRulerHostingDelegate;

@interface AKInkOverlayView : UIView

{
    PKInk *_ink;
    NSHashTable *_reportedStrokes;
    AKPageController *_pageController;
    id _drawingUndoTarget;
    PKCanvasView *_canvasView;
    id <AKInkOverlayViewDelegate> _delegate;
    id <PKRulerHostingDelegate> _rulerHostingDelegate;
    struct CGSize _canvasSizeInPKDrawingSpace;
    struct CGRect _previousPageRectInAKModel;
}

@property (weak) id drawingUndoTarget;
@property struct CGSize canvasSizeInPKDrawingSpace;
@property (nonatomic) struct CGRect previousPageRectInAKModel;
@property (weak) AKPageController *pageController;
@property (retain) PKCanvasView *canvasView;
@property (weak) id <AKInkOverlayViewDelegate> delegate;
@property (copy) PKInk *ink;
@property (nonatomic, readonly) UIGestureRecognizer *drawingGestureRecognizer;
@property (nonatomic, readonly) UIGestureRecognizer *pinchGestureRecognizer;
@property (weak, nonatomic) id <PKRulerHostingDelegate> rulerHostingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGRect)_convertRect:(struct CGRect)arg1 fromPageControllerModelSpace:(id)arg2 toDrawingInCanvasViewSpace:(id)arg3;
+ (id)newAKInkOverlayViewForCurrentPlatformWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
+ (id)newDrawingUndoTargetWithPageController:(id)arg1;

- (void)commonInit;
- (void)teardown;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)awakeFromNib;
- (id)initWithPageController:(id)arg1 drawingUndoTarget:(id)arg2;
- (void)commonPostInit;
- (void)_updateCanvasViewInk;
- (void)setupInkView;
- (void)_calculateFixedPixelSize:(struct CGSize *)arg1 drawingScale:(double *)arg2;
- (_Bool)canvasNeedsUpdate;
- (id)updatedDrawingForPageRectUpdate;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (void)removeStrokesFromDrawing:(id)arg1;
- (_Bool)_canvasView:(id)arg1 shouldBeginDrawingWithTouch:(id)arg2;
- (void)canvasViewDidBeginDrawing:(id)arg1;
- (void)canvasViewDidEndDrawing:(id)arg1;
- (void)_canvasView:(id)arg1 beganStroke:(id)arg2;
- (void)_canvasView:(id)arg1 endedStroke:(id)arg2;
- (void)_canvasView:(id)arg1 cancelledStroke:(id)arg2;

@end
