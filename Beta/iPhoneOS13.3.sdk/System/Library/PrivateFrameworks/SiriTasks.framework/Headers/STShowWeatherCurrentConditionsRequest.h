/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class STCity, STWeatherCurrentConditions, STWeatherUnits;

@interface STShowWeatherCurrentConditionsRequest : AFSiriRequest

{
    STWeatherCurrentConditions *_currentConditions;
    STCity *_city;
    STWeatherUnits *_units;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)city;
- (id)units;
- (id)createResponse;
- (id)currentConditions;
- (id)_initWithCurrentConditions:(id)arg1 city:(id)arg2 units:(id)arg3;

@end
