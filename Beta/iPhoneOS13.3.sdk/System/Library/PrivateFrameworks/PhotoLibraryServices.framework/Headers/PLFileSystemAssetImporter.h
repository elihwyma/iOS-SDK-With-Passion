/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSString, PLPhotoLibrary;

@interface PLFileSystemAssetImporter : NSObject

{
    PLPhotoLibrary *_photoLibrary;
    NSString *_libraryBundlePath;
    NSString *_photoLibraryStoreUUID;
    NSMutableIndexSet *_thumbIndexes;
    _Bool _hasProcessedAnyAssets;
    NSMutableSet *_existingUUIDs;
    NSMutableDictionary *_existingUUIDsByUppercasePath;
    NSMutableDictionary *_existingOIDsByUUID;
    unsigned long long _thumbnailBatchFetchSize;
}

@property (retain, nonatomic) NSMutableSet *existingUUIDs;
@property (retain, nonatomic) NSMutableDictionary *existingUUIDsByUppercasePath;
@property (retain, nonatomic) NSMutableDictionary *existingOIDsByUUID;
@property (nonatomic) unsigned long long thumbnailBatchFetchSize;

- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)libraryBundlePathWithPhotoLibrary:(id)arg1;
- (id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2 isPlaceholder:(_Bool)arg3;
- (id)assetURLisInDatabase:(id)arg1 deferredPreviewURL:(id)arg2;
- (id)addAssetWithURLs:(id)arg1 assetPayload:(id)arg2 forceInsert:(_Bool)arg3 forceUpdate:(_Bool)arg4 fixAddedDate:(_Bool)arg5;
- (void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2;
- (_Bool)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)arg1 hasVideoComplementResource:(_Bool)arg2;
- (_Bool)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 isPlaceholder:(_Bool)arg3 hasVideoComplementResource:(_Bool)arg4;
- (_Bool)_setupUnknownAsset:(id)arg1 withURL:(id)arg2;
- (id)_assetAdjustmentsIfExistsForAsset:(id)arg1;
- (_Bool)_setupAdjustmentsFromAdjustmentFileForAsset:(id)arg1;
- (_Bool)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 unknownType:(_Bool)arg3 isPlaceholder:(_Bool)arg4 hasVideoComplementResource:(_Bool)arg5;
- (_Bool)_setupVideoAsset:(id)arg1 withURL:(id)arg2;
- (void)addAvailableThumbnailIndex:(unsigned long long)arg1;
- (unsigned long long)nextThumbnailIndex;

@end
