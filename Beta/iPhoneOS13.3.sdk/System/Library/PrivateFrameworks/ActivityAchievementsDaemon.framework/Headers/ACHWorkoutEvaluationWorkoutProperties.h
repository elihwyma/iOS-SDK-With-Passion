/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@interface ACHWorkoutEvaluationWorkoutProperties : NSObject

{
    _Bool _isFirstParty;
    unsigned long long _type;
    double _duration;
    double _kilocalories;
    double _kilometers;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double kilocalories;
@property (nonatomic, readonly) double kilometers;
@property (nonatomic, readonly) _Bool isFirstParty;

- (id)initWithWorkout:(id)arg1;

@end
