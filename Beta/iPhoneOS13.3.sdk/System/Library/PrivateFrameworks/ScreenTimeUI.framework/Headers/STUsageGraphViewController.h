/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSString, STBarView, STDashedVerticalDivider, STPaddleView, STUsageReportGraphDataSet, UIImage, UIImageView, UILabel, UILayoutGuide, UIView;

@interface STUsageGraphViewController : UIViewController

{
    _Bool _includePaddle;
    _Bool _useVibrancy;
    STUsageReportGraphDataSet *_dataSet;
    long long _selectedWeekday;
    STBarView *_selectedBarView;
    unsigned long long _week;
    unsigned long long _day;
    UIView *_titleView;
    STPaddleView *_paddleView;
    UIView *_paddleConnectorView;
    NSLayoutConstraint *_paddleViewCenterXConstraint;
    NSLayoutConstraint *_paddleViewConnectorCenterXConstraint;
    NSArray *_verticalDividers;
    NSArray *_horizontalDividers;
    NSArray *_barViews;
    NSArray *_barIndicators;
    NSArray *_barViewHeightConstraints;
    NSArray *_verticalLayoutGuides;
    UILayoutGuide *_graphLayoutGuide;
    UILayoutGuide *_xAxisLabelSectionLayoutGuide;
    UILayoutGuide *_yAxisLabelSectionLayoutGuide;
    UILayoutGuide *_barSectionLayoutGuide;
    NSLayoutConstraint *_yAxisLabelSectionWidthConstraint;
    UIImageView *_weeklyAverageLine;
    UILabel *_weeklyAverageLabel;
    UILayoutGuide *_weeklyAverageLayoutGuide;
    NSLayoutConstraint *_weeklyAverageHeightConstraint;
    NSLayoutConstraint *_weeklyAverageTrailingConstraint;
    UIView *_vibrancyEffectContentView;
    STDashedVerticalDivider *_selectedVerticalDivider;
    STBarView *_pressedBarView;
    double _graphHeight;
}

@property (readonly) UIView *titleView;
@property (retain) STPaddleView *paddleView;
@property (retain) UIView *paddleConnectorView;
@property (retain) NSLayoutConstraint *paddleViewCenterXConstraint;
@property (retain) NSLayoutConstraint *paddleViewConnectorCenterXConstraint;
@property (copy) NSArray *verticalDividers;
@property (copy) NSArray *horizontalDividers;
@property (copy) NSArray *barViews;
@property (copy) NSArray *barIndicators;
@property (copy) NSArray *barViewHeightConstraints;
@property (copy) NSArray *verticalLayoutGuides;
@property (retain) UILayoutGuide *graphLayoutGuide;
@property (retain) UILayoutGuide *xAxisLabelSectionLayoutGuide;
@property (retain) UILayoutGuide *yAxisLabelSectionLayoutGuide;
@property (retain) UILayoutGuide *barSectionLayoutGuide;
@property (retain) NSLayoutConstraint *yAxisLabelSectionWidthConstraint;
@property (retain) UIImageView *weeklyAverageLine;
@property (retain) UILabel *weeklyAverageLabel;
@property (retain) UILayoutGuide *weeklyAverageLayoutGuide;
@property (retain) NSLayoutConstraint *weeklyAverageHeightConstraint;
@property (retain) NSLayoutConstraint *weeklyAverageTrailingConstraint;
@property (retain) UIView *vibrancyEffectContentView;
@property (retain) STBarView *selectedBarView;
@property (retain) STDashedVerticalDivider *selectedVerticalDivider;
@property (retain, nonatomic) STBarView *pressedBarView;
@property (readonly) UIImage *dashedAverageLineImage;
@property (readonly) double graphHeight;
@property (readonly) _Bool includePaddle;
@property (readonly) _Bool useVibrancy;
@property (retain, nonatomic) STUsageReportGraphDataSet *dataSet;
@property (nonatomic) long long selectedWeekday;
@property (readonly) double maximumYAxisLabelWidth;
@property unsigned long long week;
@property unsigned long long day;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)initWithTitleView:(id)arg1 graphHeight:(double)arg2 includePaddle:(_Bool)arg3 useVibrancy:(_Bool)arg4;
- (void)setDataSet:(id)arg1 animated:(_Bool)arg2;
- (void)setYAxisLabelSectionWidth:(double)arg1;
- (void)_stUsageGraphViewControllerCommonInit;
- (void)_handleLongPressGestureForPaddle:(id)arg1;
- (void)_handleLongPressGestureForBarSelection:(id)arg1;
- (void)setUpGraphWithLabelFormatter:(id)arg1;
- (void)_updateBarViewsAndIndicators;
- (void)_setUpHorizontalDividerLabels;
- (void)setUpWeeklyAverageLine:(_Bool)arg1;
- (void)setUpBarViewHeightContraints;
- (void)_selectBarView:(id)arg1;
- (id)createFirstDivider;
- (id)createDividerWithView:(id)arg1 layoutGuide:(id)arg2 previousLayoutGuide:(id)arg3 layoutGuideWidthMultiplier:(double)arg4;
- (id)createBarViewWithDataPoint:(id)arg1 layoutGuide:(id)arg2 previousView:(id)arg3 previousLayoutGuide:(id)arg4 layoutGuideWidthMultiplier:(double)arg5;
- (id)createBarIndicatorWithImageName:(id)arg1 barView:(id)arg2;
- (id)createWeeklyAverageLineWithLayoutGuide:(id)arg1;
- (id)_closestBarViewToPoint:(struct CGPoint)arg1;
- (void)_showPaddleForBarView:(id)arg1;

@end
