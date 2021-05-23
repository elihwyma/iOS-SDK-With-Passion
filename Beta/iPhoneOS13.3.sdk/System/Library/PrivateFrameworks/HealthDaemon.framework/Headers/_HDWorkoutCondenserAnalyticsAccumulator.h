/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface _HDWorkoutCondenserAnalyticsAccumulator : NSObject

{
    _Bool _hasProcessedWorkout;
    long long _workoutsToCondense;
    long long _workoutsToRecondense;
    long long _condensedWorkouts;
    long long _processedWorkouts;
    long long _createdSeries;
    long long _deletedSamples;
}

@property (nonatomic) long long workoutsToCondense;
@property (nonatomic) long long workoutsToRecondense;
@property (nonatomic) long long condensedWorkouts;
@property (nonatomic) long long processedWorkouts;
@property (nonatomic) long long createdSeries;
@property (nonatomic) long long deletedSamples;
@property (nonatomic) _Bool hasProcessedWorkout;

- (id)init;
- (id)description;

@end
