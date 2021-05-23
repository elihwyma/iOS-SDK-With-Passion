/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSArray, NSString, PXForYouSuggestionAssetCollection;

@interface PXForYouSuggestionsAssetsDataSource : PXAssetsDataSource

{
    PXForYouSuggestionAssetCollection *_collection;
    NSArray *_assets;
    NSString *_collectionTitle;
}

@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSString *collectionTitle;

+ (id)new;

- (id)init;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (id)initWithDisplayAssets:(id)arg1 collectionTitle:(id)arg2;
- (struct PXSimpleIndexPath)indexPathForAssetReference:(id)arg1;

@end
