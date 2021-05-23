/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class NSTimer, UIButton, UILabel;

@protocol HKInteractiveChartCurrentValueViewDataSource, HKInteractiveChartCurrentValueViewDelegate;

@interface HKInteractiveChartCurrentValueView : UIView

{
    _Bool _showsInfoButton;
    id <HKInteractiveChartCurrentValueViewDataSource> _dataSource;
    id <HKInteractiveChartCurrentValueViewDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UILabel *_secondaryLabel;
    UIButton *_infoButton;
    NSTimer *_deferredNoDataTimer;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIButton *infoButton;
@property (weak, nonatomic) NSTimer *deferredNoDataTimer;
@property (weak, nonatomic) id <HKInteractiveChartCurrentValueViewDataSource> dataSource;
@property (weak, nonatomic) id <HKInteractiveChartCurrentValueViewDelegate> delegate;
@property (nonatomic) _Bool showsInfoButton;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)reloadData;
- (void)_setupSubviews;
- (void)handleCurrentTimeGesture:(id)arg1;
- (void)handleInfographicTapGesture:(id)arg1;
- (void)showNoDataStatus;
- (void)updateCurrentValueTextWithAttributedString:(id)arg1;
- (void)scheduleDeferredDataReload;

@end
