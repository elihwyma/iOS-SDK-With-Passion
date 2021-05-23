/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@protocol CRCarKitService

- (unsigned short)saveVehicle:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)removeVehicle:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAllVehiclesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)hasVehiclesWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)handleDidConnectBluetoothAddress:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)handleDidDisconnectBluetoothAddress:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)isBluetoothInCarWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)saveWiFiCredentialsForAccessoryConnectionIdentifier:credentials:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)allowsConnectionsForWiFiUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)allowsConnectionsForCertificateSerial:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)isPairedWithCertificateSerial:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)isEnhancedIntegrationEnabledWithCertificateSerial:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCarPlayRestrictionChangedWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)isCarPlayAllowedWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)handleCarPlayDiagnosticsWithDeviceScreenshotURL:carScreenshotURL:attachmentURLs:activeBundleIdentifier:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)vehicleIdentifierForCertificateSerial:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchInstrumentClusterURLsWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchSessionInstrumentClusterURLsWithReply: /* Error: Ran out of types for this method. */;

@end
