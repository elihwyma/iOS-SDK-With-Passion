/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLResourceDataStore.h>

@class NSDictionary, NSMutableDictionary, NSString, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLCloudPhotoLibraryManager, PLDeferredPhotoFinalizer, PLPhotoLibraryPathManager, PLPrimaryResourceDataStoreKeyHelper;

@interface PLPrimaryResourceDataStore : PLResourceDataStore

{
    NSMutableDictionary *_inflightCPLDownloadTaskIdentifiersByRequestID;
    NSMutableDictionary *_pendingCPLDownloadShouldRunByRequestID;
    struct os_unfair_lock_s _lock;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
    NSMutableDictionary *_pendingDeferredPhotoFinalizationShouldRunByRequestID;
    struct os_unfair_lock_s _deferredFinalizerLock;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
    unsigned int _masterThumbRecipeID;
    PLPrimaryResourceDataStoreKeyHelper *_mainScopeKeyHelper;
    NSDictionary *_keyHelperByBundleScope;
}

@property (retain, nonatomic) PLPrimaryResourceDataStoreKeyHelper *mainScopeKeyHelper;
@property (retain, nonatomic) NSDictionary *keyHelperByBundleScope;
@property (readonly, getter=_cplManager) PLCloudPhotoLibraryManager *cplManager;
@property (nonatomic) unsigned int masterThumbRecipeID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;

+ (unsigned int)storeClassID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)supportedRecipes;
+ (unsigned int)currentDeviceMasterThumbRecipeID;

- (void)dealloc;
- (id)name;
- (id)descriptionForSubtype:(long long)arg1;
- (id)initWithPathManager:(id)arg1;
- (id)_deferredPhotoFinalizer;
- (id)_imageConversionServiceClient;
- (id)_videoConversionServiceClient;
- (id)keyFromKeyStruct:(const void *)arg1;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;
- (_Bool)canStoreExternalResource:(id)arg1;
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (_Bool)canStreamResource:(id)arg1;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_finalizeDeferredAsset:(id)arg1 forWide:(_Bool)arg2 options:(id)arg3 taskDidBeginHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)_isSystemLibraryStore;
- (void)_downloadCPLResource:(id)arg1 forAsset:(id)arg2 options:(id)arg3 taskDidBeginHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)_pruneResource:(id)arg1 asset:(id)arg2 inContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_makeResourceLocallyAvailable:(id)arg1 asset:(id)arg2 inContext:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_expectedFilePathForMasterThumbnailForAsset:(id)arg1;
- (id)_masterThumbnailVirtualResourceForAsset:(id)arg1;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)arg1 givenFilePath:(id)arg2;
- (id)keyHelperForBundleScope:(unsigned char)arg1;

@end
