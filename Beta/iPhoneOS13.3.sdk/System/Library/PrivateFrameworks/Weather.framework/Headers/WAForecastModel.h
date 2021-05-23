/*
 Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

#import <NSObject.h>

@class City, NSArray, NSDate, NSURL, WACurrentForecast, WFAirQualityConditions, WFLocation, WFWeatherConditions;

@interface WAForecastModel : NSObject

{
    City *_city;
    WFLocation *_location;
    WACurrentForecast *_currentConditions;
    WFAirQualityConditions *_airQualityConditions;
    NSArray *_hourlyForecasts;
    NSArray *_dailyForecasts;
    NSDate *_sunrise;
    NSDate *_sunset;
    NSURL *_deepLink;
    NSURL *_link;
    WFWeatherConditions *_underlyingCurrentConditions;
    NSArray *_underlyingHourlyConditions;
    NSArray *_underlyingDailyConditions;
}

@property (retain, nonatomic) City *city;
@property (retain, nonatomic) WFLocation *location;
@property (retain, nonatomic) WACurrentForecast *currentConditions;
@property (retain, nonatomic) WFAirQualityConditions *airQualityConditions;
@property (copy, nonatomic) NSArray *hourlyForecasts;
@property (copy, nonatomic) NSArray *dailyForecasts;
@property (retain, nonatomic) NSDate *sunrise;
@property (retain, nonatomic) NSDate *sunset;
@property (retain, nonatomic) NSURL *deepLink;
@property (retain, nonatomic) NSURL *link;
@property (retain, nonatomic) WFWeatherConditions *underlyingCurrentConditions;
@property (retain, nonatomic) NSArray *underlyingHourlyConditions;
@property (retain, nonatomic) NSArray *underlyingDailyConditions;
@property (nonatomic, readonly) _Bool isPopulated;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
