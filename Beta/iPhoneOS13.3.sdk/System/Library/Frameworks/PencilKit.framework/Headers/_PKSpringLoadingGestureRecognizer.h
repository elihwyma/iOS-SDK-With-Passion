/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface _PKSpringLoadingGestureRecognizer : UIGestureRecognizer

{
    _Bool _hasRecognized;
    double _stationaryFingerTimeout;
    UITouch *_gestureTouch;
    struct CGPoint _startLocation;
}

@property (nonatomic) _Bool hasRecognized;
@property (retain, nonatomic) UITouch *gestureTouch;
@property (nonatomic) struct CGPoint startLocation;
@property (nonatomic) double stationaryFingerTimeout;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_stationaryFingerTimerFired;
- (_Bool)_pointInsideRecognitionPossibleArea:(struct CGPoint)arg1;
- (_Bool)_pointShouldBeRecognized:(struct CGPoint)arg1;

@end
