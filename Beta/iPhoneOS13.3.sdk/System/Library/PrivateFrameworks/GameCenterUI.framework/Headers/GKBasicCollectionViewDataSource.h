/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionViewDataSource.h>

@class NSArray, NSPredicate;

@interface GKBasicCollectionViewDataSource : GKCollectionViewDataSource

{
    NSArray *_items;
    SEL _showAllAction;
    unsigned long long _pageSize;
    NSPredicate *_filterPredicate;
    struct _NSRange _preloadedRange;
}

@property (copy, nonatomic) NSArray *items;
@property (nonatomic) SEL showAllAction;
@property (nonatomic) unsigned long long pageSize;
@property (nonatomic) struct _NSRange preloadedRange;
@property (retain, nonatomic) NSPredicate *filterPredicate;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sectionTitle;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (unsigned long long)countOfItems;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)indexPathsForItem:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)setItemsNoNotify:(id)arg1;
- (void)setItems:(id)arg1 animated:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (id)itemsAtIndexes:(id)arg1;
- (void)insertItems:(id)arg1 atIndexes:(id)arg2;
- (void)replaceItemsAtIndexes:(id)arg1 withItems:(id)arg2;
- (void)preloadImagesForItems:(id)arg1 startingAtIndex:(unsigned long long)arg2 loadBlock:(CDUnknownBlockType)arg3;

@end
