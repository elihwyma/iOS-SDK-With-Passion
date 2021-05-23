/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUShapeLayerView, HUVisualEffectContainerView, UIView, UIViewPropertyAnimator;

@interface HUSwitchIconContentView : HUPrimaryStateIconContentView

{
    HUShapeLayerView *_frameView;
    HUVisualEffectContainerView *_frameContainerView;
    UIView *_switchBackgroundView;
    UIView *_visibleSwitchView;
    HUShapeLayerView *_switchTopIndicatorView;
    HUVisualEffectContainerView *_switchTopIndicatorContainerView;
    HUShapeLayerView *_switchBottomIndicatorView;
    HUVisualEffectContainerView *_switchBottomIndicatorContainerView;
    UIViewPropertyAnimator *_switchAnimator;
}

@property (retain, nonatomic) HUShapeLayerView *frameView;
@property (retain, nonatomic) HUVisualEffectContainerView *frameContainerView;
@property (retain, nonatomic) UIView *switchBackgroundView;
@property (retain, nonatomic) UIView *visibleSwitchView;
@property (retain, nonatomic) HUShapeLayerView *switchTopIndicatorView;
@property (retain, nonatomic) HUVisualEffectContainerView *switchTopIndicatorContainerView;
@property (retain, nonatomic) HUShapeLayerView *switchBottomIndicatorView;
@property (retain, nonatomic) HUVisualEffectContainerView *switchBottomIndicatorContainerView;
@property (retain, nonatomic) UIViewPropertyAnimator *switchAnimator;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_setIconState:(long long)arg1 animated:(_Bool)arg2;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (struct CGRect)switchTopIndicatorFrameForVisibleSwitchBounds:(struct CGRect)arg1 switchOn:(_Bool)arg2;
- (struct CGRect)switchBottomIndicatorFrameForVisibleSwitchBounds:(struct CGRect)arg1 switchOn:(_Bool)arg2;

@end
