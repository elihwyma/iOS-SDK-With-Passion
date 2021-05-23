/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/Swift-Protocol.h>

@protocol HDHealthServicesServerInterface <Swift>

- (unsigned short)remote_beginBluetoothStatusUpdates:client: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_endBluetoothStatusUpdates;
- (unsigned short)remote_fetchSupportedServiceIDsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_startHealthServiceDiscovery:client:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_endHealthServiceDiscovery: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_startHealthServiceSession:client:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_endHealthServiceSession: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getHealthPeripheralsWithFilter:handler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addPairingForHealthService:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removePairingForHealthService:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getSupportedPropertyNamesWithHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getHealthServiceProperty:forSession:withHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_performHealthServiceOperation:onSession:withParameters:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addPeripheral:name:forServices:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removePeripheral:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getEnabledStatusForPeripheral:withCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setEnabledStatus:forPeripheral:withCompletion: /* Error: Ran out of types for this method. */;

@end
