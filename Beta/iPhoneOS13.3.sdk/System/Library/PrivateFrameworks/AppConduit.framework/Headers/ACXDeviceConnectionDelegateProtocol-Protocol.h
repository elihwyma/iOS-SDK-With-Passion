/*
 Image: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
 */

#import <AppConduit/Swift-Protocol.h>

@protocol ACXDeviceConnectionDelegateProtocol <Swift>

- (unsigned short)updatedInstallStateForApplicationsWithInfo: /* Error: Ran out of types for this method. */;
- (unsigned short)updateInstallProgressForApplication:progress:phase: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationsInstalled:onDeviceWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationsUpdated:onDeviceWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationsUninstalled:onDeviceWithPairingID: /* Error: Ran out of types for this method. */;
- (unsigned short)applicationDatabaseResyncedForDeviceWithPairingID: /* Error: Ran out of types for this method. */;

@end
