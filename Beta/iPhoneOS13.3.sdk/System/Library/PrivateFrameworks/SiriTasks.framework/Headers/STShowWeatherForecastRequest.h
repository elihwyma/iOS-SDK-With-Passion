/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray, STCity, STWeatherCurrentConditions, STWeatherUnits;

@interface STShowWeatherForecastRequest : AFSiriRequest

{
    STWeatherCurrentConditions *_currentConditions;
    NSArray *_hourlyForecasts;
    STCity *_city;
    STWeatherUnits *_units;
    long long _forecastType;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)city;
- (id)units;
- (id)createResponse;
- (id)currentConditions;
- (id)hourlyForecasts;
- (long long)forecastType;
- (id)_initWithCurrentConditions:(id)arg1 hourlyForecasts:(id)arg2 city:(id)arg3 units:(id)arg4 forecastType:(long long)arg5;

@end
