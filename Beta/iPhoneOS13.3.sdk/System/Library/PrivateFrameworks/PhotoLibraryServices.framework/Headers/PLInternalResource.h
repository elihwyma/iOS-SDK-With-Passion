/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class CPLScopedIdentifier, NSData, NSDate, NSManagedObjectID, NSNumber, NSString, PLCloudMaster, PLCodec, PLFileSystemBookmark, PLFileSystemVolume, PLInternalResourceSidecarRepresentation, PLManagedAsset, PLUniformTypeIdentifier;

@protocol PLAssetID, PLCodecIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@interface PLInternalResource : PLManagedObject <Swift>

{
    PLInternalResourceSidecarRepresentation *_sidecarRepresentation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (retain, nonatomic, readonly) NSString *assetUuid;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) unsigned long long sourceCplType;
@property (nonatomic) _Bool isAvailable;
@property (nonatomic, readonly) _Bool isLocallyAvailable;
@property (nonatomic, readonly) unsigned long long fileSize;
@property (retain, nonatomic, readonly) NSString *filePath;
@property (retain, nonatomic, readonly) NSString *fingerprint;
@property (retain, nonatomic, readonly) CPLScopedIdentifier *scopedIdentifier;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long width;
@property (retain, nonatomic, readonly) NSString *utiString;
@property (nonatomic, readonly) unsigned int resourceRecipeID;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short prefetchCount;
@property (retain, nonatomic) NSDate *lastPrefetchDate;
@property (retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *prunedAt;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (retain, nonatomic) PLCodec *codec;
@property (nonatomic, readonly) long long orientedWidth;
@property (nonatomic, readonly) long long orientedHeight;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic, readonly) _Bool isDerivative;
@property (nonatomic) short localAvailability;
@property (nonatomic) short localAvailabilityTarget;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) short remoteAvailabilityTarget;
@property (nonatomic) short dataStoreClassID;
@property (nonatomic) long long dataStoreSubtype;
@property (copy, nonatomic) NSData *dataStoreKeyData;
@property (nonatomic) long long dataLength;
@property (nonatomic) long long fileID;
@property (retain, nonatomic) NSString *fingerprint;
@property (nonatomic) short trashedState;
@property (retain, nonatomic) NSDate *trashedDate;
@property (retain, nonatomic) NSString *cloudDeleteAssetUUIDWithResourceType;
@property (nonatomic) int qualitySortValue;
@property (retain, nonatomic) PLFileSystemBookmark *fileSystemBookmark;
@property (retain, nonatomic) PLFileSystemVolume *fileSystemVolume;
@property (retain, nonatomic) NSNumber *sidecarIndex;
@property (nonatomic) long long ptpTrashedState;
@property (nonatomic, readonly) PLInternalResourceSidecarRepresentation *sidecarRepresentation;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSDate *cloudMasterDateCreated;
@property (retain, nonatomic) NSDate *cloudLastOnDemandDownloadDate;
@property (retain, nonatomic) NSDate *cloudLastPrefetchDate;
@property (nonatomic) short cloudPrefetchCount;
@property (retain, nonatomic) NSDate *cloudPrunedAt;
@property (nonatomic) int cloudSourceType;
@property (retain, nonatomic) PLCloudMaster *transientCloudMaster;
@property (nonatomic, readonly) unsigned long long cplType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
@property (nonatomic, readonly) float scale;
@property (copy, nonatomic, readonly) id <PLAssetID> assetID;
@property (nonatomic, readonly) id <PLResourceDataStore> dataStore;
@property (nonatomic, readonly) id <PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic, readonly) id <PLCodecIdentity> codecID;
@property (nonatomic, readonly) long long estimatedDataLength;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (_Bool)supportsTrashedStateForResourceIdentity:(id)arg1;
+ (id)listOfSyncedProperties;
+ (id)insertResourceForAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)_obsoleteResourceRecipesWithCPLOff;
+ (_Bool)deleteObsoleteResourcesInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (_Bool)batchResetFileIDInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (unsigned long long)bytesForAllResourcesInLibrary:(id)arg1;
+ (id)originalCPLResourceTypesForMaster;
+ (id)originalCPLResourceTypesForAsset;
+ (id)originalCPLResourceTypes;
+ (unsigned long long)cplExpungedStateForTrashedState:(short)arg1;
+ (_Bool)_countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(_Bool)arg3 localCount:(unsigned long long *)arg4 unavailableCount:(unsigned long long *)arg5 error:(id *)arg6;
+ (id)insertResourceForMasterObjectID:(id)arg1 withExternalCPLResource:(id)arg2 inManagedObjectContext:(id)arg3;
+ (_Bool)isCPLJPEGThumbnailResource:(id)arg1;
+ (id)nonOriginalCPLResourceTypes;
+ (short)plTrashedStateForCPLExpungedState:(unsigned long long)arg1;
+ (void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(_Bool)arg2;
+ (void)resetPrefetchStateForResourcesWithVersion:(unsigned int)arg1 cplType:(unsigned long long)arg2 assetUuids:(id)arg3 inLibrary:(id)arg4;
+ (unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (_Bool)countOfMediumOriginalLocallyAvailableCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long *)arg2 unavailableCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (_Bool)countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long *)arg3 unavailableCount:(unsigned long long *)arg4 error:(id *)arg5;
+ (id)predicateForAllOriginalResourcesLocallyAvailable;
+ (id)predicateForAllFullSizeResourcesLocallyAvailable;
+ (id)prefetchResourcePredicateForCPLResourceType:(unsigned long long)arg1 isAssetResource:(_Bool)arg2 maxRetry:(unsigned long long)arg3 additionalResourcePredicates:(id)arg4;
+ (id)predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
+ (id)predicateForResourceCreatedAfterDate:(id)arg1;
+ (id)predicateForMaxFilesize:(long long)arg1;
+ (id)prunePredicateForCPLResourceTypes:(id)arg1;
+ (id)prunePredicateForAllCPLResourceTypes;
+ (id)predicateForOriginalsToDownload;
+ (id)predicateForAvailableResources;
+ (id)predicateForPurgeableOriginalResources;
+ (id)purgeablePushedPredicateForCPLResourceTypes:(id)arg1 urgency:(long long)arg2;
+ (id)resourceForManagedAsset:(id)arg1 sharedStreamsType:(unsigned int)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;

- (id)fileURL;
- (void)prepareForDeletion;
- (void)willSave;
- (id)payloadID;
- (id)payloadForChangedKeys:(id)arg1;
- (void)markAsNotLocallyAvailable;
- (void)markAsLocallyAvailableWithFilePath:(id)arg1;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (_Bool)isDefaultOrientation;
- (_Bool)isPlayableVideo;
- (id)_libraryID;
- (_Bool)_colorSpaceIsNativeForDisplay;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (_Bool)supportsTrashedState;
- (_Bool)isTrashedOrExpunged;
- (void)applyTrashedState:(short)arg1;
- (void)applyTrashedState:(short)arg1 trashedDate:(id)arg2;
- (_Bool)shouldPersistTrashedState;
- (void)persistTrashedStateToFilesystem;
- (id)validatedExternalResourceRepresentationUsingFileURL:(id)arg1;
- (_Bool)repairResourceValidationErrors:(id)arg1 managedObjectContext:(id)arg2;
- (void)setResourceIdentity:(id)arg1 managedObjectContext:(id)arg2;
- (void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2;
- (_Bool)isAdjustedResource;
- (_Bool)isAdjustedFullSizeRenderResource;
- (void)deleteResource;
- (id)photosCTLDescription;
- (id)photosCTLJSONDict;
- (id)cplResourceIncludeFile:(_Bool)arg1;
- (id)referenceMediaFileURL;
- (_Bool)canRepresentAsSidecar;
- (_Bool)isCPLResource;
- (_Bool)isCPLMasterResource;
- (_Bool)isCPLAssetResource;
- (id)cplFileURL;
- (void)updateResourceForMasterExternalCPLResource:(id)arg1 inManagedObjectContext:(id)arg2;
- (_Bool)isCPLJPEGThumbnail;
- (_Bool)isCPLOriginalResource;
- (id)expungeableResourceStateRepresentation;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResourceAtFilePath:(id)arg1;
- (void)setCloudAttributesWithExternalResource:(id)arg1;

@end
