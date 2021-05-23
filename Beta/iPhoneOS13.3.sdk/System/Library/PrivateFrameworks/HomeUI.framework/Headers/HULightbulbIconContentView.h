/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <HomeUI/HUIconContentView.h>

@class HUAnimatableFilterImageView, NSString, UIVisualEffectView;

@interface HULightbulbIconContentView : HUIconContentView

{
    _Bool _on;
    double _brightness;
    NSString *_lastUsedIconIdentifier;
    UIVisualEffectView *_vibrantBaseEffectView;
    UIVisualEffectView *_vibrantOutlineEffectView;
    HUAnimatableFilterImageView *_vibrantBulbView;
    HUAnimatableFilterImageView *_coloredBulbView;
    HUAnimatableFilterImageView *_vibrantBaseView;
    HUAnimatableFilterImageView *_coloredBaseView;
}

@property (nonatomic) double brightness;
@property (nonatomic, getter=isOn) _Bool on;
@property (copy, nonatomic) NSString *lastUsedIconIdentifier;
@property (retain, nonatomic) UIVisualEffectView *vibrantBaseEffectView;
@property (retain, nonatomic) UIVisualEffectView *vibrantOutlineEffectView;
@property (retain, nonatomic) HUAnimatableFilterImageView *vibrantBulbView;
@property (retain, nonatomic) HUAnimatableFilterImageView *coloredBulbView;
@property (retain, nonatomic) HUAnimatableFilterImageView *vibrantBaseView;
@property (retain, nonatomic) HUAnimatableFilterImageView *coloredBaseView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateImages;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setDisplayContext:(unsigned long long)arg1;
- (void)setVibrancyEffect:(id)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)_allImageViews;
- (void)_updateDisplayContextState;
- (void)_updateBulbState;
- (void)_updateVisualEffect;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;

@end
