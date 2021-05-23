/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer, UITouch;

@interface MPTapGestureRecognizer : UIGestureRecognizer

{
    unsigned long long _lastTapCount;
    struct CGPoint _tapLocation;
    UITouch *_trackingTouch;
    NSTimer *_tapHandleTimer;
}

@property unsigned long long tapCount;

- (void)dealloc;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_setTapTimerWithDuration:(double)arg1;
- (void)_resetTapTimer;
- (void)_delayedHandleTaps:(id)arg1;

@end
