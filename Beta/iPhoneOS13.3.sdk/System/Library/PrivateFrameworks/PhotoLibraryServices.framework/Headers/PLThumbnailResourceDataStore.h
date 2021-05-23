/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLResourceDataStore.h>

@class NSArray, NSDictionary, NSString, PLPhotoLibraryPathManager, PLThumbnailIndexes, PLThumbnailManager;

@interface PLThumbnailResourceDataStore : PLResourceDataStore

{
    NSDictionary *_thumbnailFormatsByTableType;
    NSArray *_thumbnailFormats;
    PLThumbnailManager *_thumbnailManager;
    PLThumbnailIndexes *_thumbnailIndexes;
}

@property (retain, nonatomic) PLThumbnailManager *thumbnailManager;
@property (retain, nonatomic) PLThumbnailIndexes *thumbnailIndexes;
@property (retain, nonatomic) NSArray *thumbnailFormats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;

+ (unsigned int)storeClassID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;
+ (id)supportedRecipes;
+ (_Bool)resourceIsSquare:(id)arg1;

- (id)name;
- (id)descriptionForSubtype:(long long)arg1;
- (id)initWithPathManager:(id)arg1;
- (id)keyFromKeyStruct:(const void *)arg1;
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;
- (id)virtualResourcesForAsset:(id)arg1;
- (_Bool)canStoreExternalResource:(id)arg1;
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;
- (unsigned long long)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)requestRemoteAvailabilityChange:(short)arg1 forResource:(id)arg2 asset:(id)arg3 inContext:(id)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 inContext:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)resourceURLForKey:(id)arg1;
- (void)setThumbnailFormatsByIDs:(id)arg1;
- (id)thumbnailFormatsByTableType;
- (struct CGImage *)newTableThumbImageForKey:(id)arg1;

@end
