/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIMotionEffectEvent.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectFocusChangeEvent : _UIMotionEffectEvent

{
    struct CGPoint _focusPosition;
}

@property (nonatomic, readonly) struct CGPoint focusPosition;

- (id)copyWithTimestamp:(double)arg1;
- (double)velocityRelativeToPreviousEvent:(id)arg1;
- (id)initWithTimestamp:(double)arg1 focusPosition:(struct CGPoint)arg2;

@end
