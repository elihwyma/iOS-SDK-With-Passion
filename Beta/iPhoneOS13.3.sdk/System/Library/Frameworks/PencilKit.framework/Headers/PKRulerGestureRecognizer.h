/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <PencilKit/PKFreeTransformGestureRecognizer.h>

@class NSTimer;

@interface PKRulerGestureRecognizer : PKFreeTransformGestureRecognizer

{
    NSTimer *_startTimer;
    _Bool _initialSnap;
    double _startDelay;
    double _startSnapThreshold;
}

@property (nonatomic) double startDelay;
@property (nonatomic) double startSnapThreshold;

- (void)start;
- (void)reset;
- (void)stopTimer;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGAffineTransform)freeTransform;
- (struct CGAffineTransform)unscaledFreeTransform;
- (void)resetAndAccumulateTransform;
- (struct CGAffineTransform)rulerTransform;

@end
