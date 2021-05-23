/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <TelephonyUtilities/Swift-Protocol.h>

@protocol TUCallCapabilitiesXPCServerActions <Swift>

- (unsigned short)setVoLTECallingEnabled:forSenderIdentityWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)setWiFiCallingEnabled:forSenderIdentityWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)setWiFiCallingRoamingEnabled:forSenderIdentityWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateAndRefreshWiFiCallingProvisioningURLForSenderIdentityWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)setThumperCallingEnabled:forSenderIdentityWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidateAndRefreshThumperCallingProvisioningURLForSenderIdentityWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)setThumperCallingAllowed:onSecondaryDeviceWithID:forSenderIdentityWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)setThumperCallingAllowedOnDefaultPairedDevice:forSenderIdentityWithUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)requestPinFromPrimaryDevice;
- (unsigned short)cancelPinRequestFromPrimaryDevice;
- (unsigned short)setRelayCallingEnabled: /* Error: Ran out of types for this method. */;
- (unsigned short)setRelayCallingEnabled:forDeviceWithID: /* Error: Ran out of types for this method. */;
- (unsigned short)endEmergencyCallbackMode;

@end
