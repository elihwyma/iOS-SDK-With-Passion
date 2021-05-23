/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLPhotoLibraryPathManager;

@interface PLResourceDataStore : NSObject

{
    _Atomic unsigned long long _nextLocalAvailabilityRequestID;
    PLPhotoLibraryPathManager *_pathManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;

+ (unsigned int)storeClassID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (_Bool)keyDataIsValid:(id)arg1;
+ (id)supportedRecipes;
+ (_Bool)isMasterThumbRecipeID:(unsigned int)arg1;

- (id)name;
- (id)descriptionForSubtype:(long long)arg1;
- (id)initWithPathManager:(id)arg1;
- (id)keyFromKeyStruct:(const void *)arg1;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;
- (_Bool)canStoreExternalResource:(id)arg1;
- (id)guessUTIForExternalResource:(id)arg1 forAssetKind:(short)arg2 managedObjectContext:(id)arg3;
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cancelLocalAvailabilityChangeRequest:(unsigned long long)arg1;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (_Bool)canStreamResource:(id)arg1;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (unsigned long long)nextLocalAvailabilityRequestID;
- (_Bool)verifyAndFixLocalAvailabilityForResource:(id)arg1 asset:(id)arg2 managedObjectContext:(id)arg3;

@end
