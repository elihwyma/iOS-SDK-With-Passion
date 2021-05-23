/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDisplayType.h>

@class HKGraphSeries, HKInteractiveChartDataFormatter, NSString, UIColor;

@interface HKInteractiveChartDisplayType : HKDisplayType

{
    HKGraphSeries *_graphSeries;
    UIColor *_color;
    NSString *_specifiedDisplayName;
    NSString *_specifiedUnitName;
    HKInteractiveChartDataFormatter *_specifiedValueFormatter;
}

@property (nonatomic, readonly) NSString *specifiedDisplayName;
@property (nonatomic, readonly) NSString *specifiedUnitName;
@property (nonatomic, readonly) HKInteractiveChartDataFormatter *specifiedValueFormatter;
@property (nonatomic, readonly) HKGraphSeries *graphSeries;
@property (retain, nonatomic) UIColor *color;

- (id)description;
- (id)displayName;
- (id)initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitName:(id)arg3 valueFormatter:(id)arg4 dataTypeCode:(long long)arg5;
- (id)colorWithDisplayCategoryController:(id)arg1;
- (id)hk_interactiveChartsFormatterForTimeScope:(long long)arg1;
- (id)unitNameForValue:(id)arg1 unitPreferenceController:(id)arg2;
- (id)initWithGraphSeries:(id)arg1 baseDisplayType:(id)arg2 valueFormatter:(id)arg3 dataTypeCode:(long long)arg4;
- (id)_initWithGraphSeries:(id)arg1 displayName:(id)arg2 unitDisplayNameOverrides:(id)arg3 chartingRules:(id)arg4 unitName:(id)arg5 valueFormatter:(id)arg6 dataTypeCode:(long long)arg7;
- (long long)_internalDisplayTypeIdentifier;

@end
