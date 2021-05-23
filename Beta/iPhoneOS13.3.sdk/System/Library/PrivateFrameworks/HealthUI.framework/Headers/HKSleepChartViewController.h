/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKSleepAnnotationViewDataSource, NSString;

@interface HKSleepChartViewController : HKInteractiveChartViewController

{
    _Bool _disableXAxisAndInteraction;
    HKSleepAnnotationViewDataSource *_annotationViewDataSource;
}

@property (retain, nonatomic) HKSleepAnnotationViewDataSource *annotationViewDataSource;
@property (nonatomic) _Bool disableXAxisAndInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_titlesAndValuesWithSleepDay:(id)arg1 sleepPeriod:(id)arg2 context:(id)arg3 result:(CDUnknownBlockType)arg4;
+ (id)_goalLineStrokeStyle;
+ (id)_inBedColor;
+ (id)_asleepColor;
+ (id)_lessSaturatedColorWithColor:(id)arg1;
+ (id)_generateDailyTimePeriodSeries;
+ (id)_buildSleepChartCacheWithHealthStore:(id)arg1 representativeDisplayType:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4;
+ (id)_buildSleepAnalysisDataSourceWithHealthStore:(id)arg1 displayTypeController:(id)arg2;
+ (id)consistencyDisplayTypesWithHealthStore:(id)arg1 unitController:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4;

- (id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 initialXValue:(id)arg7 options:(unsigned long long)arg8;
- (id)makeAnnotationDataSource;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (id)lollipopAnnotationColor;
- (void)primaryGraphViewControllerDidInitialize:(id)arg1;
- (id)descriptionSpansForGraphView:(id)arg1;
- (id)calendarQueryDisplayType;

@end
