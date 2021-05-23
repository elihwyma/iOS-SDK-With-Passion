/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <UIView.h>

@class NSArray, NSAttributedString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface WATodayHourlyForecastView : UIView

{
    UIVisualEffectView *_temperatureLabelVisualEffectView;
    UIVisualEffectView *_timeLabelVisualEffectView;
    UILabel *_temperatureLabel;
    UILabel *_timeLabel;
    UIImageView *_conditionsImageView;
    NSArray *_constraints;
}

@property (retain, nonatomic) UIVisualEffectView *temperatureLabelVisualEffectView;
@property (retain, nonatomic) UIVisualEffectView *timeLabelVisualEffectView;
@property (retain, nonatomic) UILabel *temperatureLabel;
@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) UIImageView *conditionsImageView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) UIImage *conditionsImage;
@property (copy, nonatomic) NSAttributedString *temperature;
@property (copy, nonatomic) NSAttributedString *time;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupConstraints;
- (void)applyVibrancyToTimeWithEffect:(id)arg1;

@end
