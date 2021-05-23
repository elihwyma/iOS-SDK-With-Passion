/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKActivitySummaryAnnotationViewDataSource.h>

@class UIView;

@protocol HKInteractiveChartCurrentValueViewCallbacks;

@interface _ActivityCurrentValueDataSource : HKActivitySummaryAnnotationViewDataSource

{
    _Bool _currentValueViewHasNoData;
    id <HKInteractiveChartCurrentValueViewCallbacks> _currentValueViewCallbacks;
    UIView *_noDataView;
}

@property (weak, nonatomic) id <HKInteractiveChartCurrentValueViewCallbacks> currentValueViewCallbacks;
@property (nonatomic) _Bool currentValueViewHasNoData;
@property (nonatomic, readonly) UIView *noDataView;

- (id)valueViewForColumnAtIndex:(long long)arg1 orientation:(long long)arg2;
- (long long)numberOfValuesForAnnotationView:(id)arg1;
- (id)dateViewWithOrientation:(long long)arg1;
- (id)leftMarginViewWithOrientation:(long long)arg1;
- (id)_buildNoDataView;
- (id)_localizedCurrentValueViewDateRange;
- (id)_dateRangeFromStartDate:(id)arg1 endDate:(id)arg2;
- (id)_dateRangeFromComponents;
- (id)initWithDisplayTypeController:(id)arg1 unitController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewContext:(_Bool)arg4 currentValueViewCallbacks:(id)arg5;

@end
