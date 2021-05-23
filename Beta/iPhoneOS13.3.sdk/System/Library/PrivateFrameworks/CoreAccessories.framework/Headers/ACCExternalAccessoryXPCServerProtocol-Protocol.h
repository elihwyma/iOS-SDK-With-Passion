/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <CoreAccessories/Swift-Protocol.h>

@protocol ACCExternalAccessoryXPCServerProtocol <Swift>

- (unsigned short)initConnectionToServer: /* Error: Ran out of types for this method. */;
- (unsigned short)registerClientInformation:onInstantiation:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)verifyAccessoryConnectionStatus:legacyConnectionID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)createExternalAccessorySessionForProtocol:accessoryUUID:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)openSocketFromAccessoryToApp: /* Error: Ran out of types for this method. */;
- (unsigned short)openSocketFromAppToAccessory: /* Error: Ran out of types for this method. */;
- (unsigned short)clientCloseExternalAccessorySession: /* Error: Ran out of types for this method. */;
- (unsigned short)processOutgoingExternalAccessoryData:forEASessionIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)requestAccessoryWiFiCredentials: /* Error: Ran out of types for this method. */;
- (unsigned short)sendDeviceIdentifierNotification:usbIdentifier:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)activateLocationForUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)sendNMEAFilterList:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)sendGPRMCDataStatus:ValueV:ValueX:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)stopLocationForUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)destinationInformation:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)vehicleInformationForUUID:withReply: /* Error: Ran out of types for this method. */;

@end
