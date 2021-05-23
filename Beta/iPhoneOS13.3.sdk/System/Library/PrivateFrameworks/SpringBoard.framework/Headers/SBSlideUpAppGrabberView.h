/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSString, SBSaturatedIconView, SBUILegibilityView, UIImage, _SBFVibrantSettings, _UILegibilitySettings;

@interface SBSlideUpAppGrabberView : UIView

{
    double _strength;
    _UILegibilitySettings *_legibilitySettings;
    struct UIEdgeInsets _hitTestEdgeInsets;
    UIView *_tintView;
    UIView *_backgroundView;
    SBUILegibilityView *_legibilityView;
    SBSaturatedIconView *_saturatedIconView;
    UIImage *_grabberImage;
    _Bool _vibrancyAllowed;
    _SBFVibrantSettings *_vibrantSettings;
}

@property (nonatomic, readonly) struct UIEdgeInsets hitTestEdgeInsets;
@property (nonatomic, getter=isVibrancyAllowed) _Bool vibrancyAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;

- (void)setBackgroundColor:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBackgroundView:(id)arg1;
- (_Bool)_shouldUseVibrancy;
- (void)setAppStyleGrabberImage:(id)arg1;
- (id)_lazyLegibilityView;
- (id)initWithAdditionalTopPadding:(_Bool)arg1 invertVerticalInsets:(_Bool)arg2;
- (void)setGrabberImageFromAppWithBundleIdentifier:(id)arg1;

@end
