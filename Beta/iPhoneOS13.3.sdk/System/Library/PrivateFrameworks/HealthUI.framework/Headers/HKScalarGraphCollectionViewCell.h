/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UICollectionViewCell.h>

@class HKLollipopController, HKScalarGraphViewController, NSArray, NSString, UIView;

@interface HKScalarGraphCollectionViewCell : UICollectionViewCell

{
    NSArray *_graphSeries;
    HKScalarGraphViewController *_graphViewController;
    HKLollipopController *_lollipopController;
    UIView *_header;
}

@property (retain, nonatomic) NSArray *graphSeries;
@property (weak, nonatomic) HKScalarGraphViewController *graphViewController;
@property (weak, nonatomic) HKLollipopController *lollipopController;
@property (weak, nonatomic) UIView *header;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
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
- (void)_alignYAxesForSeries:(id)arg1;

@end
