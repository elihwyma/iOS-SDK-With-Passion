/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray, STCity, STWeatherAttributes;

@interface STShowHourlyWeatherForecastRequest : AFSiriRequest

{
    STWeatherAttributes *_currentAttributes;
    NSArray *_hourlyAttributes;
    STCity *_city;
    long long _startHour;
    long long _forecastType;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)city;
- (id)createResponse;
- (long long)forecastType;
- (id)currentAttributes;
- (id)_initWithCurrentAttributes:(id)arg1 hourlyAttributes:(id)arg2 city:(id)arg3 startHour:(long long)arg4 forecastType:(long long)arg5;
- (id)hourlyAttributes;
- (long long)startHour;

@end
