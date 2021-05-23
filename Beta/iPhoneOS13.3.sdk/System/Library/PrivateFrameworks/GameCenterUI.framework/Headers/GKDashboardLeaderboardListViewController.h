/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKLeaderboardSet;

@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController

{
    GKLeaderboardSet *_leaderboardSet;
}

@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;

- (void)dealloc;
- (void)viewDidLoad;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithGameRecord:(id)arg1 leaderboardSet:(id)arg2;

@end
