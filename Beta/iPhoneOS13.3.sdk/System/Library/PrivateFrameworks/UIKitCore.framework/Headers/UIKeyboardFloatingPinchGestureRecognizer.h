/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPinchGestureRecognizer.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardFloatingPinchGestureRecognizer : UIPinchGestureRecognizer

{
    NSMutableSet *_activeTouches;
}

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
