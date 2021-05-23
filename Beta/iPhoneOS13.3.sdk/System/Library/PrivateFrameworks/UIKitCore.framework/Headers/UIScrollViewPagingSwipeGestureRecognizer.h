/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer

{
    UIDelayedAction *_swipeFailureDelay;
    struct CGPoint _startLocation;
    struct CGPoint _lastLocation;
    double _lastTime;
    int _directionalFailureCount;
}

+ (_Bool)_shouldDefaultToTouches;

- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)clearTimer;
- (void)enoughTimeElapsed:(id)arg1;
- (void)_processNewLocation:(struct CGPoint)arg1;

@end
