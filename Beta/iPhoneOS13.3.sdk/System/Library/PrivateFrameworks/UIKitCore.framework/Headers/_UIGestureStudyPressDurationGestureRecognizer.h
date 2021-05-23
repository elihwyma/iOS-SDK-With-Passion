/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface _UIGestureStudyPressDurationGestureRecognizer : UIGestureRecognizer

{
    double _allowableMovement;
    double _startTimestamp;
    double _maxObservedTouchForce;
    struct CGPoint _originalLocation;
}

@property (nonatomic) double startTimestamp;
@property (nonatomic) struct CGPoint originalLocation;
@property (nonatomic) double maxObservedTouchForce;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double movement;
@property (nonatomic, readonly) _Bool hasForce;
@property (nonatomic) double allowableMovement;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (_Bool)movementExceededLimit:(double)arg1;

@end
