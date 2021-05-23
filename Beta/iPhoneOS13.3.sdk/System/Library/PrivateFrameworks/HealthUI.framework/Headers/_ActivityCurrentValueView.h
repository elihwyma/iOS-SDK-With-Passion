/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKActivitySummaryDataProvider, HKInteractiveChartAnnotationView, _ActivityCurrentValueDataSource;

@interface _ActivityCurrentValueView : UIView

{
    HKInteractiveChartAnnotationView *_annotationView;
    _ActivityCurrentValueDataSource *_currentValueDataSource;
    HKActivitySummaryDataProvider *_activitySummaryDataProvider;
}

@property (nonatomic, readonly) HKInteractiveChartAnnotationView *annotationView;
@property (retain, nonatomic) _ActivityCurrentValueDataSource *currentValueDataSource;
@property (retain, nonatomic) HKActivitySummaryDataProvider *activitySummaryDataProvider;

- (id)initWithDisplayTypeController:(id)arg1 unitPreferenceController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewCallbacks:(id)arg4 activitySummaryDataProvider:(id)arg5;
- (void)updateWithGraphView:(id)arg1 timeScope:(long long)arg2;
- (void)_updateWithGraphView:(id)arg1 forTimeScopeAboveDay:(long long)arg2;
- (void)_updateForDayWithGraphView:(id)arg1;
- (id)_findFirstActivitySeriesInGraphView:(id)arg1;

@end
