/*
 Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

#import <UIKit/UIView.h>

@class CADisplayLink, DKDrawing, DKDrawingStroke, DKPointSmoothing, MISSING_TYPE, NSMutableArray, NSString, NSUndoManager, UIColor;

@protocol DKInkRenderer, DKInkViewRenderDelegate;

@interface DKInkView : UIView

{
    DKDrawing *_currentDrawing;
    struct CGPoint _lastPoint;
    double _lastTouchTime;
    struct CGPoint _velocityInWindow;
    id _trackingTouchID;
    _Bool _trackingTouches;
    CDUnknownBlockType _animationCompletionHandler;
    _Bool _isAddingPointWithoutSmoothing;
    _Bool _scaleDrawingToFitCanvas;
    _Bool _allowInput;
    _Bool _isRenderingPaused;
    UIColor *_strokeColor;
    double _minPressure;
    double _maxPressure;
    double _minThickness;
    double _maxThickness;
    UIView<DKInkRenderer> *_renderer;
    DKDrawingStroke *_currentBrushStroke;
    NSMutableArray *_currentInterpolatedBrushStroke;
    NSMutableArray *_cachedInterpolatedBrushStrokes;
    double _currentWeight;
    unsigned long long _totalPointsAdded;
    double _strokeStartTime;
    DKPointSmoothing *_inputFIFO;
    unsigned long long _animationType;
    NSMutableArray *_cachedInterpolatedAnimationPoints;
    NSMutableArray *_cachedInterpolatedAnimationStrokes;
    NSMutableArray *_computedAnimationFrames;
    double _drawingScale;
    CADisplayLink *_displayLink;
    NSUndoManager *_strokeUndoManager;
    unsigned long long _mode;
    id <DKInkViewRenderDelegate> _renderPreviewDelegate;
    unsigned long long _renderPreviewMode;
    struct CGPoint _strokeStartLocation;
    struct CGPoint _strokeLastLocation;
    MISSING_TYPE *_lastVectorPoint;
    struct CGRect _aggregateInvalid;
    struct CGRect _unionDrawingRect;
}

@property (retain, nonatomic) UIView<DKInkRenderer> *renderer;
@property (retain, nonatomic) DKDrawingStroke *currentBrushStroke;
@property (retain, nonatomic) NSMutableArray *currentInterpolatedBrushStroke;
@property (retain, nonatomic) NSMutableArray *cachedInterpolatedBrushStrokes;
@property (nonatomic) double currentWeight;
@property unsigned long long totalPointsAdded;
@property struct CGPoint strokeStartLocation;
@property struct CGPoint strokeLastLocation;
@property double strokeStartTime;
@property _Bool isAddingPointWithoutSmoothing;
@property (nonatomic) MISSING_TYPE *lastVectorPoint;
@property (retain, nonatomic) DKPointSmoothing *inputFIFO;
@property (nonatomic) struct CGRect aggregateInvalid;
@property (nonatomic) struct CGRect unionDrawingRect;
@property (nonatomic) unsigned long long animationType;
@property (retain, nonatomic) NSMutableArray *cachedInterpolatedAnimationPoints;
@property (retain, nonatomic) NSMutableArray *cachedInterpolatedAnimationStrokes;
@property (retain, nonatomic) NSMutableArray *computedAnimationFrames;
@property (nonatomic) double drawingScale;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) NSUndoManager *strokeUndoManager;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) _Bool scaleDrawingToFitCanvas;
@property (nonatomic) _Bool allowInput;
@property (nonatomic, readonly) long long countOfCurrentStroke;
@property (nonatomic, readonly) _Bool canvasHasInk;
@property (nonatomic, readonly) _Bool trackingTouches;
@property (nonatomic, readonly) _Bool isRenderingPaused;
@property (weak, nonatomic) id <DKInkViewRenderDelegate> renderPreviewDelegate;
@property (nonatomic) unsigned long long renderPreviewMode;
@property (nonatomic, readonly) struct CGRect inkBounds;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double minPressure;
@property (nonatomic) double maxPressure;
@property (nonatomic) double minThickness;
@property (nonatomic) double maxThickness;
@property (copy, nonatomic) DKDrawing *currentDrawing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (struct CGPoint)normalizeVectorPoint:(struct CGPoint)arg1;
+ (double)lengthOfVector:(struct CGVector)arg1;
+ (struct CGVector)normalizeVector:(struct CGVector)arg1;
+ (_Bool)gpuAvailable;
+ (double)windowBackingScaleFactor:(id)arg1;

- (void)dealloc;
- (void)clear;
- (id)initWithCoder:(id)arg1;
- (void)teardown;
- (void)setHidden:(_Bool)arg1;
- (void)_commonInit;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)_display;
- (double)interfaceScale;
- (void)continueStrokeWithoutSmoothing: /* Error: Ran out of types for this method. */;
- (_Bool)ak_forceAvailableForTouch:(id)arg1;
- (double)weightForValue:(double)arg1;
- (double)weightForTouch:(id)arg1;
- (void)startStroke: /* Error: Ran out of types for this method. */;
- (void)continueStroke: /* Error: Ran out of types for this method. */;
- (void)terminateStroke;
- (void)resumeRendering;
- (void)inkDidRender:(id)arg1;
- (void)_startDisplayLink;
- (void)_stopDisplayLink;
- (_Bool)_deviceSupportsGL;
- (void)setupRenderer;
- (void)_addUninterpolatedPoints:(MISSING_TYPE **)arg1 controlPoint:(MISSING_TYPE **)arg2 count:(unsigned long long)arg3 flushing:(_Bool)arg4;
- (void)_renderEmittedPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)_setDrawingOnRendererWithReplayAnimation:(id)arg1;
- (void)_setDrawingOnRendererWithBleedAnimation:(id)arg1;
- (void)_setDrawingOnRenderer:(id)arg1;
- (void)setCurrentDrawing:(id)arg1 scaleDrawingToFitBounds:(_Bool)arg2 withAnimationType:(unsigned long long)arg3 animationCompletionHandler:(CDUnknownBlockType)arg4;
- (void)_notifyRenderDelegate;
- (void)_replayAnimationTick:(id)arg1;
- (void)_computeAnimationFramesFittingInMaxDuration:(double)arg1;
- (void)_undoLastStroke:(id)arg1;
- (MISSING_TYPE *)_vector4ForTouchSettingWeightAndVelocity:(id)arg1 average:(_Bool)arg2;
- (void)_postTouchesBeganNotification:(struct CGPoint)arg1;
- (void)handleCoalescedTouches:(id)arg1 forTouch:(id)arg2 average:(_Bool)arg3;
- (void)_postTouchesEndedNotification:(struct CGPoint)arg1;
- (void)_updateVelocityWithTouch:(id)arg1 average:(_Bool)arg2;
- (struct CGPoint)_velocityForTouch:(id)arg1;
- (void)inkDidCompleteRender:(id)arg1;
- (void)pauseRendering;
- (id)snapshotRendererState;
- (void)undoLastStroke;

@end
