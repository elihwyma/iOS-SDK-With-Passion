/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIPanGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIDragAcceleratorGestureRecognizer : UIPanGestureRecognizer

{
    double _requiredMovementTimer;
}

@property (nonatomic) double requiredMovementTimer;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_movementTimeElapsed;

@end
