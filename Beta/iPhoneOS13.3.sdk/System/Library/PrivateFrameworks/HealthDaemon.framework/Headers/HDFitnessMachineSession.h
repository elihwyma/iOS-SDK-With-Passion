/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDEnhancedFTMSData, HDFitnessMachineDataCharacteristicBase, HDFitnessMachineSessionRecoveryConfiguration, HDFitnessMachineStatus, HDHealthServiceOOBInfo, HKHealthService, NSArray, NSData, NSDate, NSString, NSUUID, _HKFitnessMachine;

@interface HDFitnessMachineSession : NSObject

{
    _Bool _waitingOnInitialMachineStatus;
    _Bool _waitingOnInitialMachineData;
    _Bool _dataTransferPermitted;
    _Bool _waitingOnMFA;
    _Bool _waitingOnBluetoothConnection;
    _Bool _waitingOnActivityType;
    NSUUID *_fitnessMachineSessionUUID;
    NSData *_nfcSessionIDData;
    unsigned long long _healthServiceSessionIdentifier;
    HKHealthService *_healthService;
    long long _serviceStatus;
    _HKFitnessMachine *_fitnessMachine;
    HDHealthServiceOOBInfo *_oobInfo;
    HDFitnessMachineStatus *_initialMachineStatus;
    HDFitnessMachineDataCharacteristicBase *_initialMachineData;
    HDEnhancedFTMSData *_initialEnhancedFTMSData;
    unsigned long long _connectionState;
    unsigned long long _machineState;
    NSDate *_machineStartDate;
    NSDate *_machineStateUpdateDate;
    NSDate *_machinePreferredUntilDate;
    NSArray *_oobDataArray;
}

@property (retain, nonatomic) NSArray *oobDataArray;
@property (nonatomic, readonly) NSUUID *fitnessMachineSessionUUID;
@property (nonatomic, readonly) NSString *nfcSessionID;
@property (nonatomic, readonly) NSData *nfcSessionIDData;
@property (nonatomic) unsigned long long healthServiceSessionIdentifier;
@property (retain, nonatomic) HKHealthService *healthService;
@property (nonatomic) long long serviceStatus;
@property (retain, nonatomic) _HKFitnessMachine *fitnessMachine;
@property (retain, nonatomic) HDHealthServiceOOBInfo *oobInfo;
@property (nonatomic, readonly) NSArray *nfcConnectionHandoverData;
@property (nonatomic) _Bool waitingOnInitialMachineStatus;
@property (retain, nonatomic) HDFitnessMachineStatus *initialMachineStatus;
@property (nonatomic) _Bool waitingOnInitialMachineData;
@property (retain, nonatomic) HDFitnessMachineDataCharacteristicBase *initialMachineData;
@property (retain, nonatomic) HDEnhancedFTMSData *initialEnhancedFTMSData;
@property (nonatomic) unsigned long long connectionState;
@property (nonatomic) unsigned long long machineState;
@property (retain, nonatomic) NSDate *machineStartDate;
@property (retain, nonatomic) NSDate *machineStateUpdateDate;
@property (retain, nonatomic) NSDate *machinePreferredUntilDate;
@property (nonatomic, readonly) _Bool dataTransferPermitted;
@property (nonatomic, readonly) _Bool waitingOnMFA;
@property (nonatomic, readonly) _Bool waitingOnBluetoothConnection;
@property (nonatomic, readonly) _Bool waitingOnActivityType;
@property (nonatomic, readonly) _Bool dataTransferRequirementsComplete;
@property (nonatomic, readonly) HDFitnessMachineSessionRecoveryConfiguration *recoveryConfiguration;

+ (id)serviceFromRecoveryConfiguration:(id)arg1;

- (id)init;
- (void)markMFAAuthenticated;
- (void)markBluetoothConnectionComplete;
- (id)initWithRecoveryConfiguration:(id)arg1;
- (void)markActivityTypeProvided;
- (void)markDataTransferPermitted;
- (id)_initWithFitnessMachineSessionUUID:(id)arg1;
- (id)initWithNFCSessionIDData:(id)arg1;
- (void)setFitnessMachineName:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3;
- (id)_oobDataArrayWithRandomValue:(id)arg1 confirmationValue:(id)arg2 sessionID:(id)arg3 btAddress:(id)arg4;

@end
