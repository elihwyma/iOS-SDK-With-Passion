/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKScalarGraphViewController.h>

@class HKAxis, NSDate, NSMutableArray;

@interface HKHeartbeatSequenceChartViewController : HKScalarGraphViewController

{
    NSDate *_startDate;
    NSMutableArray *_sequenceDataSources;
    NSMutableArray *_graphSeries;
    HKAxis *_commonVerticalAxis;
    double _initialXAxisOffset;
}

@property (retain, nonatomic) NSMutableArray *sequenceDataSources;
@property (retain, nonatomic) NSMutableArray *graphSeries;
@property (retain, nonatomic) HKAxis *commonVerticalAxis;
@property (nonatomic) double initialXAxisOffset;
@property (nonatomic, readonly) NSDate *startDate;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithMinimumHeight:(double)arg1;
- (void)addSequenceData:(id)arg1 color:(id)arg2 lineWidth:(double)arg3 markerRadius:(double)arg4 dashStyle:(long long)arg5 annotate:(_Bool)arg6;
- (long long)stackCountForGraphView:(id)arg1;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphViewSizeChanged:(id)arg1;
- (id)initWithMinimumHeight:(double)arg1 startDate:(id)arg2;
- (id)_verticalNumericalAxis;
- (void)_adjustGraphViewOptions;
- (void)_recomputeAxisRanges;
- (void)_synchronizeVerticalAxes;
- (id)_heartbeatSequenceSeriesForSource:(id)arg1 axis:(id)arg2 color:(id)arg3 lineWidth:(double)arg4 markerRadius:(double)arg5 dashStyle:(long long)arg6 annotate:(_Bool)arg7;
- (void)addSequenceData:(id)arg1;

@end
