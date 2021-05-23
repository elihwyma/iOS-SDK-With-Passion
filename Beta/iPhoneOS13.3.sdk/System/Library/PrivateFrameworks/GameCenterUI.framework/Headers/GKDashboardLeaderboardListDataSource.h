/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, GKLeaderboardSet, NSArray, NSDictionary;

@interface GKDashboardLeaderboardListDataSource : GKCollectionDataSource

{
    NSDictionary *_assetNames;
    GKGameRecord *_gameRecord;
    GKLeaderboardSet *_leaderboardSet;
    NSArray *_leaderboards;
}

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) NSArray *leaderboards;
@property (retain, nonatomic) NSDictionary *assetNames;

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
- (void)removeLeaderboardsWithoutImages;
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;

@end
