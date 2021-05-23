/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <WeatherFoundation/WFResponse.h>

@class NSData, WFWeatherConditions;

@interface WFForecastResponse : WFResponse

{
    _Bool _responseWasFromCache;
    WFWeatherConditions *_forecast;
    unsigned long long _forecastType;
    NSData *_rawAPIData;
}

@property (retain, nonatomic) WFWeatherConditions *forecast;
@property (nonatomic) unsigned long long forecastType;
@property (nonatomic) _Bool responseWasFromCache;
@property (retain, nonatomic) NSData *rawAPIData;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
