/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriResponse.h>

@class NSArray;

@interface AFUpdateAlarmResponse : AFSiriResponse

{
    NSArray *_alarmIdentifiers;
}

@property (copy, nonatomic) NSArray *alarmIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAlarmIdentifier:(id)arg1;

@end
