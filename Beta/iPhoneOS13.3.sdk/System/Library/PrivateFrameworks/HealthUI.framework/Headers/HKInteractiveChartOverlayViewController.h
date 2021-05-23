/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKDisplayType, HKUIMetricColors, HKValueRange, NSMutableArray, NSMutableDictionary, NSString, UIColor;

@interface HKInteractiveChartOverlayViewController : HKInteractiveChartViewController

{
    HKDisplayType *_primaryDisplayType;
    long long _displayMode;
    HKValueRange *_initialVisibleDateRange;
    HKUIMetricColors *_annotationDataSourceMetricColors;
    HKDisplayType *_overlayDisplayType;
    UIColor *_currentOverlayColor;
    NSMutableDictionary *_overlayChartCaches;
    NSMutableDictionary *_customNamedCaches;
    NSMutableArray *_cachedDataControllersWaitingForData;
}

@property (retain, nonatomic) HKDisplayType *overlayDisplayType;
@property (retain, nonatomic) UIColor *currentOverlayColor;
@property (retain, nonatomic) NSMutableDictionary *overlayChartCaches;
@property (retain, nonatomic) NSMutableDictionary *customNamedCaches;
@property (retain, nonatomic) NSMutableArray *cachedDataControllersWaitingForData;
@property (nonatomic, readonly) HKDisplayType *primaryDisplayType;
@property (nonatomic) long long displayMode;
@property (retain, nonatomic) HKValueRange *initialVisibleDateRange;
@property (retain, nonatomic) HKUIMetricColors *annotationDataSourceMetricColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)makeAnnotationDataSource;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (id)initWithFixedRange:(id)arg1 healthStore:(id)arg2 primaryDisplayType:(id)arg3 unitPreferenceController:(id)arg4 dateCache:(id)arg5 chartDataCacheController:(id)arg6 selectedTimeScopeController:(id)arg7 initialXValue:(id)arg8;
- (id)displayTypeForQuantityDistributionStyle:(long long)arg1 timeScope:(long long)arg2 overlayColor:(id)arg3 options:(long long)arg4 namedPredicate:(id)arg5;
- (void)installOverlayDisplayType:(id)arg1;
- (double)minimumHeightForChart;
- (id)initWithHealthStore:(id)arg1 primaryDisplayType:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 initialXValue:(id)arg7;
- (void)cachedDataForQuantityIdentifier:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 cacheDataSource:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cachedDataForQuantityDistributionStyle:(long long)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 namedPredicate:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)displayTypeForQuantityIdentifier:(id)arg1 timeScope:(long long)arg2 displayTypeController:(id)arg3 overlayColor:(id)arg4 cacheDataSource:(id)arg5 alternateLineSeries:(id)arg6 alternateFormatter:(id)arg7 seriesOptions:(long long)arg8;
- (id)lollipopAnnotationColor;
- (id)lollipopExtensionColor;
- (void)_commonInitializationWithDisplayType:(id)arg1;
- (void)clearOverlayDisplayType;
- (id)_dataSourceForDistributionStyle:(long long)arg1 timeScope:(long long)arg2 namedPredicate:(id)arg3;
- (void)_modifyFormatter:(id)arg1 forTitleOptions:(long long)arg2;
- (id)_dataSourceForQuantityType:(id)arg1 timeScope:(long long)arg2 customDataSource:(id)arg3;
- (void)_deliverOrWaitForDataSource:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_deliverCachedDataFromSource:(id)arg1 timeScope:(long long)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_displayTypeRequiresAverageAndDuration:(id)arg1;
- (id)_overlayChartCacheForDistributionStyle:(long long)arg1 timeScope:(long long)arg2 namedPredicate:(id)arg3;
- (id)_overlayChartCacheForDataSource:(id)arg1 timeScope:(long long)arg2;
- (id)visibleRangeForTimeScope:(long long)arg1 proposedRange:(id)arg2;
- (void)_removeControllerWaitingForData:(id)arg1;

@end
