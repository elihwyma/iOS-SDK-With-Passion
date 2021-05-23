/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDAssertion.h>

@protocol HDWorkoutSessionStateController;

@interface _HDHeartRateRecoveryAssertion : HDAssertion

{
    id <HDWorkoutSessionStateController> _sessionStateController;
}

@property (weak, nonatomic, readonly) id <HDWorkoutSessionStateController> sessionStateController;

- (id)initWithOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2;

@end
