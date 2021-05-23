/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKGameRecord, GKLeaderboard, NSArray, UIFont;

@interface GKDashboardLeaderboardScoreDataSource : GKCollectionDataSource

{
    _Bool _showingMoreScores;
    _Bool _forceInitialShowMore;
    GKLeaderboard *_leaderboard;
    id _timeScopeTarget;
    SEL _timeScopeAction;
    GKGameRecord *_gameRecord;
    NSArray *_scores;
    long long _visibleItemCount;
}

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) NSArray *scores;
@property (nonatomic) long long visibleItemCount;
@property (nonatomic, readonly) _Bool needsShowcaseCell;
@property (nonatomic, readonly) _Bool needsShowMoreCell;
@property (nonatomic, readonly) UIFont *sectionHeaderFont;
@property (nonatomic, getter=isShowingMoreScores) _Bool showingMoreScores;
@property (nonatomic) _Bool forceInitialShowMore;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (nonatomic) long long playerScope;
@property (nonatomic) long long timeScope;
@property (nonatomic) id timeScopeTarget;
@property (nonatomic) SEL timeScopeAction;

- (void)dealloc;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)itemCount;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (double)preferredCollectionHeight;
- (void)setupCollectionView:(id)arg1;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)itemForIndexPath:(id)arg1;
- (id)sectionHeaderText;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;
- (_Bool)hasFriendsButton;
- (void)revealMoreItemsInCollectionView:(id)arg1 section:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isShowcaseIndexPath:(id)arg1;
- (_Bool)isShowMoreIndexPath:(id)arg1;
- (void)sectionHeaderButtonPressed:(id)arg1;
- (void)showMoreInCollectionView:(id)arg1 section:(long long)arg2;

@end
