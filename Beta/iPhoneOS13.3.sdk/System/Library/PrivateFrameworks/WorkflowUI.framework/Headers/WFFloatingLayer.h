/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <QuartzCore/CALayer.h>

@class CAGradientLayer, UITraitCollection, WFGradient;

@interface WFFloatingLayer : CALayer

{
    _Bool _pressed;
    _Bool _colorizesShadow;
    _Bool _usePillCornerRadius;
    WFGradient *_gradient;
    double _scalingFactor;
    CAGradientLayer *_gradientLayer;
    UITraitCollection *_traitCollection;
}

@property (nonatomic) _Bool colorizesShadow;
@property (nonatomic) _Bool usePillCornerRadius;
@property (nonatomic) double scalingFactor;
@property (weak, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic, getter=isPressed) _Bool pressed;

- (id)init;
- (void)layoutSublayers;
- (void)updateBackgroundColor;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2;
- (void)applyConfiguration:(id)arg1;
- (void)updateShadowColor;

@end
