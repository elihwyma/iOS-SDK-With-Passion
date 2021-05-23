/*
 Image: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

@protocol ATXPCInterfaceProtocol

- (unsigned short)restoreFromDeviceWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestSyncForLibrary:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestSyncForPairedDeviceWithPriority:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)requestKeybagSyncToPairedDeviceWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)registerForStatusOfDataclasses:enabled:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelSyncWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)prioritizeAsset:forDataclass:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)prioritizeAsset:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)cancelAssetTransferForFailedAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)purgePartialAsset:forDataclass:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearSyncDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)lowBatteryNotificationWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)keepATCAlive:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getSyncStateWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)openDeviceMessageLinkWithPriority:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getAssetMetricswithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)getDataRestoreIsCompleteWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncChangesForDataClass:withPriority: /* Error: Ran out of types for this method. */;
- (unsigned short)initiateAssetDownloadSessionsWithCompletion: /* Error: Ran out of types for this method. */;

@end
