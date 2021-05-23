/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKUnitPreferenceController, UIFont;

@protocol HKInteractiveChartRangeProvider;

@interface HKSelectedRangeFormatter : NSObject

{
    id <HKInteractiveChartRangeProvider> _chartRangeProvider;
    HKUnitPreferenceController *_unitPreferenceController;
    UIFont *_majorFont;
    UIFont *_minorFont;
}

@property (retain, nonatomic) id <HKInteractiveChartRangeProvider> chartRangeProvider;
@property (retain, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (retain, nonatomic) UIFont *majorFont;
@property (retain, nonatomic) UIFont *minorFont;

- (id)selectedRangeDataWithCoordinateInfo:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;
- (id)initWithUnitPreferenceController:(id)arg1;
- (void)configureWithChartRangeProvider:(id)arg1;
- (id)selectedRangeDataWithGraphView:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;
- (id)_formatterForDisplayType:(id)arg1 timeScope:(long long)arg2 majorFont:(id)arg3 minorFont:(id)arg4;
- (id)_statFormatterItemOptionsForTimePeriodDisplayType:(id)arg1 timeScope:(long long)arg2 context:(long long)arg3;
- (id)selectedRangeDataWithCoordinates:(id)arg1 majorFont:(id)arg2 minorFont:(id)arg3 displayType:(id)arg4 timeScope:(long long)arg5 context:(long long)arg6;

@end
