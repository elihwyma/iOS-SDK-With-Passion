/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, UIView, _TVRButtonHaptic;

@protocol _TVRUIEventDelegate;

@interface TVRUIStandardTouchProcessor : NSObject

{
    UIView *_touchpadView;
    id <_TVRUIEventDelegate> _eventDelegate;
    _TVRButtonHaptic *_haptic;
    UIView *_debugView;
    double _previousVelocity;
    double _previousTimestamp;
    NSMutableSet *_startingTouches;
    long long _startingSwipeDirection;
    NSMutableSet *_endedTouches;
    long long _touchCnt;
    struct CGPoint _startingPoint;
    struct CGRect _virtualBoundingBox;
}

@property (retain, nonatomic) UIView *touchpadView;
@property (weak, nonatomic) id <_TVRUIEventDelegate> eventDelegate;
@property (retain, nonatomic) _TVRButtonHaptic *haptic;
@property (nonatomic) struct CGRect virtualBoundingBox;
@property (retain, nonatomic) UIView *debugView;
@property (nonatomic) double previousVelocity;
@property (nonatomic) double previousTimestamp;
@property (retain, nonatomic) NSMutableSet *startingTouches;
@property (nonatomic) struct CGPoint startingPoint;
@property (nonatomic) long long startingSwipeDirection;
@property (retain, nonatomic) NSMutableSet *endedTouches;
@property (nonatomic) long long touchCnt;

- (void)handleLongPress:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)_sendSelectButtonPressBegan;
- (void)_sendSelectButtonPressEnded;
- (void)_configureGestureRecognizersOnView;
- (long long)_calculateDominantSwipeDirection:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGRect)_calculateVirtualBoundingBox:(struct CGPoint)arg1 sizingRatio:(double)arg2 swipeDirection:(long long)arg3;
- (struct CGPoint)_virtualTouchLocationForTouchPoint:(struct CGPoint)arg1;
- (void)_processTouches:(id)arg1;
- (void)_endAndRestartTouchesManually:(id)arg1;
- (void)_cleanupOnTouchesEnded;
- (id)_touchEventForTouch:(id)arg1;
- (id)initWithTouchpadView:(id)arg1;
- (void)touchesBegan:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesMoved:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesEnded:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;
- (void)touchesCancelled:(id)arg1 touches:(id)arg2 withEvent:(id)arg3;

@end
