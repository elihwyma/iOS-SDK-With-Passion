/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIPinchGestureRecognizer.h>

@interface OFUITrackingPinchGestureRecognizer : UIPinchGestureRecognizer

{
    unsigned long long _zoomMode;
    unsigned long long _leftTouchIndex;
    unsigned long long _rightTouchIndex;
    struct CGPoint _leftTouchLocation;
    struct CGPoint _rightTouchLocation;
    struct CGPoint _centerPoint;
    struct CGPoint _previousLeftLocation;
    struct CGPoint _previousRightLocation;
    double _originalWidth;
    double _originalAngle;
    double _pinchWidth;
    double _pinchAngle;
    double _pinchScale;
    long long _magnifyState;
    long long _rotateState;
    _Bool _startedPinchingOut;
    _Bool _startedPinchingIn;
}

@property unsigned long long zoomMode;
@property double pinchWidth;
@property double pinchAngle;
@property double pinchScale;

- (void)dealloc;
- (void)reset;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 mode:(unsigned long long)arg3;

@end
