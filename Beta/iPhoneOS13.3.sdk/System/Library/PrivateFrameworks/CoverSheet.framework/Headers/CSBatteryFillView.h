/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <UIKit/UIView.h>

@interface CSBatteryFillView : UIView

{
    long long _chargePercentage;
    long long _lowBatteryLevel;
    _Bool _isBatterySaverModeActive;
    _Bool _isInternalBattery;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)setBatterySaverModeActive:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isInternalBattery:(_Bool)arg2 lowBatteryLevel:(long long)arg3;
- (void)setChargePercentage:(long long)arg1;

@end
