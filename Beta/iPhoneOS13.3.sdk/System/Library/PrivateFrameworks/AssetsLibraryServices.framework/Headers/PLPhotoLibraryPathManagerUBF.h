/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLPhotoLibraryPathManagerCore.h>

@class NSFileManager, NSString;

@interface PLPhotoLibraryPathManagerUBF : PLPhotoLibraryPathManagerCore

{
    NSString *_databaseDirectory;
    NSString *_searchDatabaseDirectory;
    NSString *_originalsDirectory;
    NSString *_privateDirectory;
    NSString *_privateCacheDirectory;
    NSString *_resourcesDirectory;
    NSString *_journalsDirectory;
    NSString *_rendersDirectory;
    NSString *_derivativesDirectory;
    NSString *_derivativesThumbsDirectory;
    NSString *_derivativesMasterThumbsDirectory;
    NSString *_resourcesCPLDataDirectory;
    NSString *_resourcesPhotoStreamsDataDirectory;
    NSString *_resourcesPhotoCloudSharingDirectory;
    NSString *_resourcesPhotoCloudSharingDataDirectory;
    NSString *_resourcesPhotoCloudSharingMetadataDirectory;
    NSString *_resourcesPhotoCloudSharingCacheDirectory;
    NSString *_resourcesProjectsDataDirectory;
    NSString *_resourcesProjectsLegacyDirectory;
    NSString *_resourcesMomentSharedDirectory;
    NSString *_externalDirectory;
    NSFileManager *_fm;
}

+ (id)systemLibraryPathManager;

- (id)photosDatabasePath;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)syncInfoPath;
- (void)obtainAccessAndWaitWithFileWithIdentifier:(id)arg1 mode:(unsigned char)arg2 toURLWithHandler:(CDUnknownBlockType)arg3;
- (id)initWithLibraryURL:(id)arg1;
- (id)pathToAssetsToAlbumsMapping;
- (id)pathsForExternalWriters;
- (id)_basePrivateDirectoryPath;
- (id)_privateDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)_externalDirectoryWithBundleIdentifier:(id)arg1 createIfNeeded:(_Bool)arg2;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)pathsForClientAccess:(id)arg1;
- (id)pathsForPermissionCheck;
- (_Bool)createPathsForNewLibrariesWithError:(id *)arg1;
- (id)corePathsWithError:(id *)arg1;
- (id)extendedPathsWithError:(id *)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)baseDirectoryForBundleScope:(unsigned char)arg1;
- (id)urlWithIdentifier:(id)arg1;
- (id)readOnlyUrlWithIdentifier:(id)arg1;
- (void)setExtendedAttributesWithIdentifier:(id)arg1;
- (void)setExtendedAttributesWithIdentifier:(id)arg1 andURL:(id)arg2;

@end
