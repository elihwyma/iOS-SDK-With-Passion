/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@protocol NRXPCPairingDelegate

- (unsigned short)xpcSetMigrationConsented:forDeviceID:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcBeginDiscoveryWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcEndDiscoveryWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcCompanionOOBDiscoverAndPairWithName:withOutOfBandPairingKey:withOptions:operationHasBegun: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcCompanionPasscodePairWithDeviceID:withOptions:operationHasBegun: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGizmoOOBAdvertiseAndPairWithName:operationHasBegun: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGizmoPasscodeAdvertiseAndPairWithName:operationHasBegun: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcAbortPairingReason:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcEnterCompatibilityState:withDeviceID: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcNotifyActivationCompleted:withSuccess: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcNotifyPasscode:withDeviceID: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcUnpairWithDeviceID:withOptions:operationHasBegun: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcPairingShouldContinue;
- (unsigned short)xpcSuspendPairingClientCrashMonitoring: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcResumePairingClientCrashMonitoring: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcRetriggerUnpairInfoDialogWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcTriggerVersion4Workaround;
- (unsigned short)xpcSubmitAlbertPairingReport: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcPairingClientDidEnterPhase:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcSwitchActiveDeviceWithDeviceID:isMagicSwitch:operationHasCompleted: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcSwitchActiveDeviceWithDeviceID:withAssertionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcInvalidateSwitchAssertionWithIdentifier:block: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcActiveDeviceAssertions: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcBeginMigrationWithDeviceID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcBeginMigrationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcPairWithSimulator:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcUnpairWithSimulator:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcSwitchToSimulator:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGetMigrationPairingCharacteristicReadDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcPutMigrationChallengeCharacteristicWriteData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcSubmitServerRequestReportWithRequestType:duration:errorCode:block: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcPingActiveGizmoWithPriority:withMessageSize:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcStartWatchSetupPushWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcStopWatchSetupPushWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcScanForMigratableWatchesWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcBeginMigrationWithDeviceID:passcode:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGetLastMigrationRequestPhoneNameWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcKeepPhoneUnlockedInternalTestSPI: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcWaitForWatchPairingExtendedMetadataForAdvertisedName:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcCheckIfFlaggedForRecoveryWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcClearRecoveryFlagWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcFakePairedSyncIsCompleteWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGetLastSwitchIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGetMigrationCountForPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGetInitialSyncCompletedForPairingID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcIsPhoneReadyToMigrateDevice:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcIsAssertionActive:withCompletion: /* Error: Ran out of types for this method. */;

@end
