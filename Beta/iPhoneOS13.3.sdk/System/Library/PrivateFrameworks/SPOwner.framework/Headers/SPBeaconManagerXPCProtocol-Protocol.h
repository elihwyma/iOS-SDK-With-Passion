/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <SPOwner/Swift-Protocol.h>

@protocol SPBeaconManagerXPCProtocol <Swift>

- (unsigned short)beaconForUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)allBeaconsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)unacceptedBeaconsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)notificationBeaconForSubscriptionId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)allBeaconsOfType:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)beaconingKeysForUUID:dateInterval:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeLocalAccountDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)primaryAccountModified;
- (unsigned short)setServiceState:completion: /* Error: Ran out of types for this method. */;

@end
