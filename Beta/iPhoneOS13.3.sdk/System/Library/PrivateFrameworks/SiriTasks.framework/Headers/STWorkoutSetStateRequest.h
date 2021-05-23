/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@interface STWorkoutSetStateRequest : AFSiriRequest

{
    long long _workoutState;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)createResponse;
- (long long)workoutState;
- (id)_initWithState:(long long)arg1;

@end
