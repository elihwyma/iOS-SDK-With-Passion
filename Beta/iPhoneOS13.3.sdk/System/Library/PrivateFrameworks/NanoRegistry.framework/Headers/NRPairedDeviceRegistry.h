/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <NanoRegistry/NRRegistryClient.h>

@class NSMutableArray, NSMutableDictionary, NSObject;

@protocol OS_dispatch_queue;

@interface NRPairedDeviceRegistry : NRRegistryClient

{
    _Bool _disconnected;
    unsigned short _lastCompatibilityState;
    NSMutableDictionary *_legacyDevices;
    NSObject<OS_dispatch_queue> *_legacyDevicesQueue;
    NSObject<OS_dispatch_queue> *_legacyDevicesQueueFirst;
    unsigned long long _lastStatus;
    NSMutableArray *_waitingForRegistryUpdateBlocks;
    unsigned long long _callCount;
}

@property (retain, nonatomic) NSMutableDictionary *legacyDevices;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *legacyDevicesQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *legacyDevicesQueueFirst;
@property (nonatomic) unsigned long long lastStatus;
@property (nonatomic) unsigned short lastCompatibilityState;
@property (retain, nonatomic) NSMutableArray *waitingForRegistryUpdateBlocks;
@property (nonatomic) unsigned long long callCount;
@property (nonatomic, readonly) unsigned long long status;

+ (id)sharedInstance;
+ (Class)proxyClass;
+ (CDUnknownBlockType)activePairedDeviceSelectorBlock;
+ (CDUnknownBlockType)activeDeviceSelectorBlock;
+ (CDUnknownBlockType)pairedDevicesSelectorBlock;
+ (_Bool)shouldBoostProcess;

- (id)init;
- (unsigned short)compatibilityState;
- (id)getPairedDevices;
- (id)getDevices;
- (id)getActivePairedDevice;
- (_Bool)isPaired;
- (id)migrationConsentRequestData;
- (id)deviceForPairingID:(id)arg1;
- (unsigned long long)lastSyncSwitchIndex;
- (unsigned long long)migrationCountForPairingID:(id)arg1;
- (unsigned int)switchIndex;
- (id)pairingID;
- (id)getAllDevices;
- (id)getDevicesMatching:(CDUnknownBlockType)arg1;
- (id)devicesFromMigrationConsentRequestData:(id)arg1;
- (long long)maxPairedDeviceCount;
- (long long)maxPairingCompatibilityVersion;
- (void)setMigrationConsented:(_Bool)arg1 forDevice:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)getAllDevicesWithArchivedDevicesMatching:(CDUnknownBlockType)arg1;
- (void)endDiscovery;
- (void)beginDiscovery;
- (id)initWithBoost:(_Bool)arg1;
- (id)pairingStorePath;
- (id)deviceForIDSDevice:(id)arg1;
- (id)deviceForNRDevice:(id)arg1 fromIDSDevices:(id)arg2;
- (_Bool)supportsPairedDevice;
- (void)getSwitchEventsFromIndex:(unsigned int)arg1 inlineCallback:(CDUnknownBlockType)arg2;
- (void)waitForPairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (id)waitForActivePairedDevice;
- (id)serverRequestReporterWithType:(id)arg1;
- (void)xpcDeviceID:(id)arg1 needsPasscode:(id)arg2;
- (void)xpcHasNewOOBKey:(id)arg1;
- (_Bool)supportsWatch;
- (long long)minPairingCompatibilityVersion;
- (long long)minQuickSwitchCompatibilityVersion;
- (long long)pairingCompatibilityVersion;
- (void)logCallFrequency;
- (id)_mostlyPairedDevices;
- (void)setActivePairedDevice:(id)arg1 isMagicSwitch:(_Bool)arg2 operationHasCompleted:(CDUnknownBlockType)arg3;
- (id)initWithBoost:(_Bool)arg1 disconnected:(_Bool)arg2;
- (void)_fireChangeNotificationsForDiff:(id)arg1 collection:(id)arg2 secureProperties:(id)arg3 index:(unsigned long long)arg4 notify:(_Bool)arg5;
- (void)_fireWaitingForUpdateBlocksWithCollection:(id)arg1;
- (unsigned long long)_getStatusWithCollection:(id)arg1;
- (unsigned short)_getCompatibilityStateWithCollection:(id)arg1;
- (id)_legacyDevicesWithCollection:(id)arg1 secureProperties:(id)arg2;
- (void)sendDevicesUpdatedNotification;
- (void)_postNotification:(id)arg1 forDeviceID:(id)arg2 withUserInfo:(id)arg3;
- (void)_fireCompatibilityStateChangedNotificationWithCollection:(id)arg1;
- (void)_fireStatusChangedNotificationWithCollection:(id)arg1;
- (void)_fireCompatibilityStateStatusNotificationsWithCollection:(id)arg1;
- (void)threadIsBlockedWaitingOn_nanoregistryd_syncGrabLegacyRegistryWithBlock:(CDUnknownBlockType)arg1;
- (void)getDevicesWithBlock:(CDUnknownBlockType)arg1;
- (void)unpairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)pairingStorePathPairingID:(CDUnknownBlockType)arg1;
- (void)abortPairingWithReason:(id)arg1;
- (id)deviceForBluetoothID:(id)arg1;
- (id)nonActiveDeviceForBluetoothID:(id)arg1;
- (id)deviceIDForIDSDevice:(id)arg1;
- (id)deviceForBTDeviceID:(id)arg1;
- (id)nonActiveDeviceForBTDeviceID:(id)arg1;
- (id)deviceIDForNRDevice:(id)arg1;
- (id)_deviceIDAtSwitchIndex:(unsigned int)arg1 date:(id *)arg2;
- (void)_getSwitchEventsFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inlineCallback:(CDUnknownBlockType)arg3;
- (void)setMigrationConsented:(_Bool)arg1 forDeviceID:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_getLocalDeviceCollection;
- (_Bool)pairedDeviceCountIsLessThanMaxPairedDevices;
- (_Bool)pairedDeviceSupportQuickSwitch;
- (void)setActivePairedDevice:(id)arg1 operationHasCompleted:(CDUnknownBlockType)arg2;
- (void)setActivePairedDevice:(id)arg1 withActiveDeviceAssertionHandler:(CDUnknownBlockType)arg2;
- (void)_invalidateActiveDeviceAssertionWithIdentifier:(id)arg1;
- (id)_getChangeHistory;
- (id)_getSecureProperties:(id)arg1;
- (id)_getClientInfo;
- (_Bool)isKeychainEnabled;
- (id)getAllDevicesWithArchivedDevices;
- (void)companionOOBDiscoverAndPairWithName:(id)arg1 withOutOfBandPairingKey:(id)arg2 withOptions:(id)arg3 operationHasBegun:(CDUnknownBlockType)arg4;
- (void)companionPasscodePairWithDevice:(id)arg1 withOptions:(id)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)gizmoOOBAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)gizmoPasscodeAdvertiseAndPairWithName:(id)arg1 operationHasBegun:(CDUnknownBlockType)arg2;
- (void)notifyActivationCompleted:(id)arg1 withSuccess:(_Bool)arg2;
- (void)notifyPasscode:(id)arg1 forDevice:(id)arg2;
- (void)notifyPairingShouldContinue;
- (void)unpairWithDevice:(id)arg1 shouldObliterate:(_Bool)arg2 operationHasBegun:(CDUnknownBlockType)arg3;
- (void)pairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)unpairWithSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)switchToSimulator:(id)arg1 withQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fakePairedSyncIsCompleteWithCompletion:(CDUnknownBlockType)arg1;
- (void)enterCompatibilityState:(unsigned short)arg1 forDevice:(id)arg2;
- (id)waitForActiveDevice;
- (void)abortPairing;
- (void)suspendPairingClientCrashMonitoring;
- (void)resumePairingClientCrashMonitoring;
- (id)blockAndQueryVersions;
- (void)userIsCheckingForUpdate;
- (void)retriggerUnpairInfoDialog;
- (void)overrideSignalStrengthLimit:(long long)arg1;
- (void)_submitServerRequestReportWithRequestType:(id)arg1 duration:(double)arg2 errorCode:(unsigned int)arg3;
- (void)_submitAlbertPairingReport;
- (id)nonActiveDeviceForIDSDevice:(id)arg1;
- (void)pairingClientDidEnterPhase:(id)arg1;
- (void)_getActiveDeviceAssertionsWithInlineBlock:(CDUnknownBlockType)arg1;
- (void)getMigrationPairingCharacteristicReadDataWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)putMigrationChallengeCharacteristicWriteData:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_pingActiveGizmoWithPriority:(long long)arg1 withMessageSize:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)startWatchSetupPush;
- (_Bool)isWatchSetupPushActive;
- (void)stopWatchSetupPush;
- (void)waitForWatchPairingExtendedMetadataForAdvertisedName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginMigrationWithDevice:(id)arg1 passcode:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)beginMigrationWithDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)lastMigrationRequestPhoneName;
- (void)keepPhoneUnlockedInternalTestSPI:(CDUnknownBlockType)arg1;
- (void)checkIfFlaggedForRecoveryWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearRecoveryFlagWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasCompletedInitialSyncForPairingID:(id)arg1;
- (_Bool)isAssertionActive:(id)arg1;
- (void)isPhoneReadyToMigrateDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
