//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKActivitySummaryDataProvider, HKInteractiveChartAnnotationView, _ActivityCurrentValueDataSource;

@interface _ActivityCurrentValueView : UIView
{
    HKInteractiveChartAnnotationView *_annotationView;
    _ActivityCurrentValueDataSource *_currentValueDataSource;
    HKActivitySummaryDataProvider *_activitySummaryDataProvider;
}

@property(retain, nonatomic) HKActivitySummaryDataProvider *activitySummaryDataProvider; // @synthesize activitySummaryDataProvider=_activitySummaryDataProvider;
@property(retain, nonatomic) _ActivityCurrentValueDataSource *currentValueDataSource; // @synthesize currentValueDataSource=_currentValueDataSource;
@property(readonly, nonatomic) HKInteractiveChartAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
// - (void).cxx_destruct;
- (id)_findFirstActivitySeriesInGraphView:(id)arg1;
- (void)_updateForDayWithGraphView:(id)arg1;
- (void)_updateWithGraphView:(id)arg1 forTimeScopeAboveDay:(long long)arg2;
- (void)updateWithGraphView:(id)arg1 timeScope:(long long)arg2;
- (id)initWithDisplayTypeController:(id)arg1 unitPreferenceController:(id)arg2 wheelchairUseCharacteristicCache:(id)arg3 currentValueViewCallbacks:(id)arg4 activitySummaryDataProvider:(id)arg5;

@end
