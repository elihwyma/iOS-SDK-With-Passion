/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@class NSNumber, STTemperature;

@interface STWeatherAttributes : STSiriModelObject

{
    long long _condition;
    STTemperature *_temperature;
    STTemperature *_highTemperature;
    STTemperature *_lowTemperature;
    NSNumber *_chanceOfPrecipitation;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)condition;
- (id)chanceOfPrecipitation;
- (id)temperature;
- (id)highTemperature;
- (id)lowTemperature;
- (id)_initWithCondition:(long long)arg1 temperature:(id)arg2 highTemperature:(id)arg3 lowTemperature:(id)arg4 chanceOfPrecipitation:(id)arg5;

@end
