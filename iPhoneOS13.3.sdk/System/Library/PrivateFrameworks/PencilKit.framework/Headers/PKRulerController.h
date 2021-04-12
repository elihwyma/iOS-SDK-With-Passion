//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class PKRulerGestureRecognizer, PKRulerLayer, PKRulerView, UIImpactFeedbackGenerator, UIView;
@protocol PKRulerDelegate, PKRulerHostingDelegate;

@interface PKRulerController : NSObject <UIGestureRecognizerDelegate>
{
    UIView *_rulerHostingView;
    BOOL _wantsSharedRuler;
    BOOL _isInteractingWithRuler;
    BOOL _rulerIsRotating;
    BOOL _rulerWasShownViaGesture;
    BOOL _canRulerSnapToAngle;
    BOOL _lastTouchWasMaskedByRuler;
    BOOL _rulerSnappedToAngle;
    PKRulerGestureRecognizer *_rulerGestureRecognizer;
    id <PKRulerDelegate> _delegate;
    id <PKRulerHostingDelegate> _rulerHostingDelegate;
    PKRulerView *_rulerView;
    PKRulerLayer *_rulerLayer;
    UIImpactFeedbackGenerator *_snapImpactBehavior;
    CDStruct_cfd08fee _rulerState;
    CDStruct_cfd08fee _previousRulerState;
    CGAffineTransform _rulerStartTransform;
    CGAffineTransform _defaultRulerTransform;
}

+ (id)sharedRulerView;
@property(nonatomic) BOOL rulerSnappedToAngle; // @synthesize rulerSnappedToAngle=_rulerSnappedToAngle;
@property(retain, nonatomic) UIImpactFeedbackGenerator *snapImpactBehavior; // @synthesize snapImpactBehavior=_snapImpactBehavior;
@property(nonatomic) BOOL lastTouchWasMaskedByRuler; // @synthesize lastTouchWasMaskedByRuler=_lastTouchWasMaskedByRuler;
@property(nonatomic) BOOL canRulerSnapToAngle; // @synthesize canRulerSnapToAngle=_canRulerSnapToAngle;
@property(nonatomic) BOOL rulerWasShownViaGesture; // @synthesize rulerWasShownViaGesture=_rulerWasShownViaGesture;
@property(nonatomic) CDStruct_cfd08fee previousRulerState; // @synthesize previousRulerState=_previousRulerState;
@property(nonatomic) CDStruct_cfd08fee rulerState; // @synthesize rulerState=_rulerState;
@property(retain, nonatomic) PKRulerLayer *rulerLayer; // @synthesize rulerLayer=_rulerLayer;
@property(nonatomic) CGAffineTransform defaultRulerTransform; // @synthesize defaultRulerTransform=_defaultRulerTransform;
@property(nonatomic) CGAffineTransform rulerStartTransform; // @synthesize rulerStartTransform=_rulerStartTransform;
@property(retain, nonatomic) PKRulerView *rulerView; // @synthesize rulerView=_rulerView;
@property(nonatomic) BOOL rulerIsRotating; // @synthesize rulerIsRotating=_rulerIsRotating;
@property(nonatomic) BOOL isInteractingWithRuler; // @synthesize isInteractingWithRuler=_isInteractingWithRuler;
@property(nonatomic) __weak id <PKRulerHostingDelegate> rulerHostingDelegate; // @synthesize rulerHostingDelegate=_rulerHostingDelegate;
@property(nonatomic) __weak id <PKRulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKRulerGestureRecognizer *rulerGestureRecognizer; // @synthesize rulerGestureRecognizer=_rulerGestureRecognizer;
// - (void).cxx_destruct;
- (CGAffineTransform)_transformFromRulerViewToTiledView;
- (CGAffineTransform)angleSnapRulerTransform:(CGAffineTransform)arg1 aroundOrigin:(CGPoint)arg2;
- (CGAffineTransform)canvasTransform;
- (double)getRulerCenterTValueOnScreenForTransform:(CGAffineTransform)arg1;
- (CGAffineTransform)ensureRulerFullyOnscreen:(CGAffineTransform)arg1;
- (CGAffineTransform)pixelSnapRulerTransform:(CGAffineTransform)arg1;
- (BOOL)hitTest:(CGPoint)arg1;
- (void)resetRulerTouches;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateAngle:(id)arg1;
- (void)rulerMoveGesture:(id)arg1;
- (void)eatPencilGesture:(id)arg1;
- (void)updateRuler:(id)arg1;
- (void)hideUI;
- (void)setupGestures;
- (void)endRulerDrawing;
- (void)cancelNonDrawingGestures;
- (void)startRulerDrawing;
- (void)drawingCancelled:(id /* CDUnknownBlockType */)arg1;
- (void)drawingEnded:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (void)drawingBegan:(id)arg1;
- (CGPoint)applyTransformToTouchLocation:(CGPoint)arg1;
- (void)resetRulerTransform;
- (void)resetRuler;
- (void)hideRulerAnimated:(BOOL)arg1;
- (void)hideRuler;
- (void)showRuler;
- (CGRect)_rulerFrame;
- (void)adjustFrames;
- (void)_adjustViewForHostingRulerView;
- (void)dealloc;
- (id)_viewForHostingRuler;
@property(readonly, nonatomic) BOOL rulerSelected;
- (BOOL)_enableRulerOnCanvasIfSharedRulerIsVisible;
- (void)_configureRuler;
- (id)initWithDelegate:(id)arg1;

@end

