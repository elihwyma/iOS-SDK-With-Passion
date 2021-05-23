/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewDataSource.h>

@class GKBasicCollectionViewDataSource, NSMutableDictionary;

@interface GKSplittingDataSource : GKCollectionViewDataSource

{
    GKBasicCollectionViewDataSource *_underlyingDataSource;
    NSMutableDictionary *_sectionToSectionInfo;
}

@property (retain, nonatomic) NSMutableDictionary *sectionToSectionInfo;
@property (retain, nonatomic) GKBasicCollectionViewDataSource *underlyingDataSource;
@property (nonatomic, readonly) long long sectionCount;

- (id)init;
- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)titleForSection:(long long)arg1;
- (void)removeSection:(long long)arg1;
- (void)removeAllSections;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)indexPathsForItem:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)configureDataSource;
- (void)addSectionWithTitle:(id)arg1 sortDescriptors:(id)arg2;
- (void)setFilterPredicate:(id)arg1 forSection:(long long)arg2;
- (id)sectionInfoForSection:(long long)arg1;
- (id)itemsForSection:(long long)arg1;
- (id)filteredItemsForRawItems:(id)arg1;
- (void)refreshAdditionalInfoForDataType:(unsigned int)arg1 updateNotifier:(id)arg2;
- (void)setItems:(id)arg1 forSection:(long long)arg2;
- (void)willUpdateSectionsWithItems:(id)arg1;
- (void)setSortDescriptors:(id)arg1 forSection:(long long)arg2;

@end
