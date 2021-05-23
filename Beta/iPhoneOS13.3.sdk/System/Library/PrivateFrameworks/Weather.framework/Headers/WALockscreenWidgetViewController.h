/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <UIViewController.h>

@class NSDate, NSString, NSTimer, WAForecastModel, WATodayModel, WATodayPadView;

@protocol WAWidgetDelegate;

@interface WALockscreenWidgetViewController : UIViewController

{
    _Bool _locationServicesActive;
    WATodayPadView *_todayView;
    double _updateInterval;
    id <WAWidgetDelegate> _delegate;
    WATodayModel *_todayModel;
    WAForecastModel *_currentForecastModel;
    NSTimer *_updateTimer;
    NSDate *_updateLastCompletionDate;
}

@property (retain, nonatomic) WATodayModel *todayModel;
@property (retain, nonatomic) WATodayPadView *todayView;
@property (copy, nonatomic) WAForecastModel *currentForecastModel;
@property (retain, nonatomic) NSTimer *updateTimer;
@property (copy, nonatomic) NSDate *updateLastCompletionDate;
@property (nonatomic) _Bool locationServicesActive;
@property (nonatomic) double updateInterval;
@property (weak, nonatomic) id <WAWidgetDelegate> delegate;
@property (nonatomic, readonly) _Bool todayViewIsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstanceIfExists;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)updateForChangedSettings:(id)arg1;
- (id)_locationName;
- (id)_temperature;
- (void)_updateTimerFired:(id)arg1;
- (void)todayModelWantsUpdate:(id)arg1;
- (void)todayModel:(id)arg1 forecastWasUpdated:(id)arg2;
- (void)_updateTodayView;
- (void)_updateWithReason:(id)arg1;
- (void)_teardownWeatherModel;
- (void)_setTodayViewHidden:(_Bool)arg1;
- (void)_teardownTimer;
- (void)_scheduleNewTimer;
- (void)_setupWeatherModel;
- (_Bool)_delegateShouldUpdateForecast;
- (void)_delegateWillUpdate;
- (void)_delegateUpdateDidFailWithError:(id)arg1;
- (_Bool)shouldFakeWeather;
- (id)_conditionsLine;
- (id)_conditionsImage;
- (void)getLocationServicesAuthorizationStatus:(CDUnknownBlockType)arg1;
- (void)updateWeather;
- (void)_delegateDidUpdate;

@end
