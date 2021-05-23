/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUTilingDataSource.h>

@class AVAsset, NSArray, NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PUFilmstripDataSource : PUTilingDataSource

{
    NSMutableDictionary *_assetByIndexPath;
    NSMapTable *_indexPathByAsset;
    AVAsset *_asset;
    long long _numberOfIndexes;
    NSArray *_indicatorInfos;
}

@property (nonatomic, readonly) AVAsset *asset;
@property (nonatomic, readonly) long long numberOfIndexes;
@property (copy, nonatomic) NSArray *indicatorInfos;

- (id)init;
- (id)assetAtIndexPath:(id)arg1;
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;
- (id)initWithAsset:(id)arg1 numberOfIndexes:(long long)arg2 indicatorInfos:(id)arg3;
- (double)_normalizedTimeForIndexPath:(id)arg1;
- (id)indexPathForAsset:(id)arg1;

@end
