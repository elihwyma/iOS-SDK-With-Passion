/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKDisplayType, HKHealthStore, HKHistogramAnnotationViewDataSource, HKHistogramBarSeries, HKHistogramChartDataFormatter, HKHistogramChartDataSource, HKLollipopController, HKScalarGraphViewController, NSString, UILabel;

@interface HKHistogramChartViewController : HKViewController

{
    HKHealthStore *_healthStore;
    double _minimumGraphViewHeight;
    UILabel *_headerLabel;
    HKScalarGraphViewController *_graphViewController;
    HKHistogramBarSeries *_histogramSeries;
    HKHistogramChartDataSource *_dataSource;
    HKHistogramChartDataFormatter *_dataFormatter;
    HKDisplayType *_displayType;
    HKHistogramAnnotationViewDataSource *_annotationViewDataSource;
    HKLollipopController *_lollipopController;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (nonatomic) double minimumGraphViewHeight;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) HKScalarGraphViewController *graphViewController;
@property (retain, nonatomic) HKHistogramBarSeries *histogramSeries;
@property (retain, nonatomic) HKHistogramChartDataSource *dataSource;
@property (retain, nonatomic) HKHistogramChartDataFormatter *dataFormatter;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) HKHistogramAnnotationViewDataSource *annotationViewDataSource;
@property (retain, nonatomic) HKLollipopController *lollipopController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultVerticalAxis;

- (void)viewDidLoad;
- (id)initWithHealthStore:(id)arg1 dataSource:(id)arg2 dataFormatter:(id)arg3 minimumGraphViewHeight:(double)arg4;
- (void)graphViewDidBeginSelection:(id)arg1;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (long long)stackCountForGraphView:(id)arg1;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphViewSizeChanged:(id)arg1;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(_Bool)arg3;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect)arg2;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;
- (void)didCompleteFetchForDataSource:(id)arg1;
- (void)_pinView:(id)arg1 toParentView:(id)arg2;
- (id)_descriptionDateFormatter;
- (id)_displayDescriptionForDataSource:(id)arg1;

@end
