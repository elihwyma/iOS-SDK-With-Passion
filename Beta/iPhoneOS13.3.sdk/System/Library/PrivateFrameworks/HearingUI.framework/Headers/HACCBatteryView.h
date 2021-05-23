/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <UIKit/UIView.h>

@class NSNumberFormatter, UILabel, _UIBatteryView;

@interface HACCBatteryView : UIView

{
    UILabel *_sideLabel;
    UILabel *_valueLabel;
    _UIBatteryView *_batteryView;
    NSNumberFormatter *_numberFormatter;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setValue:(double)arg1 forEar:(int)arg2;

@end
