/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHCollectionList, PHFetchOptions, PHFetchResult;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject

{
    _Bool _separateSectionsForSmartAndUserCollections;
    _Bool _includePeopleAlbum;
    _Bool _skipKeyAssetFetches;
    _Bool _skipKeyAssetFetchesForSmartAlbums;
    _Bool _skipAssetFetches;
    _Bool _shouldIgnoreLibraryChanges;
    PHFetchResult *_collectionsFetchResult;
    PHCollectionList *_collectionList;
    unsigned long long _assetTypesToInclude;
    unsigned long long _collectionTypesToInclude;
}

@property _Bool shouldIgnoreLibraryChanges;
@property (readonly) PHCollectionList *collectionList;
@property (readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic) _Bool separateSectionsForSmartAndUserCollections;
@property (nonatomic) _Bool includePeopleAlbum;
@property (nonatomic) _Bool skipKeyAssetFetches;
@property (nonatomic) _Bool skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) _Bool skipAssetFetches;
@property (nonatomic) unsigned long long assetTypesToInclude;
@property (nonatomic) unsigned long long collectionTypesToInclude;
@property (readonly) PHFetchOptions *customFetchOptions;

- (id)init;
- (_Bool)isRootFolder;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithCollectionsFetchResult:(id)arg1;
- (id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (id)newConfigurationWithCollectionList:(id)arg1;
- (id)newConfigurationWithCollectionsFetchResult:(id)arg1;
- (void)setIsRootFolder:(_Bool)arg1;
- (id)_newConfigurationWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (id)_generatePredicateForAssetTypesToInclude;

@end
