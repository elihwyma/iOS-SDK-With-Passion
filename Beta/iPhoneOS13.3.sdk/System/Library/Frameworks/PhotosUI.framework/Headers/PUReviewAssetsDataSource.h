/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;

@protocol PUDisplayAssetCollection;

@interface PUReviewAssetsDataSource : PUAssetsDataSource

{
    id <PUDisplayAssetCollection> __reviewAssetCollection;
    NSDictionary *__assetsByIdentifier;
    NSArray *__assetIdentifiers;
}

@property (nonatomic, readonly) id <PUDisplayAssetCollection> _reviewAssetCollection;
@property (nonatomic, readonly) NSDictionary *_assetsByIdentifier;
@property (nonatomic, readonly) NSArray *_assetIdentifiers;

- (_Bool)isEmpty;
- (id)assetAtIndexPath:(id)arg1;
- (id)startingAssetReference;
- (id)indexPathForAssetReference:(id)arg1;
- (id)assetReferenceForAssetReference:(id)arg1;
- (id)assetReferenceAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)assetCollectionAtIndexPath:(id)arg1;
- (id)indexPathForAssetCollection:(id)arg1;
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;
- (id)initWithAssetsByIdentifier:(id)arg1 usingOrdering:(id)arg2 inAssetCollection:(id)arg3;
- (id)indexPathForAssetWithIdentifier:(id)arg1;
- (id)_identifierAtIndexPath:(id)arg1;

@end
