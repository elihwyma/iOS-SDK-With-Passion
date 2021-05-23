/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSFileManager, NSMutableSet, NSSet, NSString, PFMediaCapabilities, PLPTPdFormatConversionManager, PLPhotoLibrary;

@protocol OS_dispatch_queue, PhotoLibraryPTPDelegate;

@interface PLPTPdAssetManager : NSObject

{
    NSObject<PhotoLibraryPTPDelegate> *_delegate;
    PLPTPdFormatConversionManager *_formatConversionManager;
    NSString *_firstDCIMFolderServiced;
    NSSet *_availableAssetIDs;
    PLPhotoLibrary *_photoLibrary;
    int _libraryStatus;
    NSMutableSet *_ptpDeletedAssets;
    NSObject<OS_dispatch_queue> *availableAssetsQueue;
    NSFileManager *fileManager;
}

@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (retain) PFMediaCapabilities *peerMediaCapabilities;
@property (weak, nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)managedObjectContext;
- (void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssetIDs:(id)arg2 deletedAssetIDs:(id)arg3 changedAssetIDs:(id)arg4 adjustedAssetIDs:(id)arg5;
- (void)_registerForFirstUnlockNotification;
- (void)handlePhotoLibraryAvailableNotification;
- (id)albumHandles;
- (id)infoForAlbum:(struct NSObject *)arg1;
- (id)associationsInAlbum:(struct NSObject *)arg1;
- (id)assetsInAssociation:(struct NSObject *)arg1;
- (id)infoForAsset:(struct NSObject *)arg1;
- (void)deleteAsset:(id)arg1;
- (void)ptpEnumerateAllAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (id)ptpThumbnailForAssetHandle:(id)arg1 size:(struct CGSize)arg2 compressionQuality:(float)arg3;
- (id)ptpAssetReaderForAssetHandle:(id)arg1;
- (id)adjustmentFilePathForAsset:(id)arg1 requiresTemporaryFileCleanup:(_Bool *)arg2;
- (id)assetReaderForFormatConvertedPTPAsset:(id)arg1 ofManagedAsset:(id)arg2 path:(id)arg3;
- (id)ptpImagePropertiesForAssetHandle:(id)arg1;
- (_Bool)ptpCanDeleteFiles;
- (_Bool)ptpDeletePhotoForAssetHandle:(id)arg1;
- (void)_expungeAsset:(id)arg1 withReason:(id)arg2;
- (void)ptpEnumerateAssetsWithPrimaryKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_ptpAssetsForAssetWithID:(id)arg1;
- (_Bool)libraryIsAvailable;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
- (void)enumeratePTPInformationForFilesInDirectory:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)ptpExifDataForAssetHandle:(id)arg1;
- (id)ptpExifDataForPhotoWithKey:(id)arg1;
- (id)_ptpOriginalExifDataForAssetWithID:(id)arg1;
- (id)ptpThumbnailForPhotoWithKey:(id)arg1;
- (struct CGSize)_validateSize:(struct CGSize)arg1;
- (id)ptpThumbnailForPhotoWithKey:(id)arg1 size:(struct CGSize)arg2 compressionQuality:(float)arg3;
- (struct CGSize)masterThumbSize;
- (_Bool)requestedSize:(struct CGSize)arg1 fitsInSourceSize:(struct CGSize)arg2;
- (id)_ptpThumbnailForOriginalWithAssetID:(id)arg1 size:(struct CGSize)arg2 compressionQuality:(float)arg3;
- (id)_ptpThumbnailForFullSizeRenderWithAssetID:(id)arg1 size:(struct CGSize)arg2 compressionQuality:(float)arg3;
- (id)_ptpThumbnailForSpatialOverCaptureImageWithAssetID:(id)arg1 size:(struct CGSize)arg2 compressionQuality:(float)arg3;
- (id)_ptpThumbnailForSpatialOverCaptureVideoWithAssetID:(id)arg1 size:(struct CGSize)arg2 compressionQuality:(float)arg3;
- (id)_ptpThumbnailForOriginalVideoWithAssetID:(id)arg1 size:(struct CGSize)arg2 compressionQuality:(float)arg3;
- (id)_ptpThumbnailForPenultimateImageWithAssetID:(id)arg1 size:(struct CGSize)arg2 compressionQuality:(float)arg3;
- (id)dataForThumbnailFileAtPath:(id)arg1 rotatedToOrientation:(long long)arg2 size:(struct CGSize)arg3 compressionQuality:(float)arg4;
- (id)_generateThumbnailForAsset:(id)arg1 fromOriginalImagePath:(id)arg2 size:(struct CGSize)arg3 compressionQuality:(float)arg4;
- (id)dataByJPEGCompressingCGImage:(struct CGImage *)arg1 toLengthLimit:(long long)arg2 initialCompressionQuality:(float)arg3 size:(struct CGSize)arg4 orientation:(long long)arg5;
- (_Bool)ptpDeletePhotoWithKey:(id)arg1 andExtension:(id)arg2;
- (_Bool)_ptpDeletePhotoWithAssetID:(id)arg1 andExtension:(id)arg2;
- (void)setPtpDelegate:(id)arg1;
- (id)_ptpInformationForPhotoWithObjectID:(id)arg1;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (id)_allAssetObjectIDs;
- (id)_ptpInformationForAllAssets;
- (id)_ptpAssetEnumeratorAllAssets;
- (void)beginSignpostForThumbnailGenerationForAsset:(id)arg1 inputResourceTypeLabel:(id)arg2;
- (void)endSignpostForThumbnailGenerationForAsset:(id)arg1;
- (void)_performBlockAndWait:(CDUnknownBlockType)arg1;
- (id)_performResultBlockAndWait:(CDUnknownBlockType)arg1;
- (void)_performTransactionAndWait:(CDUnknownBlockType)arg1;
- (id)_performResultTransactionAndWait:(CDUnknownBlockType)arg1;
- (id)fetchObjectIDsForAssetsExposedToPTPFromObjectIDs:(id)arg1;

@end
