/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIPanGestureRecognizer.h>

@class UITouch;

@interface MKTiltGestureRecognizer : UIPanGestureRecognizer

{
    UITouch *_touch1;
    UITouch *_touch2;
    struct CGPoint _initialTouch1Point;
    struct CGPoint _initialTouch2Point;
    double _initialDistance;
}

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)_activeTouchesForEvent:(id)arg1;
- (double)_distanceFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;

@end
