/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CMWorkout, CMWorkoutManager, CMWorkoutMets, HDAssertionManager, NSString;

@protocol OS_dispatch_queue;

@interface HDCoreMotionWorkoutInterface : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CMWorkoutManager *_cmWorkoutManager;
    CMWorkoutMets *_cmWorkoutMets;
    HDAssertionManager *_assertionManager;
    CMWorkout *_currentCMWorkout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)averageMETsForWorkoutSessionUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)takeCMWorkoutAssertionForOwnerIdentifier:(id)arg1 sessionUUID:(id)arg2 workoutConfiguration:(id)arg3;
- (void)_queue_startWorkoutWithAssertion:(id)arg1;
- (id)_queue_coreMotionWorkoutMets;
- (unsigned long long)_queue_countActiveAssertionsForSessionUUID:(id)arg1;
- (void)_queue_stopWorkoutWithAssertion:(id)arg1;
- (id)_queue_cmWorkoutForConfiguration:(id)arg1 sessionUUID:(id)arg2;
- (id)_queue_coreMotionWorkoutManager;
- (void)unitTest_setCMWorkoutManager:(id)arg1;

@end
