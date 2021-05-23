/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriResponse.h>

@class NSString;

@interface AFCreateAlarmResponse : AFSiriResponse

{
    NSString *_alarmIdentifier;
}

@property (copy, nonatomic) NSString *alarmIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
