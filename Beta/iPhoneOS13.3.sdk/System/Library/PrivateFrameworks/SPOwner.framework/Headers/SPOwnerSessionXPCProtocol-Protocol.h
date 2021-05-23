/*
 Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

#import <SPOwner/Swift-Protocol.h>

@protocol SPOwnerSessionXPCProtocol <Swift>

- (unsigned short)beaconForUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)forceDistributeKeysWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)allBeaconsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)unacceptedBeaconsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeBeacon:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)latestLocationsForIdentifiers:fetchLimit:sources:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)rawSearchResultsForIdentifier:dateInterval:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)executeCommand:completion: /* Error: Ran out of types for this method. */;

@end
