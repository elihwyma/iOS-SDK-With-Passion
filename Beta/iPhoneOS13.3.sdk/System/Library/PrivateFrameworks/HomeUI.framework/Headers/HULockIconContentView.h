/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUPrimaryStateIconContentView.h>

@class HULockIconStateTransition, HUShapeLayerView, HUVisualEffectContainerView, NSString, UIVisualEffectView;

@interface HULockIconContentView : HUPrimaryStateIconContentView

{
    HUShapeLayerView *_lockBodyView;
    HUVisualEffectContainerView *_lockBodyContainerView;
    HUShapeLayerView *_lockKeyholeFillView;
    HUVisualEffectContainerView *_lockKeyholeContainerView;
    HUShapeLayerView *_lockShackleView;
    UIVisualEffectView *_lockShackleContainerView;
    HULockIconStateTransition *_activeTransition;
    unsigned long long _lockState;
    struct CGSize _lastLayoutSize;
}

@property (retain, nonatomic) HUShapeLayerView *lockBodyView;
@property (retain, nonatomic) HUVisualEffectContainerView *lockBodyContainerView;
@property (retain, nonatomic) HUShapeLayerView *lockKeyholeFillView;
@property (retain, nonatomic) HUVisualEffectContainerView *lockKeyholeContainerView;
@property (retain, nonatomic) HUShapeLayerView *lockShackleView;
@property (retain, nonatomic) UIVisualEffectView *lockShackleContainerView;
@property (retain, nonatomic) HULockIconStateTransition *activeTransition;
@property (nonatomic) unsigned long long lockState;
@property (nonatomic) struct CGSize lastLayoutSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_lockKeyholePathForBounds:(struct CGRect)arg1;
+ (id)_lockShacklePathForBounds:(struct CGRect)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_performTransitionToLockState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_translateShackleForLockState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateIconFromState:(long long)arg1 toState:(long long)arg2 animated:(_Bool)arg3;
- (void)_removePendingBounceAnimations;
- (void)_removeAllTransitionAnimations;
- (void)updateColorsForDisplayStyle:(unsigned long long)arg1;
- (id)_viewsAnimatedForStateTransition;
- (void)_rotateShackleForLockState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_applyAnimation:(id)arg1 ofType:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)_viewForTransitionAnimationType:(unsigned long long)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;

@end
