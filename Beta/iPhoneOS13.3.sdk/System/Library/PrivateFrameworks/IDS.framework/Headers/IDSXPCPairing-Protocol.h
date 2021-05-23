/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@protocol IDSXPCPairing

- (unsigned short)addPairedDevice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addPairedDeviceWithInfo:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)connectPairedDeviceWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setupCompletedForPairedDeviceWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPairingDevicesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPairedDevicesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getPairingRecordsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)updatePairedDeviceWithID:supportIPsec:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deletePairedDeviceWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unpairStartForDeviceWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)stopLocalPairingForDeviceWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)unpairDeviceWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)forgetDeviceWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)switchActivePairedDeviceWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)disconnectActivePairedDevice: /* Error: Ran out of types for this method. */;
- (unsigned short)redeliverMessagesForDevice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setAllowedTrafficClassifiersForDevice:classifiers:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dropAllMessagesWithoutAnyAllowedClassifierForDevice:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)pairedDevicesInfo: /* Error: Ran out of types for this method. */;

@end
