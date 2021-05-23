/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSOperation.h>

@class City, NSArray, NSCalendar, NSData, NSDate, NSDictionary, NSError, NSLocale, NSString, WACurrentForecast, WAForecastModel, WFAirQualityConditions, WFAirQualityRequest, WFDailyForecastRequest, WFForecastRequest, WFHourlyForecastRequest, WFLocation, WFServiceConnection, WFWeatherConditions;

@interface WAForecastOperation : NSOperation

{
    _Bool _isDay;
    _Bool _shouldAttachRawAPIData;
    City *_city;
    WFLocation *_location;
    WACurrentForecast *_currentConditions;
    WFAirQualityConditions *_airQualityConditions;
    NSArray *_hourlyForecasts;
    NSArray *_dailyForecasts;
    NSDate *_sunrise;
    NSDate *_sunset;
    NSDictionary *_links;
    NSError *_error;
    WFWeatherConditions *_currentWeatherConditions;
    NSArray *_dailyForecastConditions;
    NSArray *_hourlyForecastConditions;
    WFDailyForecastRequest *_dailyForecastRequest;
    WFHourlyForecastRequest *_hourlyForecastRequest;
    WFForecastRequest *_todayForecastRequest;
    WFAirQualityRequest *_airQualityRequest;
    NSCalendar *_calendar;
    NSLocale *_locale;
    NSString *_trackingParameter;
    NSData *_rawAPIData;
    WFServiceConnection *_connection;
}

@property (retain, nonatomic) WFWeatherConditions *currentWeatherConditions;
@property (retain, nonatomic) WACurrentForecast *currentConditions;
@property (retain, nonatomic) WFAirQualityConditions *airQualityConditions;
@property (retain, nonatomic) NSArray *dailyForecastConditions;
@property (retain, nonatomic) NSArray *hourlyForecastConditions;
@property (retain, nonatomic) NSArray *hourlyForecasts;
@property (retain, nonatomic) NSArray *dailyForecasts;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *sunset;
@property (retain, nonatomic) NSDate *sunrise;
@property (retain, nonatomic) WFLocation *location;
@property (retain, nonatomic) NSDictionary *links;
@property (retain, nonatomic) WFDailyForecastRequest *dailyForecastRequest;
@property (retain, nonatomic) WFHourlyForecastRequest *hourlyForecastRequest;
@property (retain, nonatomic) WFForecastRequest *todayForecastRequest;
@property (retain, nonatomic) WFAirQualityRequest *airQualityRequest;
@property (nonatomic) _Bool isDay;
@property (retain, nonatomic) NSCalendar *calendar;
@property (retain) NSLocale *locale;
@property (retain) NSString *trackingParameter;
@property (nonatomic) _Bool shouldAttachRawAPIData;
@property (retain, nonatomic) NSData *rawAPIData;
@property (retain, nonatomic) City *city;
@property (retain, nonatomic) WFServiceConnection *connection;
@property (nonatomic, readonly) WAForecastModel *forecastModel;

- (void)cancel;
- (void)main;
- (void)_failWithError:(id)arg1;
- (id)initWithLocation:(id)arg1 onConnection:(id)arg2;
- (_Bool)_needsGeolocation;
- (void)_determineSunriseAndSunset;
- (void)_mapReferralLinks;
- (id)initWithCity:(id)arg1 onConnection:(id)arg2;

@end
