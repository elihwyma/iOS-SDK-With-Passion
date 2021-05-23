/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer, UITouch;

@interface CCUIFlickGestureRecognizer : UIGestureRecognizer

{
    UITouch *_touch;
    NSTimer *_timeoutTimer;
    double _initialTouchTimestamp;
    struct CGPoint _initialTouchLocation;
    _Bool _latched;
    double _maximumFlickTime;
    double _minimumFlickVelocity;
    unsigned long long _allowedFlickDirections;
}

@property (nonatomic) double maximumFlickTime;
@property (nonatomic) double minimumFlickVelocity;
@property (nonatomic) unsigned long long allowedFlickDirections;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_beginFlickWithTouch:(id)arg1;
- (_Bool)_validateFlickWithTouch:(id)arg1;
- (void)_evaluateFlickAtTimeout;

@end
