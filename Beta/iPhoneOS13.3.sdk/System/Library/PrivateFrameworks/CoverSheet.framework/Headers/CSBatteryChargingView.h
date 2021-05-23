/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewBase.h>

@class _UILegibilitySettings;

@interface CSBatteryChargingView : CSCoverSheetViewBase

{
    _UILegibilitySettings *_legibilitySettings;
    double _alignmentPercent;
}

@property (nonatomic) _Bool batteryVisible;
@property (nonatomic, readonly) long long batteryCount;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) double desiredVisibilityDuration;
@property (nonatomic) double alignmentPercent;

+ (id)batteryChargingViewWithSingleBattery;
+ (id)batteryChargingViewWithDoubleBattery;
+ (id)maskImageNameForChargingBattery;
+ (id)maskImageNameForInternalChargingBattery;
+ (id)maskImageNameForExternalChargingBattery;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)_chargePercentFont;
- (void)setPrimaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (void)setSecondaryBatteryText:(id)arg1 forBattery:(id)arg2;
- (id)_updateChargeString:(id)arg1 oldLabel:(id)arg2;
- (double)_batteryOriginYForBatteryHeight:(double)arg1;

@end
