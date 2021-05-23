/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <UIViewController.h>

@class NSArray, NSMutableArray, NSString, NSURL, UIStackView, UIView, WATodayHeaderView, WATodayModel, WFURLComponents;

@interface WAWeatherPlatterViewController : UIViewController

{
    long long _status;
    NSURL *_commitURL;
    WFURLComponents *_URLComponents;
    WATodayModel *_model;
    UIView *_backgroundView;
    WATodayHeaderView *_headerView;
    UIView *_dividerLineView;
    NSArray *_hourlyForecastViews;
    UIStackView *_hourlyBeltView;
    NSMutableArray *_constraints;
    double _viewWidth;
}

@property (retain, nonatomic) WFURLComponents *URLComponents;
@property (retain, nonatomic) WATodayModel *model;
@property (nonatomic) long long status;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) WATodayHeaderView *headerView;
@property (retain, nonatomic) UIView *dividerLineView;
@property (retain, nonatomic) NSArray *hourlyForecastViews;
@property (retain, nonatomic) UIStackView *hourlyBeltView;
@property (retain, nonatomic) NSMutableArray *constraints;
@property (copy, nonatomic) NSURL *commitURL;
@property (nonatomic) double viewWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (void)_updateStatus:(long long)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateViewConstraints;
- (id)initWithURLComponents:(id)arg1;
- (void)setupConstraints;
- (void)temperatureUnitObserver:(id)arg1 didChangeTemperatureUnitTo:(int)arg2;
- (void)_kickoffLoadingWithLocation:(id)arg1 orPerhapsALocationString:(id)arg2;
- (void)_contentSizeDidUpdate:(id)arg1;
- (void)setupBackgroundView;
- (void)setupHeaderView;
- (void)setupDividerView;
- (void)setupHourlyForecast;
- (void)_updateViewContent;
- (void)_buildModelForLocation:(id)arg1;
- (id)initWithLocationString:(id)arg1;

@end
