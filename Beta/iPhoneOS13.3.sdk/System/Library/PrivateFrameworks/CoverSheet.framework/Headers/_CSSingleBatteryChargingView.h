/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSBatteryChargingView.h>

@class CSBatteryFillView, NSArray, NSLayoutConstraint, SBUILegibilityLabel, UIImage, UIView, _UIBackdropView;

@interface _CSSingleBatteryChargingView : CSBatteryChargingView

{
    UIView *_batteryContainerView;
    _UIBackdropView *_batteryBlurView;
    CSBatteryFillView *_batteryFillView;
    SBUILegibilityLabel *_chargePercentLabel;
    NSArray *_batteryConstraints;
    NSLayoutConstraint *_batteryTopOffset;
    UIImage *_batteryImage;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLegibilitySettings:(id)arg1;
- (id)_chargePercentFont;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (_Bool)batteryVisible;
- (long long)batteryCount;
- (double)desiredVisibilityDuration;
- (void)setBatteryVisible:(_Bool)arg1;
- (void)_layoutBattery;
- (void)_layoutChargePercentLabel;
- (double)_batteryNoseOffset;

@end
