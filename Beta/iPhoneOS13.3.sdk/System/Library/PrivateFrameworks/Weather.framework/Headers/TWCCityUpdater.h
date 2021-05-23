/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class NSLocale, NSString, WAForecastModelController;

@protocol WeatherUpdaterDelegate;

@interface TWCCityUpdater : NSObject

{
    id <WeatherUpdaterDelegate> _delegate;
    NSLocale *_locale;
    WAForecastModelController *_forecastModelController;
}

@property (retain, nonatomic) WAForecastModelController *forecastModelController;
@property (weak, nonatomic) id <WeatherUpdaterDelegate> delegate;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSString *trackingParameter;

+ (id)sharedCityUpdater;

- (id)init;
- (void)cancel;
- (_Bool)isUpdatingCity:(id)arg1;
- (void)updateWeatherForCity:(id)arg1;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateWeatherForCities:(id)arg1;

@end
