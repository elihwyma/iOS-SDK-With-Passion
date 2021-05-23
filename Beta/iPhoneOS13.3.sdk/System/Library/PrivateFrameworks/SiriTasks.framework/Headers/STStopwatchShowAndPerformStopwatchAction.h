/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@interface STStopwatchShowAndPerformStopwatchAction : AFSiriRequest

{
    unsigned long long _action;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)action;
- (id)_initWithAction:(unsigned long long)arg1;

@end
