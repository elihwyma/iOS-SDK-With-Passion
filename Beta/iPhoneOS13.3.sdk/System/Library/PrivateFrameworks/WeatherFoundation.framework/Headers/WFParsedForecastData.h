/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSObject.h>

@class NSArray, NSData, WFAirQualityConditions, WFWeatherConditions;

@interface WFParsedForecastData : NSObject

{
    NSData *_rawData;
    WFAirQualityConditions *_airQualityObservations;
    WFWeatherConditions *_currentConditions;
    NSArray *_lastTwentyFourHoursOfObservations;
    NSArray *_dailyForecasts;
    NSArray *_hourlyForecasts;
    NSArray *_pollenForecasts;
}

@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) WFAirQualityConditions *airQualityObservations;
@property (retain, nonatomic) WFWeatherConditions *currentConditions;
@property (retain, nonatomic) NSArray *lastTwentyFourHoursOfObservations;
@property (retain, nonatomic) NSArray *dailyForecasts;
@property (retain, nonatomic) NSArray *hourlyForecasts;
@property (retain, nonatomic) NSArray *pollenForecasts;

- (id)objectForForecastType:(unsigned long long)arg1;

@end
