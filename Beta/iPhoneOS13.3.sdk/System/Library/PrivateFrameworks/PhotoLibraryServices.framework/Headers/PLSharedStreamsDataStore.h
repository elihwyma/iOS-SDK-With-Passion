/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLResourceDataStore.h>

@class NSString, PLPhotoLibraryPathManager;

@interface PLSharedStreamsDataStore : PLResourceDataStore

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;

+ (unsigned int)_masterThumbRecipeID;
+ (unsigned int)storeClassID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)supportedRecipes;

- (id)name;
- (id)descriptionForSubtype:(long long)arg1;
- (id)keyFromKeyStruct:(const void *)arg1;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;
- (_Bool)canStoreExternalResource:(id)arg1;
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (_Bool)canStreamResource:(id)arg1;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)arg1;
- (void)_prepareForDownloadNotification:(id)arg1 atFileURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_utiStringForAsset:(id)arg1 type:(unsigned int)arg2;
- (_Bool)_isDerivativeForSharedStreamsType:(unsigned int)arg1;
- (id)_sharedStreamsExternalResourceForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (short)_localAvailabilityForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;
- (short)_remoteAvailabilityForType:(unsigned int)arg1;
- (unsigned int)_mainResourceTypeForAsset:(id)arg1;
- (id)requiredExternalResourcesForMigratingOrImportingAsset:(id)arg1;

@end
