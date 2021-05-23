/*
 Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableArray, NSTimer, UITouch;

@protocol FMMapGestureRecognizerDelegate;

@interface FMMapGestureRecognizer : UIGestureRecognizer

{
    _Bool _isSwipeEnabled;
    _Bool _isTrackingTouches;
    _Bool _isSwipingFromTheEdge;
    _Bool _isSwipingGestureEnded;
    _Bool _isRTLOrientation;
    int _touchRadius;
    id <FMMapGestureRecognizerDelegate> _touchDelegate;
    UITouch *_previousTouch;
    double _swipeThreshold;
    double _velocity;
    NSMutableArray *_otherGestures;
    NSTimer *_doubleTapTimer;
    struct CGPoint _initialTouchLocation;
    struct CGPoint _lastTouchPoint;
}

@property (nonatomic) struct CGPoint initialTouchLocation;
@property (retain, nonatomic) UITouch *previousTouch;
@property (nonatomic) struct CGPoint lastTouchPoint;
@property (nonatomic) double swipeThreshold;
@property (nonatomic) double velocity;
@property (nonatomic) _Bool isTrackingTouches;
@property (nonatomic) _Bool isSwipingFromTheEdge;
@property (nonatomic) _Bool isSwipingGestureEnded;
@property (nonatomic) _Bool isRTLOrientation;
@property (retain, nonatomic) NSMutableArray *otherGestures;
@property (retain, nonatomic) NSTimer *doubleTapTimer;
@property (weak, nonatomic) id <FMMapGestureRecognizerDelegate> touchDelegate;
@property (nonatomic) int touchRadius;
@property (nonatomic) _Bool isSwipeEnabled;

- (id)init;
- (void)dealloc;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (void)finishSwipeGesture:(double)arg1;
- (double)distanceBetweenPointA:(struct CGPoint)arg1 andPointB:(struct CGPoint)arg2;
- (void)mapTappedTimer;
- (void)invalidateGesture;

@end
