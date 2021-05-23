/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSBatteryChargingView.h>

@class CSBatteryFillView, SBUILegibilityLabel, UIImageView, UIView, _UIBackdropView;

@interface _CSDoubleBatteryChargingView : CSBatteryChargingView

{
    UIView *_batteryContainerView;
    UIView *_internalBatteryContainerView;
    UIView *_externalBatteryContainerView;
    _UIBackdropView *_internalBatteryBlurView;
    _UIBackdropView *_externalBatteryBlurView;
    CSBatteryFillView *_internalBatteryFillView;
    CSBatteryFillView *_externalBatteryFillView;
    SBUILegibilityLabel *_internalChargePercentLabel;
    SBUILegibilityLabel *_externalChargePercentLabel;
    SBUILegibilityLabel *_internalChargingNameLabel;
    SBUILegibilityLabel *_externalChargingNameLabel;
    UIImageView *_internalChargingIndicator;
    UIImageView *_externalChargingIndicator;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLegibilitySettings:(id)arg1;
- (id)_chargePercentFont;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (_Bool)batteryVisible;
- (long long)batteryCount;
- (double)desiredVisibilityDuration;
- (void)setBatteryVisible:(_Bool)arg1;
- (double)_spaceBetweenBatteryImages;
- (double)_batteryTopPadding;
- (double)_chargingBoltTopOffset;
- (double)_deviceNameBaselineOffset;
- (double)_deviceChargeBaselineOffset;

@end
