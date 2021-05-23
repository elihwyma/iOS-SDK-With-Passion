/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray, STCity, STWeatherAttributes;

@interface STShowDailyWeatherForecastRequest : AFSiriRequest

{
    STWeatherAttributes *_currentAttributes;
    NSArray *_dailyAttributes;
    STCity *_city;
    long long _startWeekday;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)city;
- (id)createResponse;
- (id)currentAttributes;
- (id)_initWithCurrentAttributes:(id)arg1 dailyAttributes:(id)arg2 city:(id)arg3 startWeekday:(long long)arg4;
- (id)dailyAttributes;
- (long long)startWeekday;

@end
