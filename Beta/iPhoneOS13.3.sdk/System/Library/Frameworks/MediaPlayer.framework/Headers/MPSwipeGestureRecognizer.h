/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface MPSwipeGestureRecognizer : UIGestureRecognizer

{
    struct CGPoint _startLocation;
    double _startTime;
    UITouch *_trackingTouch;
    long long _swipeDirection;
}

@property (nonatomic, readonly) long long swipeDirection;

- (void)dealloc;
- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
