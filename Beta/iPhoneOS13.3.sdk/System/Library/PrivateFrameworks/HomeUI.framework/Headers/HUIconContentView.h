/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class UIVisualEffect;

@protocol HFIconDescriptor, HUIconContentViewDelegate;

@interface HUIconContentView : UIView

{
    _Bool _disableContinuousAnimation;
    UIVisualEffect *_vibrancyEffect;
    id <HUIconContentViewDelegate> _delegate;
    unsigned long long _iconSize;
    double _aspectRatio;
    unsigned long long _displayContext;
    unsigned long long _displayStyle;
    long long _renderingMode;
    id <HFIconDescriptor> _iconDescriptor;
    long long _primaryState;
}

@property (nonatomic) long long renderingMode;
@property (retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property (nonatomic) long long primaryState;
@property (nonatomic) double aspectRatio;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (weak, nonatomic) id <HUIconContentViewDelegate> delegate;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long displayContext;
@property (nonatomic) _Bool disableContinuousAnimation;
@property (nonatomic, readonly) unsigned long long displayStyle;

+ (id)iconImageNamed:(id)arg1 withSize:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3;
+ (Class)iconContentViewClassForIconDescriptor:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (_Bool)wantsManagedVibrancyEffect;
- (id)managedVisualEffectViews;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)invalidateRenderingMode;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (_Bool)shouldFlipForRTL;
- (void)_updateOverrideRenderingModeForSubviewsOfView:(id)arg1;

@end
