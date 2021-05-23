/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@protocol REMXPCSyncInterfacePerformer

- (unsigned short)syncDataAccessAccountsWithAccountIDs:bypassThrottler:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)restartCloudKitSyncWithReason:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)syncCloudKitWithReason:discretionary:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteApplicationDataFromCloudKitWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)migrateICloudCalDavToCloudKitForAccountID:disableCache:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)debugDownloadMigrationCacheWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchUserRecordWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)setMigrationStateToDidChooseToMigrate:didFinishMigration:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchServerRecordFor:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)observeCloudKitNetworkActivityChanges;

@end
