/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionDataSource.h>

@class NSArray;

@interface GKDashboardTurnDataSource : GKCollectionDataSource

{
    _Bool _shouldShowPlay;
    _Bool _shouldShowQuit;
    NSArray *_matches;
}

@property (retain, nonatomic) NSArray *matches;
@property (nonatomic) _Bool shouldShowPlay;
@property (nonatomic) _Bool shouldShowQuit;

- (id)init;
- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)itemForIndexPath:(id)arg1;
- (id)sectionHeaderText;

@end
