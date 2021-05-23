/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class STTimer;

@interface STTimerShowTimerAndPerformAction : AFSiriRequest

{
    unsigned long long _action;
    STTimer *_timer;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)action;
- (id)timer;
- (id)_initWithTimer:(id)arg1 action:(unsigned long long)arg2;

@end
