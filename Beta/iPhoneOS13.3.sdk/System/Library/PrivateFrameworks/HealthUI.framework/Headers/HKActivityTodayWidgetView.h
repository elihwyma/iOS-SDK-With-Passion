/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UIView.h>

@class HKActivityRingView, HKActivitySummary, HKUnit, NSMutableArray, UIFont, UIImageView, UILabel, UILayoutGuide;

@interface HKActivityTodayWidgetView : UIView

{
    HKActivityRingView *_ringView;
    HKActivitySummary *_activitySummary;
    HKUnit *_activeEnergyUnit;
    HKUnit *_basalEnergyUnit;
    UIImageView *_ringViewSnapshot;
    UILabel *_moveTitleLabel;
    UILabel *_moveValueLabel;
    UILabel *_exerciseTitleLabel;
    UILabel *_exerciseValueLabel;
    UILabel *_standTitleLabel;
    UILabel *_standValueLabel;
    UIFont *_smallCapsValueFont;
    UIView *_textContainerView;
    UILayoutGuide *_labelsTopLayoutGuide;
    UILayoutGuide *_labelsBottomLayoutGuide;
    NSMutableArray *_sizeDepedentConstraints;
}

@property (retain, nonatomic) NSMutableArray *sizeDepedentConstraints;

+ (double)preferredHeight;
+ (id)_integerFormatter;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupSubviews;
- (void)setActivitySummary:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 activeEnergyUnit:(id)arg2 basalEnergyUnit:(id)arg3;
- (void)setActiveEnergyUnit:(id)arg1 basalEnergyUnit:(id)arg2;
- (void)setIsWheelchairUser:(_Bool)arg1;
- (void)_textSizeDidUpdate:(id)arg1;
- (void)setupRingViews;
- (void)setupMoveLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupExerciseLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)setupStandLabelsWithTitleFont:(id)arg1 valueFont:(id)arg2;
- (void)updateTextWithNewActivitySummary:(id)arg1;
- (void)_constrainLabels;
- (void)_animateCurrentActivitySummary;
- (void)_updateStandTitleLabelWithSummary:(id)arg1;
- (void)_updateMoveValueLabelWithSummary:(id)arg1;
- (void)_updateForCurrentSizeCategoryAndSystemLanguage;
- (void)_renderRingImage;

@end
