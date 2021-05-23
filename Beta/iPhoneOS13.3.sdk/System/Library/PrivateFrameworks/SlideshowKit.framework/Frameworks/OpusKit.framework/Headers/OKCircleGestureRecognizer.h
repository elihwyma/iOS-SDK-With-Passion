/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UIGestureRecognizer.h>

@class CAShapeLayer;

@interface OKCircleGestureRecognizer : UIGestureRecognizer

{
    struct CGPoint _origin;
    double _lastAngle;
    double _angle;
    CAShapeLayer *_roundLayer;
    CAShapeLayer *_pointLayer;
    CAShapeLayer *_originLayer;
    double _continuousProgress;
    double _diffenceProgress;
}

@property (nonatomic, readonly) double diffenceProgress;
@property (nonatomic, readonly) double continuousProgress;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)initDebugLayer:(struct CGPoint)arg1;
- (void)updateDebug:(struct CGPoint)arg1 angle:(double)arg2;
- (void)resetDebug;

@end
