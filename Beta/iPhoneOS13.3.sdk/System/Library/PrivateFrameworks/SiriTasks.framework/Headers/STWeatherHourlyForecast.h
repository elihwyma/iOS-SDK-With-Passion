/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherHourlyForecast : STSiriModelObject

{
    long long _timeIndex;
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_chanceOfPrecipitation;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)chanceOfPrecipitation;
- (id)temperature;
- (long long)conditionCode;
- (long long)timeIndex;
- (id)_initWithConditionCodeIndex:(long long)arg1 timeIndex:(long long)arg2 temperature:(id)arg3 chanceOfPrecipitation:(id)arg4;

@end
