/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKRichComplicationRectangularBaseView.h>

@class NSArray, NSLayoutConstraint, NTKColoringLabel, NTKWellnessRichComplicationChartView, UIImageView, UIView;

@interface NTKWellnessRichComplicationRectangularView : NTKRichComplicationRectangularBaseView

{
    UIView *_chartTitleView;
    NTKColoringLabel *_titleLabel;
    NTKColoringLabel *_moveLabel;
    UIImageView *_moveGlyphView;
    NSLayoutConstraint *_moveGlyphTitleLabelTrailingConstraint;
    NTKColoringLabel *_exerciseLabel;
    UIImageView *_exerciseGlyphView;
    NTKColoringLabel *_standLabel;
    UIImageView *_standGlyphView;
    NTKWellnessRichComplicationChartView *_chartView;
    NSArray *_flatViews;
    NSArray *_accentViews;
}

@property (retain, nonatomic) UIView *chartTitleView;
@property (retain, nonatomic) NTKColoringLabel *titleLabel;
@property (retain, nonatomic) NTKColoringLabel *moveLabel;
@property (retain, nonatomic) UIImageView *moveGlyphView;
@property (retain, nonatomic) NSLayoutConstraint *moveGlyphTitleLabelTrailingConstraint;
@property (retain, nonatomic) NTKColoringLabel *exerciseLabel;
@property (retain, nonatomic) UIImageView *exerciseGlyphView;
@property (retain, nonatomic) NTKColoringLabel *standLabel;
@property (retain, nonatomic) UIImageView *standGlyphView;
@property (retain, nonatomic) NTKWellnessRichComplicationChartView *chartView;
@property (retain, nonatomic) NSArray *flatViews;
@property (retain, nonatomic) NSArray *accentViews;

- (id)init;
- (void)_setupViews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_setAccentViewsVisibility:(_Bool)arg1;
- (void)_updateViews:(id)arg1 withFilter:(id)arg2;

@end
