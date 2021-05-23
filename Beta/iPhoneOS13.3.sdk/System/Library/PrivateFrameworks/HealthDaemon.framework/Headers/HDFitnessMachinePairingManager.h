/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol HDFitnessMachinePairingManagerDelegate;

@interface HDFitnessMachinePairingManager : NSObject

{
    id <HDFitnessMachinePairingManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <HDFitnessMachinePairingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (id)initWithProfile:(id)arg1;
- (void)setActivityType:(unsigned long long)arg1;
- (void)workoutAppIsReady;
- (void)handleBLEConnectionCompletedSuccessfully:(_Bool)arg1;
- (void)updatedFitnessMachine;
- (void)updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)updatedConnectionStateWithError:(id)arg1;
- (void)deliverError:(id)arg1;
- (void)registerConnectionInitiatorClient:(id)arg1 withConnectionUUID:(id)arg2;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2 withConnectionUUID:(id)arg3;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;
- (void)simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)simulateAccept;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 withConnectionUUID:(id)arg2;

@end
