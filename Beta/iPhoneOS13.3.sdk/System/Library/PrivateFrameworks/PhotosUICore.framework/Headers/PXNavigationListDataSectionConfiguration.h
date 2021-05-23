/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PHCollectionList, PHFetchResult;

@interface PXNavigationListDataSectionConfiguration : NSObject

{
    _Bool _emptyCollectionsHidden;
    _Bool _includeKeyAssetFetches;
    _Bool _includeUserSmartAlbums;
    _Bool _skipKeyAssetFetchesForSmartAlbums;
    _Bool _skipAssetFetches;
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
}

@property (nonatomic, readonly) PHCollectionList *collectionList;
@property (nonatomic, readonly) PHFetchResult *collectionsFetchResult;
@property (nonatomic) _Bool emptyCollectionsHidden;
@property (nonatomic) _Bool includeKeyAssetFetches;
@property (nonatomic) _Bool includeUserSmartAlbums;
@property (nonatomic) _Bool skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) _Bool skipAssetFetches;

+ (id)configurationWithCollectionList:(id)arg1;
+ (id)configurationWithCollectionsFetchResult:(id)arg1;

- (id)description;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithCollectionsFetchResult:(id)arg1;

@end
