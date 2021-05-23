/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/Swift-Protocol.h>

@protocol PLPhotoLibraryPathManagerDCIM <Swift>

- (unsigned short)photoMetadataDirectoryForMediaInMainDirectory: /* Error: Ran out of types for this method. */;
- (unsigned short)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (unsigned short)iTunesSyncedAssetsDirectory;
- (unsigned short)iTunesPhotosDirectory;
- (unsigned short)iTunesSyncedAssetSmallThumbnailsDirectory;
- (unsigned short)iTunesSyncedFaceDataDirectory;
- (unsigned short)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (unsigned short)persistedAlbumDataDirectoryCreateIfNeeded:error: /* Error: Ran out of types for this method. */;
- (unsigned short)iTunesPhotosSyncMetadataFilePath;
- (unsigned short)iTunesPhotosLastSyncMetadataFilePath;
- (unsigned short)legacyMemoriesRelatedSnapshotDirectory;
- (unsigned short)legacyModelInterestDatabasePath;
- (unsigned short)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (unsigned short)assetBaseFilenameForAdjustmentFilePath: /* Error: Ran out of types for this method. */;
- (unsigned short)pathsGroupedByAssetBasePathFromFilePaths: /* Error: Ran out of types for this method. */;

@end
