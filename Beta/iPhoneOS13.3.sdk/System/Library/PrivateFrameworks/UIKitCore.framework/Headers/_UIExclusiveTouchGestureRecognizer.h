/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@protocol _UIExclusiveTouchGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIExclusiveTouchGestureRecognizer : UIGestureRecognizer

{
    _Bool _achievedMaximumAbsoluteAccumulatedMovement;
    struct CGPoint _maximumAbsoluteAccumulatedMovement;
    struct CGPoint _accumulatedMovement;
}

@property (weak, nonatomic) id <_UIExclusiveTouchGestureRecognizerDelegate> delegate;
@property (nonatomic) struct CGPoint maximumAbsoluteAccumulatedMovement;
@property (nonatomic, readonly) _Bool achievedMaximumAbsoluteAccumulatedMovement;
@property (nonatomic, readonly) struct CGPoint accumulatedMovement;

- (id)description;
- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
