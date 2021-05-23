/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class STAlarm;

@interface AFSearchAlarmsRequest : AFSiriRequest

{
    long long _options;
    STAlarm *_criteria;
}

@property (nonatomic) long long options;
@property (retain, nonatomic) STAlarm *criteria;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;

@end
