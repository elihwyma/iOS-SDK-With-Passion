/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

#import <PencilKit/Swift-Protocol.h>

@class NSString, PKRulerGestureRecognizer, PKRulerLayer, PKRulerView, UIImpactFeedbackGenerator, UIView;

@protocol PKRulerDelegate, PKRulerHostingDelegate;

@interface PKRulerController : NSObject <Swift>

{
    UIView *_rulerHostingView;
    _Bool _wantsSharedRuler;
    _Bool _isInteractingWithRuler;
    _Bool _rulerIsRotating;
    _Bool _rulerWasShownViaGesture;
    _Bool _canRulerSnapToAngle;
    _Bool _lastTouchWasMaskedByRuler;
    _Bool _rulerSnappedToAngle;
    PKRulerGestureRecognizer *_rulerGestureRecognizer;
    id <PKRulerDelegate> _delegate;
    id <PKRulerHostingDelegate> _rulerHostingDelegate;
    PKRulerView *_rulerView;
    PKRulerLayer *_rulerLayer;
    UIImpactFeedbackGenerator *_snapImpactBehavior;
    CDStruct_cfd08fee _rulerState;
    CDStruct_cfd08fee _previousRulerState;
    struct CGAffineTransform _rulerStartTransform;
    struct CGAffineTransform _defaultRulerTransform;
}

@property (retain, nonatomic) PKRulerLayer *rulerLayer;
@property (nonatomic) CDStruct_cfd08fee rulerState;
@property (nonatomic) CDStruct_cfd08fee previousRulerState;
@property (nonatomic) _Bool rulerWasShownViaGesture;
@property (nonatomic) _Bool isInteractingWithRuler;
@property (nonatomic) _Bool canRulerSnapToAngle;
@property (nonatomic) _Bool lastTouchWasMaskedByRuler;
@property (retain, nonatomic) UIImpactFeedbackGenerator *snapImpactBehavior;
@property (nonatomic) _Bool rulerSnappedToAngle;
@property (retain, nonatomic) PKRulerGestureRecognizer *rulerGestureRecognizer;
@property (weak, nonatomic) id <PKRulerDelegate> delegate;
@property (weak, nonatomic) id <PKRulerHostingDelegate> rulerHostingDelegate;
@property (nonatomic, readonly) _Bool rulerSelected;
@property (nonatomic) _Bool rulerIsRotating;
@property (retain, nonatomic) PKRulerView *rulerView;
@property (nonatomic) struct CGAffineTransform rulerStartTransform;
@property (nonatomic) struct CGAffineTransform defaultRulerTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRulerView;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)hitTest:(struct CGPoint)arg1;
- (void)hideUI;
- (void)showRuler;
- (void)hideRuler;
- (void)setupGestures;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;
- (void)drawingBegan:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (void)drawingEnded:(id)arg1;
- (void)drawingCancelled:(CDUnknownBlockType)arg1;
- (struct CGAffineTransform)pixelSnapRulerTransform:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)canvasTransform;
- (void)hideRulerAnimated:(_Bool)arg1;
- (struct CGRect)_rulerFrame;
- (void)_adjustViewForHostingRulerView;
- (_Bool)_enableRulerOnCanvasIfSharedRulerIsVisible;
- (id)_viewForHostingRuler;
- (void)_configureRuler;
- (void)adjustFrames;
- (void)startRulerDrawing;
- (void)endRulerDrawing;
- (struct CGAffineTransform)_transformFromRulerViewToTiledView;
- (void)resetRulerTouches;
- (void)rulerMoveGesture:(id)arg1;
- (void)eatPencilGesture:(id)arg1;
- (struct CGAffineTransform)angleSnapRulerTransform:(struct CGAffineTransform)arg1 aroundOrigin:(struct CGPoint)arg2;
- (void)updateAngle:(id)arg1;
- (void)updateRuler:(id)arg1;
- (struct CGAffineTransform)ensureRulerFullyOnscreen:(struct CGAffineTransform)arg1;
- (double)getRulerCenterTValueOnScreenForTransform:(struct CGAffineTransform)arg1;
- (void)resetRuler;
- (void)resetRulerTransform;
- (void)cancelNonDrawingGestures;

@end
