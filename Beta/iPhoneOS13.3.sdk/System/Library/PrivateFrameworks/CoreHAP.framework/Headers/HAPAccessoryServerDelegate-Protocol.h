/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/Swift-Protocol.h>

@protocol HAPAccessoryServerDelegate <Swift>

- (unsigned short)accessoryServer:didStopPairingWithError: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServerNeedsOwnershipToken: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:isBlockedWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:requestUserPermission:accessoryInfo:error: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:didDiscoverAccessories:transaction:error: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:validateCert:model: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:didUpdateValuesForCharacteristics:stateNumber:broadcast: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:promptUserForPasswordWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:didReceiveBadPasswordThrottleAttemptsWithDelay: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:didUpdateHasPairings: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServerDidUpdateStateNumber: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:didUpdateCategory: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:didUpdateName: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:validateUUID:token:model: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:authenticateUUID:token: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:confirmUUID:token: /* Error: Ran out of types for this method. */;
- (unsigned short)accessoryServer:didFinishAuth: /* Error: Ran out of types for this method. */;

@end
