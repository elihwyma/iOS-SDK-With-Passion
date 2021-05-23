/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class HKElectrocardiogramAxisView, HKElectrocardiogramChartView, HKElectrocardiogramInfoView, UIScrollView;

@interface HKElectrocardiogramChartTableViewCell : UITableViewCell

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
- (void)_setUpScrollViewContent;
- (void)_updateMargins;
- (id)initWithGridSize:(struct CGSize)arg1 reuseIdentifier:(id)arg2;

@end
