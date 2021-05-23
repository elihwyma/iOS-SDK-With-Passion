/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <UIView.h>

@class NSMutableArray, UIColor, UIImageView, UILabel, WATodayAutoupdatingLocationModel;

@interface WAGreetingView : UIView

{
    _Bool _isViewCreated;
    WATodayAutoupdatingLocationModel *_todayModel;
    UILabel *_natualLanguageDescriptionLabel;
    UIImageView *_conditionImageView;
    UILabel *_temperatureLabel;
    NSMutableArray *_constraints;
    UIColor *_labelColor;
}

@property (retain, nonatomic) WATodayAutoupdatingLocationModel *todayModel;
@property (retain, nonatomic) UILabel *natualLanguageDescriptionLabel;
@property (retain, nonatomic) UIImageView *conditionImageView;
@property (retain, nonatomic) UILabel *temperatureLabel;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (nonatomic) _Bool isViewCreated;
@property (retain, nonatomic) UIColor *labelColor;

- (id)init;
- (void)dealloc;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)updateView;
- (id)_temperature;
- (void)setupConstraints;
- (void)startService;
- (id)_conditionsImage;
- (void)createViews;
- (void)updateLabelColors;

@end
