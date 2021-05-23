/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface UIUndoGestureObserver : UIGestureRecognizer

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)_affectedByGesture:(id)arg1;
- (void)_failOrCancelIfNecessary;

@end
