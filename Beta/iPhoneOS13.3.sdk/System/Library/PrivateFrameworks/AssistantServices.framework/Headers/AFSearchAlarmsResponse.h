/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <AssistantServices/AFSiriResponse.h>

@class NSArray;

@interface AFSearchAlarmsResponse : AFSiriResponse

{
    NSArray *_results;
}

@property (copy, nonatomic) NSArray *results;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
