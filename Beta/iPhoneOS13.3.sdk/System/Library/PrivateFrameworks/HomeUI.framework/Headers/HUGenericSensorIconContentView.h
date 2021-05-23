/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUAnimationApplier, HUShapeLayerView, HUVisualEffectContainerView, NSArray, UIView;

@interface HUGenericSensorIconContentView : HUPrimaryStateIconContentView

{
    HUShapeLayerView *_bodyView;
    HUVisualEffectContainerView *_bodyContainerView;
    NSArray *_indicatorViews;
    NSArray *_indicatorContainerViews;
    UIView *_indicatorClippingView;
    HUAnimationApplier *_animationApplier;
}

@property (retain, nonatomic) HUShapeLayerView *bodyView;
@property (retain, nonatomic) HUVisualEffectContainerView *bodyContainerView;
@property (retain, nonatomic) NSArray *indicatorViews;
@property (retain, nonatomic) NSArray *indicatorContainerViews;
@property (retain, nonatomic) UIView *indicatorClippingView;
@property (retain, nonatomic) HUAnimationApplier *animationApplier;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (void)_updateIndicatorAlpha;
- (void)_layoutIndicatorViewsShowingIndicators:(_Bool)arg1;
- (id)_animationSettingsForShowingIndicators:(_Bool)arg1;
- (_Bool)showIndicators;
- (struct CGRect)_frameForIndicatorContainerViewInPosition:(unsigned long long)arg1;
- (struct CGAffineTransform)_transformForIndicatorContainerViewInPosition:(unsigned long long)arg1;
- (struct CGRect)_frameForIndicatorViewInPosition:(unsigned long long)arg1 showIndicators:(_Bool)arg2;

@end
