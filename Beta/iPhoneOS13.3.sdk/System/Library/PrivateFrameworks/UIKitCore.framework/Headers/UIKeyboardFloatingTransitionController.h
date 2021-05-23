/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UIInputWindowController, UIKBVisualEffectView, UIKeyboardFloatingPinchGestureRecognizer, UIKeyboardFloatingTransitionState, UIPanGestureRecognizer, UIView, UIViewSpringAnimationBehavior, _UIPopoverStandardChromeView;

@protocol UIKeyboardFloatingTransitionControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardFloatingTransitionController : NSObject <Swift>

{
    _Bool _isTransitioning;
    _Bool _startedFromFloating;
    _Bool _withinDockingRegion;
    _Bool _expandedForDocking;
    id <UIKeyboardFloatingTransitionControllerDelegate> _delegate;
    UIKeyboardFloatingPinchGestureRecognizer *_pinchGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIInputWindowController *_inputWindowController;
    UIKeyboardFloatingTransitionState *_startState;
    UIKeyboardFloatingTransitionState *_endState;
    NSArray *_commonVisibleKeys;
    UIView *_platterView;
    UIView *_platterCornerRadiusView;
    _UIPopoverStandardChromeView *_platterPopoverBackgroundView;
    UIKBVisualEffectView *_platterVisualEffectView;
    UIView *_pillView;
    double _progress;
    double _gestureBeginTime;
    UIViewSpringAnimationBehavior *_animationBehavior;
    struct CGPoint _lastGestureCenter;
}

@property (retain, nonatomic) UIKeyboardFloatingPinchGestureRecognizer *pinchGestureRecognizer;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (nonatomic) _Bool isTransitioning;
@property (retain, nonatomic) UIInputWindowController *inputWindowController;
@property (retain, nonatomic) UIKeyboardFloatingTransitionState *startState;
@property (retain, nonatomic) UIKeyboardFloatingTransitionState *endState;
@property (nonatomic) _Bool startedFromFloating;
@property (retain, nonatomic) NSArray *commonVisibleKeys;
@property (retain, nonatomic) UIView *platterView;
@property (retain, nonatomic) UIView *platterCornerRadiusView;
@property (retain, nonatomic) _UIPopoverStandardChromeView *platterPopoverBackgroundView;
@property (retain, nonatomic) UIKBVisualEffectView *platterVisualEffectView;
@property (retain, nonatomic) UIView *pillView;
@property (nonatomic) double progress;
@property (nonatomic) double gestureBeginTime;
@property (nonatomic) struct CGPoint lastGestureCenter;
@property (nonatomic) _Bool withinDockingRegion;
@property (nonatomic) _Bool expandedForDocking;
@property (retain) UIViewSpringAnimationBehavior *animationBehavior;
@property (weak, nonatomic) id <UIKeyboardFloatingTransitionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)magneticEdgeMargin;
+ (_Bool)isPointWithinDockingRegion:(struct CGPoint)arg1;
+ (id)snapshotOfKeyplaneView:(id)arg1;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)addGestureRecognizersToView:(id)arg1;
- (void)beginTransitionFromPanGestureRecognizer:(id)arg1;
- (void)finalizeTransition;
- (void)handlePanGestureRecognizerAction:(id)arg1;
- (void)updateHysteresisForCurrentFloatingState;
- (void)removeGestureRecognizers;
- (void)handlePinchGestureRecognizerAction:(id)arg1;
- (void)beginPanGesture:(id)arg1;
- (void)updatePanGesture:(id)arg1;
- (void)endPanGesture:(id)arg1;
- (void)beginTransitionAtPoint:(struct CGPoint)arg1 withScale:(double)arg2;
- (void)updateTransitionAtPoint:(struct CGPoint)arg1 withScale:(double)arg2 interactive:(_Bool)arg3;
- (void)endTransitionAtPoint:(struct CGPoint)arg1 withScale:(double)arg2;
- (void)beginPinchGesture:(id)arg1;
- (void)updatePinchGesture:(id)arg1;
- (void)endPinchGesture:(id)arg1;
- (void)initializeContextAtPoint:(struct CGPoint)arg1;
- (void)updateAnimationAtScale:(double)arg1;
- (void)captureStateForStart:(_Bool)arg1;
- (void)inputViewSnapshot:(id *)arg1 withPlatterInsets:(struct UIEdgeInsets *)arg2;

@end
