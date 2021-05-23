/*
 Image: /System/Library/PrivateFrameworks/LocalAuthenticationPrivateUI.framework/LocalAuthenticationPrivateUI
 */

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, UIColor;

@interface LAUICheckmarkLayer : CALayer

{
    CAShapeLayer *_shapeLayer;
    struct vector<CAShapeLayer *, std::__1::allocator<CAShapeLayer *>> _transientShapeLayers;
    _Bool _animating;
    unsigned int _animationIndex;
    double _lineWidth;
    struct vector<LAUI_CA_utilities::animation_completion_handler_container, std::__1::allocator<LAUI_CA_utilities::animation_completion_handler_container>> _completions;
    _Bool _revealed;
    double _lineWidthScale;
    UIColor *_primaryColor;
}

@property (nonatomic) double lineWidthScale;
@property (copy, nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly, getter=isRevealed) _Bool revealed;
@property (nonatomic, readonly) struct CGSize aspectSize;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setPrimaryColor:(struct UIColor *)arg1;
- (void)layoutSublayers;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)_updateRevealedAnimated:(_Bool)arg1;
- (void)setRevealed:(_Bool)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_executeCompletions:(_Bool)arg1;
- (void)_animationsDidResolve;

@end
