/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSString, PLImportFileManager;

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore

{
    unsigned int _persistedAlbumDataDirectoryExists;
    NSString *_photoDataDirectory;
    NSString *_photoDataCachesDirectory;
    NSString *_photoDataSearchDirectory;
    NSString *_dcimDirectory;
    NSString *_cplAssetsDirectory;
    NSString *_cmmAssetsDirectory;
    NSString *_journalsDirectory;
    NSString *_projectsDirectory;
    NSString *_changeStoreDatabasePath;
    NSString *_thumbnailsDirectory;
    NSString *_thumbnailsV2Directory;
    _Bool _assetAlbumOrderStructurePathCreated;
    PLImportFileManager *_importFileManager;
}

@property (retain, nonatomic) PLImportFileManager *importFileManager;

+ (id)systemLibraryPathManager;

- (id)photosDatabasePath;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)syncInfoPath;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)pathToAssetAlbumOrderStructure;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)initWithLibraryURL:(id)arg1;
- (id)pathToAssetsToAlbumsMapping;
- (id)pathsForExternalWriters;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)pathsForClientAccess:(id)arg1;
- (id)pathsForPermissionCheck;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)getImportFileManager;
- (id)createPathsForNewLibraries;
- (id)photoMetadataDirectory;
- (id)photoMutationsDirectory;
- (id)iTunesPhotosSyncDirectory;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1;

@end
