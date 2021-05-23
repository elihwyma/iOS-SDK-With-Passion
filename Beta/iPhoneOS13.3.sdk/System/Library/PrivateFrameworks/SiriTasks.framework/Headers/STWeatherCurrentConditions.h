/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber;

@interface STWeatherCurrentConditions : STSiriModelObject

{
    long long _conditionCode;
    NSNumber *_temperature;
    NSNumber *_highTemperature;
    NSNumber *_lowTemperature;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)temperature;
- (long long)conditionCode;
- (id)highTemperature;
- (id)lowTemperature;
- (id)_initWithConditionCode:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4;

@end
