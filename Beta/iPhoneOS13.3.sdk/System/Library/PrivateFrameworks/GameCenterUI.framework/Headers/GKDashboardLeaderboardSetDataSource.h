/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, NSArray, NSDictionary;

@interface GKDashboardLeaderboardSetDataSource : GKCollectionDataSource

{
    NSDictionary *_leaderboardSetAssetNames;
    NSDictionary *_leaderboardAssetNames;
    GKGameRecord *_gameRecord;
    NSArray *_leaderboardSets;
}

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *leaderboardSets;
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames;
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames;

- (void)dealloc;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)itemForIndexPath:(id)arg1;
- (id)sectionHeaderText;
- (id)initWithGameRecord:(id)arg1;
- (void)removeLeaderboardSetsWithoutImages;

@end
