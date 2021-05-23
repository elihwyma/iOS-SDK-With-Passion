/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartDataFormatter.h>

@class NSArray;

@protocol HKInteractiveChartRangeProvider;

@interface HKInteractiveChartGenericStatFormatter : HKInteractiveChartDataFormatter

{
    NSArray *_overrideStatFormatterItemOptions;
    long long _context;
    id <HKInteractiveChartRangeProvider> _chartRangeProvider;
    NSArray *_configuredStatItems;
}

@property (retain, nonatomic) NSArray *configuredStatItems;
@property (retain, nonatomic) NSArray *overrideStatFormatterItemOptions;
@property (nonatomic) long long context;
@property (retain, nonatomic) id <HKInteractiveChartRangeProvider> chartRangeProvider;

+ (long long)mapSingleItemToStatisticsType:(id)arg1;

- (id)formattedSelectedRangeLabelDataWithChartData:(id)arg1;
- (id)formattedUnitStringForChartData:(id)arg1;
- (id)formattedValueStringForChartData:(id)arg1 options:(long long)arg2;
- (id)_makeSelectedRangeDataWithMin:(double)arg1 max:(double)arg2 unit:(id)arg3 statisticsType:(long long)arg4;
- (id)_formattedSelectedRangeLabelDataWithChartData:(id)arg1 items:(id)arg2;
- (void)configureFormatterForDisplayType:(id)arg1 quantityType:(id)arg2 chartRangeProvider:(id)arg3 timeScope:(long long)arg4 context:(long long)arg5;

@end
