/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDAWDHealthKitGymKitWorkoutEvent, HKPersistentTimer;

@interface HDFitnessMachineAnalyticsCollector : NSObject

{
    HDAWDHealthKitGymKitWorkoutEvent *_gymKitWorkoutEvent;
    HKPersistentTimer *_authorizationTimer;
}

@property (retain, nonatomic) HDAWDHealthKitGymKitWorkoutEvent *gymKitWorkoutEvent;
@property (retain, nonatomic) HKPersistentTimer *authorizationTimer;

- (id)init;
- (void)_reset;
- (void)setFitnessMachineType:(unsigned long long)arg1 manufacturer:(id)arg2;
- (void)workoutEnded;
- (void)workoutFailedWithError:(id)arg1;
- (void)userIsAuthorized;
- (void)userBeganPairing;
- (void)_recordTimeToAuthorize;
- (long long)_failureReasonForError:(id)arg1;

@end
