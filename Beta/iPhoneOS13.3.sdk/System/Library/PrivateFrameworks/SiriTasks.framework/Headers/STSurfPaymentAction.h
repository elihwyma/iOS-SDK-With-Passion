/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class INInteraction;

@interface STSurfPaymentAction : AFSiriRequest

{
    INInteraction *_interaction;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)action;
- (id)interaction;
- (id)_initWithInteraction:(id)arg1;

@end
