/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@protocol HDFitnessMachinePairingManagerDelegate

- (unsigned short)pairingManagerWillBeginPairing:fitnessMachineToken: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManager:failedPairingWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManager:didChangeNFCEnabledState: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManagerRequestsOOBData:error: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManagerUpdatedMachineInformation: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManager:updatedConnectionStateFromState:toState: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManagerReceivedActivityTypeAndPermission: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManager:discoveredHealthService:machineType: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManagerReadyToConnect: /* Error: Ran out of types for this method. */;
- (unsigned short)pairingManagerDidBeginPairing: /* Error: Ran out of types for this method. */;

@end
