/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSString, NSURL, PLFileSystemCapabilities;

@interface PLPhotoLibraryPathManagerCore : NSObject

{
    struct os_unfair_lock_s _folderCreationLock;
    unsigned int _photoDirectoriesExists;
    unsigned int _privateSubDirectoriesExists;
    unsigned int _privateCacheSubDirectoriesExists;
    unsigned int _externalDirectoriesExists;
    unsigned int _persistedAlbumDataDirectoryExists;
    NSFileManager *_fm;
    PLFileSystemCapabilities *_capabilities;
    NSURL *_libraryURL;
    NSString *_baseDirectory;
    NSString *_assetUUIDRecoveryMappingPath;
    NSString *_iTunesPhotosDirectory;
    NSString *_legacyModelInterestDatabasePath;
    NSString *_legacyMemoriesRelatedSnapshotDirectory;
}

@property (copy) NSURL *libraryURL;
@property (copy) NSString *baseDirectory;
@property (copy) NSString *assetUUIDRecoveryMappingPath;
@property (retain, nonatomic) NSString *iTunesPhotosDirectory;
@property (retain, nonatomic) NSString *legacyModelInterestDatabasePath;
@property (retain, nonatomic) NSString *legacyMemoriesRelatedSnapshotDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PLFileSystemCapabilities *capabilities;

+ (void)initialize;
+ (id)systemLibraryURL;
+ (_Bool)isSystemPhotoLibraryURL:(id)arg1;
+ (id)systemLibraryPathManager;
+ (_Bool)isSystemLibraryURLDefined;
+ (_Bool)setSystemLibraryURL:(id)arg1 options:(unsigned short)arg2 error:(id *)arg3;
+ (void)recordPrevSystemLibraryPath:(id)arg1;
+ (id)systemLibraryBaseDirectory;
+ (_Bool)setTimeMachineExclusionAttribute:(_Bool)arg1 url:(id)arg2 error:(id *)arg3;
+ (void)listenForSystemPhotoLibraryURLChanges;
+ (_Bool)isSupportedFileSystemAtURL:(id)arg1;
+ (void)_updateSystemLibraryURLWithOldValue:(id)arg1;
+ (id)_legacySystemLibraryBookmarkData;
+ (id)_legacySystemLibraryPath;
+ (id)_constructLegacySystemPhotoLibraryURLFromUnresolvableBookmark:(id)arg1;
+ (id)systemLibraryURLIfResolvable;
+ (id)basenameForSpatialOverCaptureFromOriginalBasename:(id)arg1;

- (id)init;
- (id)initWithBaseDirectory:(id)arg1;
- (id)photosDatabasePath;
- (id)photosAsideDatabasePath;
- (id)photoDirectoryWithType:(unsigned char)arg1;
- (id)photoDirectoryWithType:(unsigned char)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)syncInfoPath;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)knownDBPaths;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)photoDirectoryWithType:(unsigned char)arg1 additionalPathComponents:(id)arg2;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(_Bool)arg4 error:(id *)arg5;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(_Bool)arg3 error:(id *)arg4;
- (id)pathToAssetAlbumOrderStructure;
- (id)assetAbbreviatedMetadataDirectoryForDirectory:(id)arg1 type:(unsigned char)arg2;
- (void)setDataProtectionComplete:(_Bool)arg1;
- (_Bool)isDataProtectionComplete;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (void)photoDirectoryCreationMaskResetWithType:(unsigned char)arg1;
- (id)initWithLibraryURL:(id)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1;
- (id)pathToAssetsToAlbumsMapping;
- (id)temporaryDragAndDropDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (id)pathsForExternalWriters;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 createIfNeeded:(_Bool)arg2 error:(id *)arg3;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)pathsForClientAccess:(id)arg1;
- (id)pathsForPermissionCheck;
- (_Bool)createPathsForNewLibrariesWithError:(id *)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)baseDirectoryForBundleScope:(unsigned char)arg1;
- (id)readOnlyUrlWithIdentifier:(id)arg1;
- (void)setExtendedAttributesWithIdentifier:(id)arg1;
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1;
- (id)photosCPLDatabasePath;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 createIfNeeded:(_Bool)arg3 error:(id *)arg4;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(_Bool)arg4 error:(id *)arg5;
- (id)externalDirectoryWithSubType:(unsigned char)arg1;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3 createIfNeeded:(_Bool)arg4 error:(id *)arg5;
- (id)temporaryFileBackedDebugDirectoryCreateIfNeeded:(_Bool)arg1 error:(id *)arg2;
- (void)privateDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)privateCacheDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)externalDirectoryCreationMaskResetWithSubType:(unsigned char)arg1;
- (void)postInit;
- (_Bool)updateTimeMachineExclusionAttributeForExcludePath:(id)arg1 error:(id *)arg2;
- (_Bool)createDirectoryOnceWithPath:(id)arg1 mask:(unsigned char)arg2 type:(unsigned char)arg3 error:(id *)arg4;
- (id)_dataProtectionIndicatorFilePath;

@end
