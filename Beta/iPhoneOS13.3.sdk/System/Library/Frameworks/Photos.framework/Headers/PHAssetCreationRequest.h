/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetChangeRequest.h>

@class NSData, NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableDictionary, NSString, PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationMetadataCopyOptions, PHAssetCreationPhotoStreamPublishingRequest, PHAssetResourceBag, PHMomentShare, PHRelationshipChangeRequestHelper, PLManagedAsset;

@interface PHAssetCreationRequest : PHAssetChangeRequest

{
    NSMutableArray *_assetResources;
    PHAssetResourceBag *_assetResourceBag;
    NSMutableDictionary *_movedFiles;
    _Bool _duplicateAllowsPrivateMetadata;
    _Bool _shouldCreateScreenshot;
    CDUnknownBlockType _concurrentWorkBlock;
    PLManagedAsset *_asset;
    struct NSObject *_previewImage;
    struct NSObject *_thumbnailImage;
    NSData *_originalHash;
    _Bool _shouldPerformConcurrentWork;
    _Bool _duplicateLivePhotoAsStill;
    _Bool _duplicateAsOriginal;
    _Bool _duplicateSinglePhotoFromBurst;
    _Bool _duplicateSpatialOverCaptureResources;
    short _importedBy;
    unsigned short _duplicateAssetPhotoLibraryType;
    NSString *_importSessionID;
    PHAssetCreationPhotoStreamPublishingRequest *__photoStreamPublishingRequest;
    PHMomentShare *_momentShare;
    NSString *_momentShareUUID;
    PHRelationshipChangeRequestHelper *_momentShareHelper;
    NSString *_duplicateAssetIdentifier;
    PHAssetCreationAdjustmentBakeInOptions *_adjustmentBakeInOptions;
    PHAssetCreationMetadataCopyOptions *_metadataCopyOptions;
    CDUnknownBlockType _destinationAssetAvailabilityHandler;
    CDStruct_1b6d18a9 _duplicateStillSourceTime;
}

@property (retain, nonatomic, setter=_setPhotoStreamPublishingRequest:) PHAssetCreationPhotoStreamPublishingRequest *_photoStreamPublishingRequest;
@property (nonatomic, readonly) NSDictionary *_movedFiles;
@property (nonatomic, setter=_setDuplicateAllowsPrivateMetadata:) _Bool duplicateAllowsPrivateMetadata;
@property (nonatomic, getter=_shouldCreateScreenshot, setter=_setShouldCreateScreenshot:) _Bool shouldCreateScreenshot;
@property (retain, nonatomic) PHMomentShare *momentShare;
@property (retain, nonatomic) NSString *momentShareUUID;
@property (nonatomic) _Bool shouldPerformConcurrentWork;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *momentShareHelper;
@property (retain, nonatomic, setter=_setDuplicateAssetIdentifier:) NSString *duplicateAssetIdentifier;
@property (nonatomic, setter=_setDuplicateAssetPhotoLibraryType:) unsigned short duplicateAssetPhotoLibraryType;
@property (nonatomic, setter=_setDuplicateStillSourceTime:) CDStruct_1b6d18a9 duplicateStillSourceTime;
@property (nonatomic, setter=_setDuplicateLivePhotoAsStill:) _Bool duplicateLivePhotoAsStill;
@property (nonatomic, setter=_setDuplicateAsOriginal:) _Bool duplicateAsOriginal;
@property (nonatomic, setter=_setDuplicateSinglePhotoFromBurst:) _Bool duplicateSinglePhotoFromBurst;
@property (nonatomic, setter=_setDuplicateSpatialOverCaptureResources:) _Bool duplicateSpatialOverCaptureResources;
@property (copy, nonatomic, setter=_setAdjustmentBakeInOptions:) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions;
@property (copy, nonatomic, setter=_setMetadataCopyOptions:) PHAssetCreationMetadataCopyOptions *metadataCopyOptions;
@property (copy, nonatomic, setter=_setDestinationAssetAvailabilityHandler:) CDUnknownBlockType destinationAssetAvailabilityHandler;
@property (retain, nonatomic) NSString *importSessionID;
@property (nonatomic) short importedBy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, getter=isClientEntitled) _Bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly) _Bool isNewRequest;
@property (nonatomic, readonly) CDUnknownBlockType concurrentWorkBlock;

+ (id)_creationRequestForAssetUsingUUID:(id)arg1;
+ (id)creationRequestForAsset;
+ (id)creationRequestForAssetFromImageData:(id)arg1;
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;
+ (id)creationRequestForAssetFromScreenshotImage:(id)arg1;
+ (id)creationRequestForAssetFromImage:(id)arg1;
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;
+ (id)creationRequestForAssetFromAssetBundle:(id)arg1;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1 options:(id)arg2;
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1;
+ (_Bool)supportsAssetResourceTypes:(id)arg1;
+ (_Bool)supportsImportAssetResourceTypes:(id)arg1;

- (id)initWithHelper:(id)arg1;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (id)initForNewObject;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;
- (void)finalizeRequestWithBatchSuccess:(_Bool)arg1;
- (id)initForNewObjectWithUUID:(id)arg1;
- (void)_copyMetadataFromAsset:(id)arg1;
- (void)_copyUserSpecificMetadataFromAsset:(id)arg1;
- (void)_copyMediaAnalysisProperties:(id)arg1;
- (void)_didMoveFileFromURL:(id)arg1 toURL:(id)arg2;
- (_Bool)_restoreMovedFilesOnFailure;
- (void)_resetMovedFiles;
- (id)_secureMove:(_Bool)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 capabilities:(id)arg4 error:(id *)arg5;
- (id)_secureMove:(_Bool)arg1 assetResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (void)updateOriginalResourceOptionsWithResource:(id)arg1 sourceUrl:(id)arg2;
- (id)makeSubstitueRenderImageFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id *)arg4;
- (id)makeSubstitueRenderVideoFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id *)arg4;
- (_Bool)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 error:(id *)arg3;
- (_Bool)_ingestOriginalInPlaceSrcURL:(id)arg1 dstURL:(id)arg2 asset:(id)arg3 error:(id *)arg4;
- (id)_ingestOriginalFromSrcURL:(id)arg1 toDstURL:(id)arg2 useSecureMove:(_Bool)arg3 resource:(id)arg4 resourceType:(unsigned int)arg5 asset:(id)arg6 error:(id *)arg7;
- (_Bool)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 error:(id *)arg3;
- (_Bool)_createRAWSidecarForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_createSocResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_createXmpResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_createAudioResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)_createOriginalResourceForAsset:(id)arg1 fromValidatedResource:(id)arg2 resourceType:(unsigned int)arg3 photoLibrary:(id)arg4 destinationURL:(id)arg5 error:(id *)arg6;
- (id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg1;
- (short)_savedAssetTypeForAsset;
- (id)_managedAssetFromPrimaryResourceData:(id)arg1 withUUID:(id)arg2 photoLibrary:(id)arg3 getImageSource:(struct CGImageSource **)arg4 imageData:(id *)arg5;
- (_Bool)_accessWritableURLForUUID:(id)arg1 imageUTI:(id)arg2 originalFilename:(id)arg3 photoLibrary:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (_Bool)_writeDataToDisk:(id)arg1 imageUTIType:(id)arg2 exifProperties:(id)arg3 mainFileURL:(id)arg4 thumbnailData:(id)arg5;
- (id)_externalLivePhotoResourceForAsset:(id)arg1;
- (void)_pairLivePhotoResource:(id)arg1 withAssetInLibrary:(id)arg2 metadata:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setupConcurrentWorkIfNecessaryWithImageSource:(struct CGImageSource *)arg1 originalImageData:(id)arg2;
- (id)_sourceOptionsForCreateThumbnailWithAsset:(id)arg1 hasAdjustments:(_Bool)arg2;
- (id)createAssetFromValidatedResources:(id)arg1 withUUID:(id)arg2 inPhotoLibrary:(id)arg3 error:(id *)arg4;
- (_Bool)needsConcurrentWork;
- (void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3;
- (void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3;
- (void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4;
- (id)placeholderForCreatedAsset;
- (long long)_mediaTypeForCreatedAsset;
- (id)_duplicatedAssetResourcesFromAsset:(id)arg1 stillSourceTime:(CDStruct_1b6d18a9)arg2 flattenLivePhotoIntoStillPhoto:(_Bool)arg3 original:(_Bool)arg4 removeBurstIdentifier:(_Bool)arg5 error:(id *)arg6;
- (void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg1;
- (_Bool)_populateDuplicatingAssetCreationRequest:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (void)_prepareMomentShareHelperIfNeeded;
- (id)_mutableMomentShareObjectIDsAndUUIDs;
- (_Bool)isNew;

@end
