/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextMagnifier.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierRanged : UITextMagnifier

{
    double _touchOffsetFromMagnificationPoint;
    double _magnifierOffsetFromTouch;
    _Bool _isHorizontal;
    _Bool _isAnimating;
    long long _delayedAnimationType;
    struct CGPoint _delayedAnimationPoint;
}

@property (nonatomic) _Bool isHorizontal;

+ (id)sharedRangedMagnifier;
+ (Class)renderClass;
+ (id)activeRangedMagnifier;

- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;
- (void)setMagnificationPoint:(struct CGPoint)arg1;
- (void)stopMagnifying:(_Bool)arg1;
- (struct CGPoint)adjustMagnificationPoint:(struct CGPoint)arg1;
- (void)updateFrameAndOffset;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (_Bool)terminalPointPlacedCarefully;
- (double)offsetFromMagnificationPoint;
- (id)initWithFrame;
- (struct CGPoint)clipPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (struct CGRect)caretRectClosestToPoint:(struct CGPoint)arg1;
- (int)horizontalMovementAtTime:(double)arg1;
- (_Bool)wasPlacedCarefullyAtTime:(double)arg1;
- (int)horizontalMovement;

@end
