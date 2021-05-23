/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class STAlarm;

@interface AFCreateAlarmRequest : AFSiriRequest

{
    STAlarm *_alarm;
}

@property (retain, nonatomic) STAlarm *alarm;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;

@end
