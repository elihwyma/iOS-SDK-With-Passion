/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class STAlarmAction;

@interface STAlarmShowAlarmAndPerformActionRequest : AFSiriRequest

{
    STAlarmAction *_action;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)action;
- (id)_initWithAction:(id)arg1;

@end
