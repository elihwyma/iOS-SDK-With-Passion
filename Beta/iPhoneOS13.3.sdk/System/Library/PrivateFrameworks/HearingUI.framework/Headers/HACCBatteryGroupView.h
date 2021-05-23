/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <UIKit/UIView.h>

@class HACCBatteryView;

@interface HACCBatteryGroupView : UIView

{
    HACCBatteryView *_topBatteryView;
    HACCBatteryView *_bottomBatteryView;
}

@property (retain, nonatomic) HACCBatteryView *topBatteryView;
@property (retain, nonatomic) HACCBatteryView *bottomBatteryView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)updateValueForLeft:(double)arg1 right:(double)arg2 andAvailableEars:(int)arg3;
- (void)updateValueForDevice:(id)arg1;

@end
