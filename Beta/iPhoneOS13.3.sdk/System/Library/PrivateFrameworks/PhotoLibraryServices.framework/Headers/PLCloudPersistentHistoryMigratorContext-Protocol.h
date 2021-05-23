/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@protocol PLCloudPersistentHistoryMigratorContext

- (unsigned short)readMigrationMarker;
- (unsigned short)setMigrationMarker: /* Error: Ran out of types for this method. */;
- (unsigned short)setMigratedLocalVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)setLocalVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)readLocalVersion;
- (unsigned short)resetSyncDueToMigrationMarker;
- (unsigned short)saveTokenObject: /* Error: Ran out of types for this method. */;
- (unsigned short)updateTransferCountsWithInsertedPhotoCount:insertedVideoCount: /* Error: Ran out of types for this method. */;

@end
