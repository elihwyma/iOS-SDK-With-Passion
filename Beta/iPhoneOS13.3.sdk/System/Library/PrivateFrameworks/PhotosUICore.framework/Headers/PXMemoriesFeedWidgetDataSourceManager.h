/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesFeedDataSourceManagerBase.h>

@interface PXMemoriesFeedWidgetDataSourceManager : PXMemoriesFeedDataSourceManagerBase

{
    _Bool _onlyFavorites;
    unsigned long long _maxCount;
}

@property (nonatomic) unsigned long long maxCount;
@property (nonatomic) _Bool onlyFavorites;

- (id)fetchOptions;
- (void)startGeneratingMemories;
- (void)generateAdditionalEntriesIfPossible;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (unsigned long long)_extendedMaxCount;
- (id)_generateEntryFromMemories:(id)arg1;
- (void)_regenerateMemoriesWithChange:(id)arg1;

@end
