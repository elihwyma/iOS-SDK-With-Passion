/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@protocol WBSCloudHistoryDataStore

- (unsigned short)saveCloudHistoryVisits:tombstones:longLivedOperationPersistenceCompletion:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithConfiguration:useManateeContainer: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteHistoryZoneWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchRecordsWithServerChangeTokenData:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)replayPersistedLongLivedSaveOperationWithID:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)initializePushNotifications: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchNumberOfDevicesInSyncCircleWithCompletion: /* Error: Ran out of types for this method. */;

@end
