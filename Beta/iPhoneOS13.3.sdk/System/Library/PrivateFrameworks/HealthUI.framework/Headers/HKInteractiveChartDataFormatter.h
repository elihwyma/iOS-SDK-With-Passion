/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayType, HKUnitPreferenceController, UIFont;

@interface HKInteractiveChartDataFormatter : NSObject

{
    UIFont *_majorFont;
    UIFont *_minorFont;
    HKUnitPreferenceController *_unitController;
    HKDisplayType *_displayType;
}

@property (retain, nonatomic) UIFont *majorFont;
@property (retain, nonatomic) UIFont *minorFont;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) HKDisplayType *displayType;

- (id)_unitNameFromUnit:(id)arg1 number:(id)arg2;
- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)_formattedStringForValue:(id)arg1;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)_formattedStringWithValue:(double)arg1 unit:(id)arg2 showUnit:(_Bool)arg3;

@end
