/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HKHealthServicesClientInterface <Swift>

- (unsigned short)clientRemote_deliverBluetoothStatus:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_deliverDiscoveryHealthService:toClient:finished:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_deliverSessionHealthServiceStatus:toClient:finished:withError: /* Error: Ran out of types for this method. */;
- (unsigned short)clientRemote_deliverSessionCharacteristics:forService:toClient:withError: /* Error: Ran out of types for this method. */;

@end
