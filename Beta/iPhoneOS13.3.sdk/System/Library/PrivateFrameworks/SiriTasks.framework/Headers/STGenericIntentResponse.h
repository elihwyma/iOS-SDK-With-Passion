/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriResponse.h>

@interface STGenericIntentResponse : AFSiriResponse

{
    long long _responseCode;
}

@property (nonatomic) long long responseCode;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
