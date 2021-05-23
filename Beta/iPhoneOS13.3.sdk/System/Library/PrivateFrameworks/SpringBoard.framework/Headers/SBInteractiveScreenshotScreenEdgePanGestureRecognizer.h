/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>

@class SBInteractiveScreenshotSettings;

@interface SBInteractiveScreenshotScreenEdgePanGestureRecognizer : SBScreenEdgePanGestureRecognizer

{
    SBInteractiveScreenshotSettings *_settings;
    long long _touchInterfaceOrientationWhenGestureBegan;
}

+ (_Bool)_shouldSupportStylusTouches;
+ (id)interactiveScreenshotScreenEdgePanGestureRecognizerWithTarget:(id)arg1 action:(SEL)arg2;

- (void)reset;
- (void)setState:(long long)arg1;
- (long long)_touchInterfaceOrientation;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(long long)arg3 options:(unsigned long long)arg4;
- (_Bool)_isOrientedLocation:(struct CGPoint)arg1 inCorner:(unsigned long long)arg2 forOrientedBounds:(struct CGRect)arg3 withEdgeOffsets:(struct UIOffset)arg4;
- (_Bool)shouldReceiveTouch:(id)arg1;

@end
