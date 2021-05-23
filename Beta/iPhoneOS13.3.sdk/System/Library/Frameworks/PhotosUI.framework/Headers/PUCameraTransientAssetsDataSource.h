/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUAssetsDataSource.h>

@class NSArray, NSDictionary;

@protocol PUDisplayAssetCollection;

@interface PUCameraTransientAssetsDataSource : PUAssetsDataSource

{
    id <PUDisplayAssetCollection> __transientAssetCollection;
    NSArray *__assetUUIDs;
    NSDictionary *__assetsByUUID;
    NSDictionary *__representativeAssetsByBurstIdentifier;
}

@property (nonatomic, readonly) id <PUDisplayAssetCollection> _transientAssetCollection;
@property (nonatomic, readonly) NSArray *_assetUUIDs;
@property (nonatomic, readonly) NSDictionary *_assetsByUUID;
@property (nonatomic, readonly) NSDictionary *_representativeAssetsByBurstIdentifier;

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
- (id)initWithUUIDs:(id)arg1 mapping:(id)arg2 representativeMapping:(id)arg3 inAssetCollection:(id)arg4;
- (id)_uuidAtIndexPath:(id)arg1;

@end
