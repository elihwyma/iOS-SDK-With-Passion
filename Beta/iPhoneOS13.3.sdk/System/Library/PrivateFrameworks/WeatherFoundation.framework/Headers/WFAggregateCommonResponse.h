/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/Swift-Protocol.h>

@class NSArray, WFAirQualityConditions, WFWeatherConditions;

@interface WFAggregateCommonResponse : WFResponse <Swift>

{
    _Bool _responseWasFromCache;
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
@property (nonatomic) _Bool responseWasFromCache;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
