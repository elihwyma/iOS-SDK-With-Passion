/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFDeleteAlarmRequest : AFSiriRequest

{
    NSArray *_alarmIdentifiers;
}

@property (copy, nonatomic) NSArray *alarmIdentifiers;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;

@end
