/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKSplittingDataSource.h>

@interface GKTurnsDataSource : GKSplittingDataSource

{
    struct UIEdgeInsets _cellMarginInsets;
}

@property (nonatomic) struct UIEdgeInsets cellMarginInsets;

- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCollectionView:(id)arg1;
- (void)configureDataSource;
- (id)filteredItemsForRawItems:(id)arg1;

@end
