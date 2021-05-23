/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <AssetsLibraryServices/PLThumbnailManagerCore.h>

@class NSArray, NSLock, NSMutableArray, NSMutableSet, PLPhotoLibrary, PLThrottleTimer, PLThumbnailCascadingDownscaleContext;

@interface PLThumbnailManager : PLThumbnailManagerCore

{
    NSMutableSet *_previouslyRequestedThumbnailFixOIDs;
    NSMutableSet *_requestedThumbnailFixAssets;
    NSMutableArray *_alreadyFailedAssetObjectIDsForRebuild;
    NSLock *_fixLock;
    PLThumbnailCascadingDownscaleContext *_downscaleContext;
    PLThrottleTimer *_timer;
    PLPhotoLibrary *_throttleTimerCameraPreviewWellLibrary;
    _Bool _shouldRebuildThumbnails;
    _Bool _hasExceededThumbnailRebuildRequestLimit;
    _Bool _isRebuildingThumbnails;
    id _observerToken;
    NSArray *_slowPersistenceManagers;
}

@property (retain, nonatomic) id observerToken;
@property (retain, nonatomic) NSArray *slowPersistenceManagers;

+ (id)cameraPreviewWellImageQueue;
+ (id)_allowedForCameraPreviewWellPredicate;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1 library:(id)arg2;
+ (id)cameraPreviewWellAssetFetchRequest;
+ (id)cameraPreviewWellAssetUUIDFromPersistedFile;
+ (id)supportedThumbnailFormats;
+ (_Bool)cameraPreviewWellSupportedOnCurrentDevice;
+ (_Bool)assetIsAllowedForCameraPreviewWell:(id)arg1;
+ (_Bool)assetIsCameraPreviewWellAsset:(id)arg1;

- (void)dealloc;
- (id)_throttleTimerCameraPreviewWellLibrary;
- (id)initWithPhotoLibraryPathManager:(id)arg1 modelMigrator:(id)arg2;
- (id)imageTableForFormat:(unsigned short)arg1;
- (id)thumbnailRebuildIndicatorPath;
- (void)removeObsoleteMetadata;
- (_Bool)_thumbnailChangeContainsOnlyTableDeprecationsFromVersion:(int)arg1 toVersion:(int)arg2 fromFormat:(int)arg3 toFormat:(int)arg4;
- (int)_configurationThumbnailVersion;
- (unsigned short)_configurationThumbnailFormat;
- (_Bool)hasDeprecationsOnly;
- (_Bool)hasThumbnailVersionMismatch;
- (_Bool)isMissingThumbnailTables;
- (void)removeThumbnailTablesUnsupportedOnly:(_Bool)arg1;
- (void)_removeMasterThumbDirectories;
- (_Bool)resetThumbnailsWithModelMigrator:(id)arg1;
- (void)addRebuildThumbnailsRequest;
- (_Bool)hasRebuildThumbnailsRequest;
- (void)removeRebuildThumbnailsRequest:(const char *)arg1;
- (void)_recordRebuildThumbnailsAttempt;
- (void)_discardAlreadyFailedAssetObjectIDsForRebuild;
- (id)_missingThumbnailPredicate;
- (long long)_rebuildAssetThumbnailsWithLimit:(int)arg1 library:(id)arg2 error:(id *)arg3;
- (_Bool)hasMissingThumbnailsInLibrary:(id)arg1;
- (id)_rebuildThumbnailsQueue;
- (void)rebuildAllMissingThumbnailsInLibrary:(id)arg1;
- (_Bool)isRebuildingThumbnails;
- (_Bool)hasExceededRebuildThumbnailRequestLimit;
- (void)handleRebuildThumbnailRequestPersistentFailureInPhotoLibrary:(id)arg1;
- (id)_allPossibleThumbnailFormatIDs;
- (struct CGImage *)newImageForAsset:(id)arg1 format:(id)arg2;
- (id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1;
- (void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg1 withToken:(id)arg2;
- (void)discardCachedThumbnailDownscalerContexts;
- (_Bool)_performDownscaleIntoDatas:(id)arg1 image:(id)arg2 assetUUID:(id)arg3;
- (_Bool)_downscaleAndWriteTableAndFileBackedThumbnailsWithIdentifier:(id)arg1 thumbnailIndex:(unsigned long long)arg2 image:(id)arg3 assetUUID:(id)arg4;
- (void)setThumbnailsForAsset:(id)arg1 withImage:(id)arg2;
- (void)deleteThumbnailsWithIdentifier:(id)arg1 orIndex:(unsigned long long)arg2 uuid:(id)arg3;
- (id)dataForPhoto:(id)arg1 format:(unsigned short)arg2 allowPlaceholder:(_Bool)arg3 width:(int *)arg4 height:(int *)arg5 bytesPerRow:(int *)arg6 dataWidth:(int *)arg7 dataHeight:(int *)arg8 imageDataOffset:(int *)arg9;
- (void)preheatThumbnailDataWithFormat:(unsigned short)arg1 thumbnailIndexes:(id)arg2;
- (id)placeholderDataForFormat:(unsigned short)arg1 photoImageSize:(struct CGSize)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (id)_tableDescriptions;
- (long long)_diskFootprintOfTableThumbnailTables;
- (id)_cameraPreviewWellMetadataQueue;
- (_Bool)_cameraPreviewWellMetadataLoadAndUpdateIfNeeded:(id *)arg1 libraryURL:(id)arg2;
- (void)_updateCameraPreviewWellMetadataFromAsset:(id)arg1;
- (id)_fetchCameraPreviewWellMetadataInLibrary:(id)arg1;
- (_Bool)_compareAsset:(id)arg1 toMetadata:(id)arg2;
- (void)_refetchAndSaveCameraPreviewWellImage;
- (void)refetchAndSaveCameraPreviewWellImageIfNecessaryForAssetDidSave:(id)arg1;
- (void)_saveCameraPreviewWellImage:(struct CGImage *)arg1 assetUUID:(id)arg2;
- (id)thumbnailJPEGPathForPhoto:(id)arg1;
- (id)_dataForAsset:(id)arg1 format:(unsigned short)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8 imageDataFormat:(unsigned short *)arg9;
- (unsigned short)_supportedThumbnailFormatIDFromGeneralFormatID:(unsigned short)arg1;
- (id)thumbManagerForFormatID:(unsigned short)arg1;

@end
