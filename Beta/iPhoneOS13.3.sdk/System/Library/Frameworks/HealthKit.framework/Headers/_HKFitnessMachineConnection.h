/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class HKDevice, HKHealthStore, NSLock, NSString, NSUUID, _HKFitnessMachine;

@protocol _HKFitnessMachineConnectionDelegate;

@interface _HKFitnessMachineConnection : NSObject

{
    HKHealthStore *_healthStore;
    NSUUID *_currentSessionUUID;
    _HKFitnessMachine *_fitnessMachine;
    HKDevice *_deviceForFinalWorkout;
    NSLock *_lock;
    NSUUID *_uuid;
    unsigned long long _machineState;
    unsigned long long _connectionState;
    id <_HKFitnessMachineConnectionDelegate> _delegate;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (copy, readonly) _HKFitnessMachine *fitnessMachine;
@property (nonatomic, readonly) unsigned long long machineState;
@property (nonatomic, readonly) unsigned long long connectionState;
@property (weak, nonatomic) id <_HKFitnessMachineConnectionDelegate> delegate;
@property (copy, readonly) HKDevice *deviceForFinalWorkout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)end;
- (id)_initWithHealthStore:(id)arg1;
- (void)_connectionInterruptedWithError:(id)arg1;
- (void)_simulateTapWithFitnessMachineType:(unsigned long long)arg1;
- (void)_simulateAccept;
- (void)_simulateDisconnect;
- (void)_registerClient;
- (void)clientRemote_deliverFailedWithError:(id)arg1;
- (void)_clientQueue_deliverFailedWithError:(id)arg1;
- (void)clientRemote_deliverDetectedNFC:(id)arg1;
- (void)clientRemote_deliverMachineInformationUpdated:(id)arg1;
- (void)clientRemote_deliverMachineChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 date:(id)arg4;
- (void)clientRemote_deliverConnectionChangedToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 fitnessMachineSessionUUID:(id)arg3 error:(id)arg4;
- (void)markClientReady;
- (void)endWithFitnessMachineSessionUUID:(id)arg1;
- (id)currentSessionConfiguration;
- (void)permitDataTransferWithFitnessMachineSessionUUID:(id)arg1;

@end
