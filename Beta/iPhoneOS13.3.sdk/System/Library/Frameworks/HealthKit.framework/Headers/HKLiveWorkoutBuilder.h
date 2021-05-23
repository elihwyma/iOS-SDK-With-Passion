/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKWorkoutBuilder.h>

@class HKLiveWorkoutDataSource, HKWorkoutSession, NSArray;

@protocol HKLiveWorkoutBuilderDelegate;

@interface HKLiveWorkoutBuilder : HKWorkoutBuilder

{
    HKLiveWorkoutDataSource *_dataSource;
    NSArray *_additionalDataSources;
    id <HKLiveWorkoutBuilderDelegate> _delegate;
    HKWorkoutSession *_workoutSession;
}

@property (retain) NSArray *additionalDataSources;
@property (weak) id <HKLiveWorkoutBuilderDelegate> delegate;
@property (weak, readonly) HKWorkoutSession *workoutSession;
@property _Bool shouldCollectWorkoutEvents;
@property (retain) HKLiveWorkoutDataSource *dataSource;
@property (readonly) double elapsedTime;

- (id)_privateDelegate;
- (void)connectionInterrupted;
- (id)initWithHealthStore:(id)arg1 builderConfiguration:(id)arg2 builderIdentifier:(id)arg3;
- (void)_resourceQueue_updateElapsedTimeCache;
- (void)_resourceQueue_updateEvents:(id)arg1;
- (void)clientRemote_didUpdateStatistics:(id)arg1;
- (void)clientRemote_didUpdateMetadata:(id)arg1;
- (void)stateMachine:(id)arg1 didEnterState:(id)arg2 date:(id)arg3 error:(id)arg4;
- (id)initWithHealthStore:(id)arg1 session:(id)arg2 builderConfiguration:(id)arg3 builderIdentifier:(id)arg4;

@end
