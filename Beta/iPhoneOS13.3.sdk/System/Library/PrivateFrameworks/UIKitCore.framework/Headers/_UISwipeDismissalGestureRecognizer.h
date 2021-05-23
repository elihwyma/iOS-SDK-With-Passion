/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UISwipeDismissalGestureRecognizer : UIGestureRecognizer

{
    double _allowableMovement;
    struct CGPoint _originalTouchPoint;
}

@property (nonatomic) struct CGPoint originalTouchPoint;
@property (nonatomic) double allowableMovement;

+ (_Bool)_shouldDefaultToTouches;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
