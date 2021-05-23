/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@protocol NRXPCRegistryDelegate

- (unsigned short)xpcGetDeviceCollectionWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGetDiffSinceTokenValue:getSecureProperties:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcRetrieveSecureProperties:block: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcGetChangeHistoryWithBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcSwitchIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcDeviceIDAtSwitchIndex:withBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcClientInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcApplyDiff:withSecureProperties:block: /* Error: Ran out of types for this method. */;
- (unsigned short)xpcSetMigrationConsented:forDeviceID:withBlock: /* Error: Ran out of types for this method. */;

@end
