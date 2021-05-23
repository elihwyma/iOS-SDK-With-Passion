/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/Swift-Protocol.h>

@class NSDate;

@protocol REActiveWorkoutPredictorProperties <Swift>

@property (nonatomic, readonly) _Bool currentlyHasActiveWorkout;
@property (nonatomic, readonly) float dailyAverageWorkouts;
@property (nonatomic, readonly) unsigned long long numberOfWorkoutsPerformedToday;
@property (nonatomic, readonly) NSDate *lastWorkoutDate;

@end
