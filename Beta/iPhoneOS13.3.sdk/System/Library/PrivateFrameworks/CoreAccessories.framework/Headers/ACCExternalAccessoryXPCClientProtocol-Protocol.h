/*
 Image: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
 */

#import <CoreAccessories/Swift-Protocol.h>

@protocol ACCExternalAccessoryXPCClientProtocol <Swift>

- (unsigned short)ExternalAccessoryArrived: /* Error: Ran out of types for this method. */;
- (unsigned short)ExternalAccessoryLeft: /* Error: Ran out of types for this method. */;
- (unsigned short)handleIncomingExternalAccessoryData:forEASessionIdentifier:withReply: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryCloseExternalAccessorySession: /* Error: Ran out of types for this method. */;
- (unsigned short)enqueueLocationNMEASentence:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)startDestinationSharingForUUID:options: /* Error: Ran out of types for this method. */;
- (unsigned short)stopDestinationSharingForUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)destinationSharingStatus:forDestinationUUID:supportedParams:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)vehicleStatusUpdate:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)updateAccessoryInfo:forUUID: /* Error: Ran out of types for this method. */;

@end
