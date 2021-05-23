/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKElectrocardiogramAxisView, HKElectrocardiogramChartView, HKElectrocardiogramInfoView, UIScrollView;

@interface HKElectrocardiogramChartMetadataView : UIView

{
    HKElectrocardiogramChartView *_chartView;
    HKElectrocardiogramInfoView *_infoView;
    UIScrollView *_scrollView;
    HKElectrocardiogramAxisView *_axisView;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) HKElectrocardiogramChartView *chartView;
@property (retain, nonatomic) HKElectrocardiogramAxisView *axisView;
@property (retain, nonatomic) HKElectrocardiogramInfoView *infoView;
@property (nonatomic, readonly) struct CGSize gridSize;

- (void)layoutMarginsDidChange;
- (void)_setUpUI;
- (id)initWithGridSize:(struct CGSize)arg1;
- (void)_setUpScrollViewContent;
- (void)_updateMargins;

@end
