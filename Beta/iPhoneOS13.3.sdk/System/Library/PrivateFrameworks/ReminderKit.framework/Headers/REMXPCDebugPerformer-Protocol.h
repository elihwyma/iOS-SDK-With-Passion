/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@protocol REMXPCDebugPerformer

- (unsigned short)createIsolatedStoreContainerWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)destroyIsolatedStoreContainerWithToken:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)nukeDatabase: /* Error: Ran out of types for this method. */;
- (unsigned short)persistenceStoreIDForAccountID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)daemonVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)fireDebugNotificationWithText:identifier:categoryIdentifier:reference:isRemove:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)purgeDeletedObjectsWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchGeofencesWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)addGeofenceWithLatitude:longitude:radius:uuid:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)removeGeofenceWithUUID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateCoreLocationEnterRegionWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)simulateCoreLocationExitRegionWithIdentifier:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)crashDaemonWithMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchContactsMatching:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)logStoresDirectoryContents;
- (unsigned short)dataAccessStatusReports: /* Error: Ran out of types for this method. */;
- (unsigned short)resetBabysitterWithRestrictedAccountID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)downloadContainerToOutputDir:completion: /* Error: Ran out of types for this method. */;

@end
