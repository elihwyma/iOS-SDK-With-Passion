/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <UIView.h>

@class NSString, UIImage, UIImageView, UILabel, UIVisualEffectView;

@interface WATodayHeaderView : UIView

{
    NSString *_conditionsLine1;
    NSString *_conditionsLine2;
    UIImage *_conditionsImage;
    NSString *_temperature;
    NSString *_temperatureHigh;
    NSString *_temperatureLow;
    NSString *_locationName;
    UIVisualEffectView *_weatherInformationVisualEffectView;
    UILabel *_locationLabel;
    UILabel *_conditionsLabel1;
    UILabel *_conditionsLabel2;
    UIImageView *_conditionsImageView;
    UILabel *_temperatureLabel;
    UILabel *_temperatureHighLowLabel;
    double _pageFontSize;
    double _pageDegreeFontSize;
    double _pageBaselineOffset;
}

@property (retain, nonatomic) UIVisualEffectView *weatherInformationVisualEffectView;
@property (retain, nonatomic) UILabel *locationLabel;
@property (retain, nonatomic) UILabel *conditionsLabel1;
@property (retain, nonatomic) UILabel *conditionsLabel2;
@property (retain, nonatomic) UIImageView *conditionsImageView;
@property (retain, nonatomic) UILabel *temperatureLabel;
@property (retain, nonatomic) UILabel *temperatureHighLowLabel;
@property (nonatomic) double pageFontSize;
@property (nonatomic) double pageDegreeFontSize;
@property (nonatomic) double pageBaselineOffset;
@property (copy, nonatomic) NSString *conditionsLine1;
@property (copy, nonatomic) NSString *conditionsLine2;
@property (copy, nonatomic) UIImage *conditionsImage;
@property (copy, nonatomic) NSString *temperature;
@property (copy, nonatomic) NSString *temperatureHigh;
@property (copy, nonatomic) NSString *temperatureLow;
@property (copy, nonatomic) NSString *locationName;

+ (_Bool)requiresConstraintBasedLayout;

- (id)init;
- (void)_setupSubviews;
- (void)_setupConstraints;
- (void)_updateContent;

@end
