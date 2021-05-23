/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <UIView.h>

@class NSArray, NSString, UIImage, UIImageView, WALegibilityLabel, WATodayPadViewStyle, _UILegibilitySettings;

@interface WATodayPadView : UIView

{
    WATodayPadViewStyle *_style;
    NSArray *_constraints;
    UIImageView *_conditionsImageView;
    WALegibilityLabel *_temperatureLabel;
    WALegibilityLabel *_locationLabel;
    WALegibilityLabel *_conditionsLabel;
    _UILegibilitySettings *_legibilitySettings;
}

@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIImageView *conditionsImageView;
@property (retain, nonatomic) WALegibilityLabel *temperatureLabel;
@property (retain, nonatomic) WALegibilityLabel *locationLabel;
@property (retain, nonatomic) WALegibilityLabel *conditionsLabel;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSString *conditionsLine;
@property (copy, nonatomic) UIImage *conditionsImage;
@property (copy, nonatomic) NSString *temperature;
@property (copy, nonatomic) NSString *locationName;
@property (copy, nonatomic) WATodayPadViewStyle *style;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)willMoveToWindow:(id)arg1;
- (void)updateForChangedSettings:(id)arg1;
- (void)_setupConstraintsForViews;

@end
