/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HUShapeLayerView, HUVisualEffectContainerView, UIViewPropertyAnimator, UIVisualEffectView;

@interface HUDoorIconContentView : HUPrimaryStateIconContentView

{
    HUShapeLayerView *_frameView;
    HUVisualEffectContainerView *_frameContainerView;
    HUShapeLayerView *_doorView;
    UIVisualEffectView *_doorContainerView;
    UIViewPropertyAnimator *_doorAnimator;
}

@property (retain, nonatomic) HUShapeLayerView *frameView;
@property (retain, nonatomic) HUVisualEffectContainerView *frameContainerView;
@property (retain, nonatomic) HUShapeLayerView *doorView;
@property (retain, nonatomic) UIVisualEffectView *doorContainerView;
@property (retain, nonatomic) UIViewPropertyAnimator *doorAnimator;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (struct CATransform3D)doorTransformForAngle:(double)arg1;

@end
