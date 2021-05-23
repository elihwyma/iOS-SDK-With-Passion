/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIResponder, UITextMagnifierTimeWeightedPoint;

@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifier : UIView

{
    UIView *_target;
    struct CGPoint _magnificationPoint;
    struct CGPoint _animationPoint;
    struct CGPoint _terminalPoint;
    _Bool _terminalPointPlacedCarefully;
    UIResponder<UITextInput> *_text;
    UITextMagnifierTimeWeightedPoint *_weightedPoint;
    UIView *_magnifierRenderer;
    UIView *_autoscrollRenderer;
    int _autoscrollDirections;
    _Bool _isAnimating;
    long long _delayedAnimationType;
}

@property (retain, nonatomic) UIView *target;
@property (retain, nonatomic) UIResponder<UITextInput> *text;
@property (nonatomic) struct CGPoint magnificationPoint;
@property (nonatomic) struct CGPoint animationPoint;
@property (nonatomic, readonly) struct CGPoint terminalPoint;
@property (nonatomic, readonly) _Bool terminalPointPlacedCarefully;
@property (nonatomic, readonly) _Bool isHorizontal;
@property (nonatomic, readonly) double offsetFromMagnificationPoint;

+ (Class)renderClass;

- (void)remove;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;
- (void)stopMagnifying:(_Bool)arg1;
- (struct CGPoint)adjustMagnificationPoint:(struct CGPoint)arg1;
- (void)updateFrameAndOffset;
- (void)setToMagnifierRenderer;
- (void)animateToMagnifierRenderer;
- (void)animateToAutoscrollRenderer;
- (void)zoomDownAnimation;
- (void)zoomUpAnimation;
- (void)detectLostTouches:(id)arg1;
- (void)windowWillRotate:(id)arg1;
- (void)postAutoscrollPoint:(struct CGPoint)arg1;
- (void)setAutoscrollDirections:(int)arg1;
- (void)autoscrollWillNotStart;
- (void)beginZoomUpAnimation:(CDUnknownBlockType)arg1 withDuration:(double)arg2;
- (void)beginZoomDownAnimation:(CDUnknownBlockType)arg1 withDuration:(double)arg2 postponeHandler:(CDUnknownBlockType)arg3;

@end
