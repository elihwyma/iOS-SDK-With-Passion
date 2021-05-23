/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSArray, WFAirQualityConditions, WFWeatherConditions;

@interface WFAggregateCommonForecast : NSObject

{
    WFAirQualityConditions *_airQualityObservations;
    WFWeatherConditions *_currentObservations;
    NSArray *_lastTwentyFourHoursOfObservations;
    NSArray *_hourlyForecastedConditions;
    NSArray *_dailyForecastedConditions;
    NSArray *_dailyPollenForecastedConditions;
}

@property (retain, nonatomic) WFAirQualityConditions *airQualityObservations;
@property (retain, nonatomic) WFWeatherConditions *currentObservations;
@property (retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations;
@property (retain, nonatomic) NSArray *hourlyForecastedConditions;
@property (retain, nonatomic) NSArray *dailyForecastedConditions;
@property (retain, nonatomic) NSArray *dailyPollenForecastedConditions;

@end
