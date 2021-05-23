/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/STSiriModelObject.h>

@interface STWeatherUnits : STSiriModelObject

{
    long long _temperatureUnits;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)temperatureUnits;
- (id)_initWithTemperatureUnits:(long long)arg1;

@end
