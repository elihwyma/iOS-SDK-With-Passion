/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUIconContentView, NSString, UIVisualEffect, UIVisualEffectView;

@protocol HFIconDescriptor;

@interface HUIconView : UIView

{
    _Bool _disableContinuousAnimation;
    UIVisualEffect *_vibrancyEffect;
    long long _contentMode;
    unsigned long long _iconSize;
    unsigned long long _displayContext;
    unsigned long long _displayStyle;
    UIVisualEffectView *_effectView;
    HUIconContentView *_currentIconContentView;
}

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) HUIconContentView *currentIconContentView;
@property (nonatomic) long long contentMode;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long displayContext;
@property (nonatomic) _Bool disableContinuousAnimation;
@property (retain, nonatomic) UIVisualEffect *vibrancyEffect;
@property (nonatomic, readonly) id <HFIconDescriptor> iconDescriptor;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_defaultVibrancyEffect;
- (id)contentContainerView;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)iconContentView:(id)arg1 didChangeAspectRatio:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 contentMode:(long long)arg2;
- (void)_updateVisualEffectStateForVibrancyEffectChange:(_Bool)arg1;

@end
