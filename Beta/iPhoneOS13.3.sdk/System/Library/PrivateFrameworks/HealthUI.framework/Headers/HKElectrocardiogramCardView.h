/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKDateCache, HKElectrocardiogram, HKElectrocardiogramChartView, HKRoundedHeaderView, NSArray, NSLayoutConstraint, NSString, UIImageView, UILabel;

@interface HKElectrocardiogramCardView : UIView

{
    _Bool _onboarding;
    HKElectrocardiogram *_sample;
    HKDateCache *_dateCache;
    HKRoundedHeaderView *_headerView;
    UIView *_cellBackgroundView;
    UIImageView *_heartImageView;
    UILabel *_averageHeartRateLabel;
    UILabel *_symptomsLabel;
    HKElectrocardiogramChartView *_graphView;
    NSLayoutConstraint *_averageHeartRateLabelFirstBaselineConstraint;
    NSLayoutConstraint *_averageHeartRateLabelWidthConstraint;
    NSLayoutConstraint *_symptomsLabelFirstBaselineConstraint;
    NSLayoutConstraint *_graphTopConstraint;
    NSLayoutConstraint *_heartImageViewHeightConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
}

@property (weak, nonatomic) HKDateCache *dateCache;
@property (nonatomic, getter=isOnboarding) _Bool onboarding;
@property (retain, nonatomic) HKRoundedHeaderView *headerView;
@property (retain, nonatomic) UIView *cellBackgroundView;
@property (retain, nonatomic) UIImageView *heartImageView;
@property (retain, nonatomic) UILabel *averageHeartRateLabel;
@property (retain, nonatomic) UILabel *symptomsLabel;
@property (retain, nonatomic) HKElectrocardiogramChartView *graphView;
@property (retain, nonatomic) NSLayoutConstraint *averageHeartRateLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *averageHeartRateLabelWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *symptomsLabelFirstBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *graphTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heartImageViewHeightConstraint;
@property (retain, nonatomic) NSArray *regularConstraints;
@property (retain, nonatomic) NSArray *largeTextConstraints;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)_graphHeight;
+ (double)estimatedHeight;
+ (double)_headerBottomToAverageHeartRateBaseline;
+ (double)_averageHeartRateBaselineToGraphTop;
+ (double)_graphBottomToCardBottom;
+ (id)_averageHeartRateSymptomsFont;
+ (id)_averageHeartRateSymptomsFontForElectrocardiogram:(id)arg1;
+ (double)_averageHeartRateBaselineToSymptomBaseline;
+ (id)_accessibilityContentSizeCategory;
+ (id)_averageHeartRateSymptomsTextStyle;
+ (id)_averageHeartRateSymptomsBoldFont;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)_updateUI;
- (void)_updateForCurrentSizeCategory;
- (void)_setupConstraints;
- (void)_setupUI;
- (id)_cardBackgroundColor;
- (void)dateCacheDidUpdate:(id)arg1 onNotification:(id)arg2;
- (id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(_Bool)arg3;
- (void)_setUpGraph;
- (id)_cardHeaderColor;
- (id)_chevronColor;
- (id)_graphBackgroundColor;
- (_Bool)_isLayingOutForAccessibility;
- (void)_updateTextConstraints;
- (void)_updateGraphTopConstraint;

@end
