/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKViewController.h>

@class HKGraphView, NSString;

@protocol HKGraphViewControllerDelegate, HKGraphViewDelegate;

@interface HKGraphViewController : HKViewController

{
    HKGraphView *_graphView;
    id <HKGraphViewDelegate> _graphViewDelegateProxy;
    id <HKGraphViewControllerDelegate> _delegate;
    long long _dateZoom;
}

@property (nonatomic, readonly) HKGraphView *graphView;
@property (weak, nonatomic) id <HKGraphViewDelegate> graphViewDelegateProxy;
@property (weak, nonatomic) id <HKGraphViewControllerDelegate> delegate;
@property (nonatomic, readonly) long long dateZoom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDetailView:(id)arg1;
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
- (void)graphView:(id)arg1 startupTime:(long long)arg2;
- (id)initWithGraphView:(id)arg1 dateZoom:(long long)arg2;

@end
