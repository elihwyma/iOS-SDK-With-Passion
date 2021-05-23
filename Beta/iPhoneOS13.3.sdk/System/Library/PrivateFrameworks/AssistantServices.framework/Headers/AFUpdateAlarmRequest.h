/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFUpdateAlarmRequest : AFSiriRequest

{
    NSArray *_alarms;
}

@property (copy, nonatomic) NSArray *alarms;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)alarm;
- (id)createResponse;

@end
