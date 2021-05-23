/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, NSString, NSUUID;

@protocol _HKFitnessMachineConnectionInitiatorDelegate;

@interface _HKFitnessMachineConnectionInitiator : NSObject

{
    NSUUID *_UUID;
    id <_HKFitnessMachineConnectionInitiatorDelegate> _delegate;
    HKHealthStore *_healthStore;
}

@property (weak, nonatomic) HKHealthStore *healthStore;
@property (nonatomic, readonly) NSUUID *UUID;
@property (weak, nonatomic) id <_HKFitnessMachineConnectionInitiatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_initWithHealthStore:(id)arg1;
- (void)_connectionInterruptedWithError:(id)arg1;
- (void)registerClient;
- (void)peformServerOperation:(CDUnknownBlockType)arg1;
- (void)clientRemote_updatedConnectionState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_updatedFitnessMachine:(id)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_updatedFitnessMachineState:(unsigned long long)arg1 fitnessMachineSessionUUID:(id)arg2;
- (void)clientRemote_workoutAppReady;
- (void)clientRemote_encounteredError:(id)arg1;
- (void)permitConnectionForFitnessMachineSessionUUID:(id)arg1 activityType:(unsigned long long)arg2;
- (void)forbidConnectionForFitnessMachineSessionUUID:(id)arg1;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)_simulateAccept;
- (void)_simulateDisconnect;

@end
