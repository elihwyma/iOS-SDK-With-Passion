/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <AssetsLibraryServices/PLPhotoLibraryPathManager.h>

@interface PLPhotoLibraryPathManager (conveniences)

- (_Bool)sqliteErrorIndicatorFileExists;
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;
- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
- (id)photoStreamsDataDirectory;
- (id)dataMigratorFinishedFilePath;
- (id)searchIndexManagerDatabaseFilePath;
- (id)zeroKeywordStoreFilePath;
- (id)searchMetadataStoreFilePath;
- (id)deletedMemoryUUIDsFilePath;
- (id)enableICloudPhotosFilePath;
- (id)disableICloudPhotosFilePath;
- (id)pauseICloudPhotosFilePath;
- (id)forceSoftResetSyncPath;
- (id)cplEnableMarkerFilePath;
- (id)cplDownloadFinishedMarkerFilePath;
- (id)directoryPathForInFlightComments:(_Bool)arg1;
- (id)cloudSharingArchiveDirectory;
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1;
- (id)pathToiPhotoLibraryMediaDir;
- (id)_sqliteErrorIndicatorFilePath;
- (id)_rebuildDateFormatter;
- (_Bool)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1;
- (id)_rebuidHistoryFilePath;
- (void)removeSqliteErrorIndicatorFile;
- (void)setSqliteErrorForReason:(long long)arg1 allowsExit:(_Bool)arg2;
- (id)recordRebuildReason;
- (id)searchIndexManagerDatabaseDirectory;
- (id)cplDataDirectoryCreateIfNeeded:(_Bool)arg1;

@end
