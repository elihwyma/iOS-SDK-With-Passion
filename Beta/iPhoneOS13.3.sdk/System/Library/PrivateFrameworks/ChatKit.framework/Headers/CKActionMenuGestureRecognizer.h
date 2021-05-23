/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <UIKit/UILongPressGestureRecognizer.h>

@class CKActionMenuGestureVelocitySample;

@interface CKActionMenuGestureRecognizer : UILongPressGestureRecognizer

{
    CKActionMenuGestureVelocitySample *_velocitySample;
    CKActionMenuGestureVelocitySample *_previousVelocitySample;
    double _lastTouchTime;
    struct CGPoint _lastScreenLocation;
}

+ (id)actionMenuGestureRecognizer;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)setAllowableMovement:(double)arg1;
- (struct CGPoint)velocityInView:(id)arg1;
- (void)setNumberOfTouchesRequired:(unsigned long long)arg1;
- (struct CGPoint)_convertVelocitySample:(id)arg1 fromScreenCoordinatesToView:(id)arg2;

@end
