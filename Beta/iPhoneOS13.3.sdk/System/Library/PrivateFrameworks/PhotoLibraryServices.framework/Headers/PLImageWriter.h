/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PAImageConversionServiceClient, PAVideoConversionServiceClient, PLDeferredPhotoFinalizer, PLIndicatorFileCoordinator, PLLibraryServicesManager, PLSimpleDCIMDirectory;

@protocol OS_dispatch_queue, OS_os_transaction;

@interface PLImageWriter : NSObject

{
    int _unfinishedJobsRequiringIndicatorCount;
    _Bool _databaseIsCorrupt;
    NSObject<OS_dispatch_queue> *_jobQueue;
    NSObject<OS_dispatch_queue> *_postIngestWorkQueue;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizerDelegate;
    struct os_unfair_recursive_lock_s _jobCountLock;
    struct os_unfair_lock_s _transactionLock;
    unsigned long long _transactionCounter;
    NSObject<OS_os_transaction> *_transaction;
    PLSimpleDCIMDirectory *_iTunesSyncedAssetsDCIMDirectory;
    PLIndicatorFileCoordinator *_indicatorFileCoordinator;
    PLLibraryServicesManager *_libraryServicesManager;
}

+ (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
+ (_Bool)_requiresAssetUUIDForJobType:(id)arg1;
+ (void)setAdjustmentsForNewVideo:(id)arg1 withAdjustmentsDictionary:(id)arg2 cameraAdjustments:(id)arg3 renderedContentPath:(id)arg4 renderedPosterFramePreviewPath:(id)arg5 finalAssetSize:(struct CGSize)arg6;
+ (id)spatialOverCaptureDestinationURLForPrimaryAssetURL:(id)arg1;
+ (id)deferredPhotoPreviewDestinationURLForPrimaryAssetURL:(id)arg1;
+ (_Bool)_hasPrimaryAssetAndAdjustmentsFilesWithType:(short)arg1 inIncomingFilenames:(id)arg2 forAssetUUID:(id)arg3;
+ (id)_assetUUIDFromIncomingFilename:(id)arg1;
+ (_Bool)setAdjustmentsForNewPhoto:(id)arg1 withEffectFilterName:(id)arg2 cameraAdjustmentData:(id)arg3 adjustmentDataPath:(id)arg4 filteredImagePath:(id)arg5 finalAssetSize:(struct CGSize)arg6 isSubstandardRender:(_Bool)arg7;
+ (id)_pathsByAssetUUIDFromIncomingCrashRecoveryPaths:(id)arg1;
+ (_Bool)_requiresIndicatorFileForJobType:(id)arg1;
+ (_Bool)isSpatialOverCaptureURL:(id)arg1;
+ (_Bool)isDeferredPhotoPreviewURL:(id)arg1;
+ (id)finalizedAssetURLForDeferredPhotoPreviewURL:(id)arg1 extension:(id)arg2;
+ (id)_assetAdjustmentsWithEffectFilterName:(id)arg1 exportProperties:(id)arg2;
+ (id)_assetAdjustmentsFromCompositionController:(id)arg1 exportProperties:(id)arg2;
+ (id)assetAdjustmentsFromCameraFilters:(id)arg1 portraitMetadata:(id)arg2 exportProperties:(id)arg3;
+ (id)_assetAdjustmentsFromCameraAdjustmentsFileAtPath:(id)arg1 exportProperties:(id)arg2;
+ (id)assetAdjustmentsFromCameraAdjustments:(id)arg1 exportProperties:(id)arg2;
+ (id)_assetAdjustmentsFromCameraAdjustments:(id)arg1 exportProperties:(id)arg2 assetType:(short)arg3;
+ (id)assetAdjustmentsFromCameraAdjustmentData:(id)arg1 exportProperties:(id)arg2;
+ (id)_assetAdjustmentsFromCameraAdjustmentData:(id)arg1 exportProperties:(id)arg2 assetType:(short)arg3;
+ (void)decorateThumbnailInRect:(struct CGRect)arg1 size:(struct CGSize)arg2 duration:(id)arg3 inContext:(struct CGContext *)arg4 format:(id)arg5;

- (id)init;
- (void)dealloc;
- (void)decorateThumbnail:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithLibraryServicesManager:(id)arg1;
- (_Bool)_isHighPriorityJob:(id)arg1;
- (_Bool)canEnqueueJob:(id)arg1;
- (id)indicatorFileCoordinator;
- (void)_incrementJobCount:(id)arg1;
- (void)_decrementJobCount:(id)arg1;
- (_Bool)enqueueJob:(id)arg1;
- (id)cameraAssetPathForNewAssetWithExtension:(id)arg1 assetUUID:(id)arg2;
- (id)pathForNewAssetWithDirectoryPath:(id)arg1 fileName:(id)arg2 extension:(id)arg3;
- (id)_pathForNewAssetWithPath:(id)arg1 withExtension:(id)arg2;
- (id)pathForNewAssetPathAtAlbumDirectoryPath:(id)arg1 assetType:(unsigned int)arg2 extension:(id)arg3;
- (id)pathForOriginalMyPhotoStreamAssetWithJob:(id)arg1;
- (void)_removeTransientKeys:(id)arg1;
- (id)_pathForFilteredPreviewWithBaseName:(id)arg1 imageData:(id)arg2 orImage:(struct NSObject *)arg3;
- (void)_linkDiagnosticFileWithSourcePath:(id)arg1 forPhotoDestinationURL:(id)arg2;
- (void)_processImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeInProgressExtendedAttributesForFileAtURL:(id)arg1;
- (void)_processBatchImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processAvalancheJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processAvalanchesValidationJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processImportImageJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processAutodeleteEmptyAlbumJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processDeletePhotoStreamDataJob:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_processDeletePhotoStreamAssetsWithUUIDs:(id)arg1 withReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_enablePhotoStreamJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processReenqueueAssetUUIDsToPhotoStreamJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processSavePhotoStreamImageToCameraRollJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_isHeifUTI:(struct __CFString *)arg1;
- (id)iTunesSyncedAssetsDCIMDirectory;
- (void)_resetSyncedAssetsDCIMDirectory;
- (void)processSyncSaveJob:(id)arg1 library:(id)arg2 albumMap:(id)arg3;
- (void)cleanupFilesInLibrary:(id)arg1 afteriTunesSyncBeforeDate:(id)arg2;
- (void)_processSyncClientSaveJobsJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleAvalancheCrashRecovery:(id)arg1;
- (void)_handleCameraMetadataCrashRecovery:(id)arg1;
- (id)_fetchPhotoAssetForUUID:(id)arg1 moc:(id)arg2;
- (void)_handlePhotoIrisCrashRecoveryForVideos:(id)arg1;
- (void)_handleCameraAdjustments:(id)arg1 fullsizeRenders:(id)arg2;
- (void)_handlePhotoIrisCrashRecoveryForPhotoIndicatorFiles:(id)arg1;
- (void)_photoIrisPairingDidSucceed:(_Bool)arg1 fileIndicatorPath:(id)arg2 photoAsset:(id)arg3 photoLibrary:(id)arg4;
- (void)_processCrashRecoveryJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processDaemonJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processXPCDaemonJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_decorateThumbnail:(id)arg1;
- (_Bool)_transferSpatialOverCaptureVideoFromIncomingPath:(id)arg1 forBaseDestinationPath:(id)arg2 shouldRemoveIncoming:(_Bool *)arg3;
- (_Bool)_transferVideoFromIncomingPath:(id)arg1 toDestinationPath:(id)arg2 shouldRemoveIncoming:(_Bool *)arg3 error:(id *)arg4;
- (void)_processVideoJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processVideoSaveJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processSyncedVideoSaveJob:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_processJob:(id)arg1;
- (_Bool)imageWriterJob:(id)arg1 hasValidPathsWithConnection:(id)arg2;
- (void)saveAssetJob:(id)arg1 imageSurface:(id)arg2 previewImageSurface:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)enqueueAutoDeleteEmptyAlbumJobWithAlbumID:(id)arg1;

@end
