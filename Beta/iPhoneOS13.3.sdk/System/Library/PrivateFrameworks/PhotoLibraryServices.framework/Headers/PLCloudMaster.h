/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSDate, NSSet, NSString, PLCloudMasterMediaMetadata, PLMomentShare;

@interface PLCloudMaster : PLManagedObject <Swift>

@property (retain, nonatomic) NSString *cloudMasterGUID;
@property (nonatomic) short cloudLocalState;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) short fullSizeJPEGSource;
@property (retain, nonatomic) NSDate *importDate;
@property (retain, nonatomic) NSString *uniformTypeIdentifier;
@property (retain, nonatomic) NSString *originalFilename;
@property (nonatomic) short originalOrientation;
@property (retain, nonatomic) NSString *importSessionID;
@property (copy, nonatomic) NSString *originatingAssetIdentifier;
@property (nonatomic) short placeholderState;
@property (nonatomic) short importedBy;
@property (nonatomic) NSString *codecName;
@property (nonatomic) short videoFrameRate;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *resources;
@property (retain, nonatomic) NSSet *transientModernResources;
@property (retain, nonatomic) NSString *mediaMetadataType;
@property (retain, nonatomic) PLCloudMasterMediaMetadata *mediaMetadata;
@property (retain, nonatomic) PLMomentShare *momentShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) id localID;

+ (id)entityName;
+ (id)listOfSyncedProperties;
+ (id)_originalTypes;
+ (id)insertIntoPhotoLibrary:(id)arg1 withCloudMasterGUID:(id)arg2 inMomentShare:(id)arg3;
+ (id)cloudMasterWithGUID:(id)arg1 inMomentShare:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)cloudMasterWithScopedIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)deleteAllCloudMastersInManagedObjectContext:(id)arg1;
+ (void)resetCloudMastersStateInManagedObjectContext:(id)arg1 hardReset:(_Bool)arg2;
+ (unsigned long long)fullSizeJPEGSourceForUTI:(id)arg1 andImageDimensions:(struct CGSize)arg2;

- (void)awakeFromInsert;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (id)rm_cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;
- (id)allMasterResources;
- (_Bool)hasResourcesOtherThanForAssetUuid:(id)arg1;
- (id)rm_applyResourcesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)rm_applyExpungeableResourceStatesFromCPLMasterChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (id)rm_cloudResourcesForResourceType:(unsigned long long)arg1;
- (id)rm_assetUUIDToCloudResources;
- (id)scopedIdentifier;
- (id)cplFullRecord;
- (id)payloadsForChangedKeys:(id)arg1;
- (void)_promptForNilScopeIdentifierRadar;
- (id)cloudResourceForResourceType:(unsigned long long)arg1 forAssetUuid:(id)arg2;
- (id)assetUUIDToCloudResources;
- (id)cloudResourcesForResourceType:(unsigned long long)arg1;
- (void)applyPropertiesFromCPLMasterChange:(id)arg1;
- (unsigned long long)sizeOfOriginal;
- (_Bool)allOriginalsAreUploaded;
- (_Bool)allOriginalsAreLocallyAvailableForAssetUuid:(id)arg1 useOriginalAltInsteadOfOriginal:(_Bool)arg2;
- (id)cplPropertyRecord;
- (id)cplMasterPropertyChangeForAsset:(id)arg1;
- (id)originalFilenameForResourceType:(unsigned long long)arg1 filePath:(id)arg2;

@end
