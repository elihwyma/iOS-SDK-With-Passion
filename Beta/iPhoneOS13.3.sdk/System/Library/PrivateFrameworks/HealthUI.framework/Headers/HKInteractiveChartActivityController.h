/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKInteractiveChartViewController.h>

@class HKActivitySummaryAnnotationViewDataSource, HKActivitySummaryDataProvider, HKInteractiveChartDisplayType, NSMapTable, NSString, _ActivityCurrentValueView, _HKWheelchairUseCharacteristicCache;

@protocol HKInteractiveChartCurrentValueViewCallbacks;

@interface HKInteractiveChartActivityController : HKInteractiveChartViewController

{
    NSMapTable *_yAxisAccessoryViewsByGraphSeries;
    HKActivitySummaryDataProvider *_activityDataProvider;
    HKActivitySummaryAnnotationViewDataSource *_activityAnnotationDataSource;
    long long _currentTimeScope;
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    _ActivityCurrentValueView *_activityCurrentValueView;
    id <HKInteractiveChartCurrentValueViewCallbacks> _activityCurrentValueViewCallbacks;
    HKInteractiveChartDisplayType *_moveValueDisplayType;
    HKInteractiveChartDisplayType *_moveGoalDisplayType;
    HKInteractiveChartDisplayType *_exerciseValueDisplayType;
    HKInteractiveChartDisplayType *_exerciseGoalDisplayType;
    HKInteractiveChartDisplayType *_standValueDisplayType;
    HKInteractiveChartDisplayType *_standGoalDisplayType;
}

@property (retain, nonatomic) NSMapTable *yAxisAccessoryViewsByGraphSeries;
@property (retain, nonatomic) HKActivitySummaryDataProvider *activityDataProvider;
@property (retain, nonatomic) HKActivitySummaryAnnotationViewDataSource *activityAnnotationDataSource;
@property (nonatomic) long long currentTimeScope;
@property (nonatomic, readonly) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (retain, nonatomic) _ActivityCurrentValueView *activityCurrentValueView;
@property (weak, nonatomic) id <HKInteractiveChartCurrentValueViewCallbacks> activityCurrentValueViewCallbacks;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *moveValueDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *moveGoalDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *exerciseValueDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *exerciseGoalDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *standValueDisplayType;
@property (nonatomic, readonly) HKInteractiveChartDisplayType *standGoalDisplayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)arg1;
- (id)makeAnnotationDataSource;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (void)didUpdateFromDateZoom:(long long)arg1 toDateZoom:(long long)arg2 newVisibleRange:(id)arg3;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)initWithHealthStore:(id)arg1 unitPreferenceController:(id)arg2 dateCache:(id)arg3 chartDataCacheController:(id)arg4 selectedTimeScopeController:(id)arg5 wheelchairUseCharacteristicCache:(id)arg6 initialXValue:(id)arg7;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (id)lollipopAnnotationColor;
- (id)lollipopExtensionColor;
- (id)descriptionSpansForGraphView:(id)arg1;
- (id)calendarQueryDisplayType;
- (id)descriptionSeriesForGraphView:(id)arg1;
- (id)descriptionForChartData:(id)arg1 timeScope:(long long)arg2;
- (id)_rangeValueAsNumber:(id)arg1;
- (id)makeCurrentValueView;
- (void)setCurrentValueViewCallbacks:(id)arg1;
- (id)calendarQuerySampleType;
- (void)updateCurrentValueView:(id)arg1 graphView:(id)arg2 timeScope:(long long)arg3;
- (id)_activityYAxisForActivityValue:(long long)arg1 zeroOnly:(_Bool)arg2 stackOffset:(long long)arg3 bottomLabelPadding:(double)arg4 displayTypeController:(id)arg5 unitPreferenceController:(id)arg6;
- (id)_displayTypeForActivityValue:(long long)arg1 yAxis:(id)arg2 dataProvider:(id)arg3 displayTypeController:(id)arg4 unitPreferenceController:(id)arg5 wheelchairUseCharacteristicCache:(id)arg6;
- (id)_activitySeriesForActivityValue:(long long)arg1 wheelchairUseCharacteristicCache:(id)arg2 unitPreferenceController:(id)arg3 displayTypeController:(id)arg4;
- (id)_unitForActivityValue:(long long)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3;
- (long long)_representativeDataTypeForActivityValue:(long long)arg1;
- (id)_titleForActivityValue:(long long)arg1 wheelchairUseCharacteristicCache:(id)arg2;
- (id)_lineColorForActivityValue:(long long)arg1;
- (id)_metGoalFillStyleForActivityValue:(long long)arg1;
- (id)_missedGoalFillStyleForActivityValue:(long long)arg1;
- (id)_generateActivityBarSeriesWithColor:(id)arg1 legendTitle:(id)arg2 metGoalFillStyle:(id)arg3 missedGoalFillStyle:(id)arg4 activityValue:(long long)arg5 unitPreferenceController:(id)arg6 displayTypeController:(id)arg7;
- (id)_generateActivityGoalLineSeriesWithColor:(id)arg1;
- (id)_zeroStringForActivityValue:(long long)arg1 displayTypeController:(id)arg2 unitPreferenceController:(id)arg3;
- (id)_spanForValueDisplayType:(id)arg1 title:(id)arg2;
- (void)tappedOnCurrentValueView:(id)arg1;
- (id)_dayActivitySummaryForDateRange:(id)arg1;
- (long long)graphSeriesTimeScope;
- (id)activitySummaryForCurrentRange;

@end
