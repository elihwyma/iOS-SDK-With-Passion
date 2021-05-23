/*
 Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

#import <AssistantServices/AFSiriRequest.h>

@class HKQuantity;

@interface STStartWorkoutRequest : AFSiriRequest

{
    long long _activityType;
    long long _locationType;
    long long _goalType;
    long long _userMode;
    HKQuantity *_goal;
    _Bool _isOpenGoal;
    _Bool _skipActivitySetup;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)activityType;
- (long long)userMode;
- (long long)locationType;
- (id)createResponse;
- (long long)goalType;
- (id)workoutGoal;
- (_Bool)isOpenGoal;
- (_Bool)skipActivitySetup;
- (id)_initWithType:(long long)arg1 location:(long long)arg2 goal:(id)arg3 goalType:(long long)arg4 userMode:(long long)arg5 isOpenGoal:(_Bool)arg6 skipActivitySetup:(_Bool)arg7;

@end
