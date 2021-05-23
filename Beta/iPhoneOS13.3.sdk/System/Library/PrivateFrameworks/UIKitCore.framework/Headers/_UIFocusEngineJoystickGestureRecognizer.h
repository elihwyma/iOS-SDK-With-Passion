/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIFocusEngineJoystickGestureRecognizer : UIGestureRecognizer

{
    struct CGPoint _stickPosition;
    struct CGPoint _previousStickPosition;
}

@property (nonatomic, readonly) struct CGPoint stickPosition;
@property (nonatomic, readonly) struct CGPoint previousStickPosition;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shouldReceivePress:(id)arg1;
- (void)_calculateStickPositionFromPresses:(id)arg1 withEvent:(id)arg2;

@end
