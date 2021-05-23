/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class STCity, STWeatherAttributes;

@interface STShowWeatherConditionsRequest : AFSiriRequest

{
    STWeatherAttributes *_attributes;
    STCity *_city;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)attributes;
- (id)city;
- (id)createResponse;
- (id)_initWithAttributes:(id)arg1 city:(id)arg2;

@end
