/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDWorkoutEventCollector.h>

@class CMWorkoutManager, NSString;

@interface HDAutoPauseWorkoutEventCollector : HDWorkoutEventCollector

{
    CMWorkoutManager *_cmWorkoutManager;
    int _catFlexingNotifyToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)stop;
- (void)workoutManager:(id)arg1 didFailWorkout:(id)arg2 withError:(id)arg3;
- (void)workoutManager:(id)arg1 didStartWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 didStopWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 willPauseWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 willResumeWorkout:(id)arg2 atDate:(id)arg3;
- (void)workoutManager:(id)arg1 suggestedStopWorkout:(id)arg2 atDate:(id)arg3;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (void)_listenForCatFlexingFakingNotifications;
- (void)_unregisterForCatFlexingNotifications;
- (void)_deliverWorkoutEvent:(long long)arg1 sessionId:(id)arg2 eventDate:(id)arg3;
- (void)_triggerCatFlexingEvent;
- (void)_triggerCatFlexingEventWithTimeout:(double)arg1;

@end
