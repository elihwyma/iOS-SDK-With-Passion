/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <UIKit/UILongPressGestureRecognizer.h>

@interface DTSForceGestureRecognizer : UILongPressGestureRecognizer

{
    double _startTime;
    _Bool _hasSufficientForce;
}

- (void)reset;
- (void)setState:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
