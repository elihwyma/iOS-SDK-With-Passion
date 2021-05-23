/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class UIHoverEvent, UITouch;

@interface UIHoverGestureRecognizer : UIGestureRecognizer

{
    UIHoverEvent *_currentHoverEvent;
    UITouch *_currentTouch;
}

- (void)reset;
- (void)setView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (_Bool)_shouldReceivePress:(id)arg1;
- (_Bool)_paused;
- (_Bool)_wantsHoverEvents;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (void)_hoverCancelled:(id)arg1 withEvent:(id)arg2;

@end
