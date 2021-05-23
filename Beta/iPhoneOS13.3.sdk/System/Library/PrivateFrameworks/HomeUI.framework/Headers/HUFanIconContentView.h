/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconContentView.h>

@class HUDynamicStateAnimationApplier, HUNonAnimatingTintImageView, UIImageView, UIVisualEffectView;

@interface HUFanIconContentView : HUIconContentView

{
    UIImageView *_baseView;
    HUNonAnimatingTintImageView *_bladesView;
    UIVisualEffectView *_baseVisualEffectView;
    UIVisualEffectView *_bladesVisualEffectView;
    unsigned long long _rotationState;
    double _rotationSpeed;
    HUDynamicStateAnimationApplier *_speedRampApplier;
}

@property (retain, nonatomic) UIImageView *baseView;
@property (retain, nonatomic) HUNonAnimatingTintImageView *bladesView;
@property (retain, nonatomic) UIVisualEffectView *baseVisualEffectView;
@property (retain, nonatomic) UIVisualEffectView *bladesVisualEffectView;
@property (nonatomic) unsigned long long rotationState;
@property (nonatomic) double rotationSpeed;
@property (retain, nonatomic) HUDynamicStateAnimationApplier *speedRampApplier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateImages;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setDisableContinuousAnimation:(_Bool)arg1;
- (_Bool)shouldFlipForRTL;
- (void)_updateRotationAnimationFromState:(unsigned long long)arg1 shouldRampSpeed:(_Bool)arg2;
- (void)_updateVisualEffects;
- (void)_setBladesLayerSpeed:(float)arg1;
- (void)_rampBladesLayerToRotationSpeedAnimated:(_Bool)arg1;

@end
