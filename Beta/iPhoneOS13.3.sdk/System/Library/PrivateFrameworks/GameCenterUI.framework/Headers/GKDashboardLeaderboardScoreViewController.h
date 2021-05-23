/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKDashboardLeaderboardScoreDataSource, GKDashboardLeaderboardScoreHeaderView, GKLeaderboard;

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController

{
    GKDashboardLeaderboardScoreHeaderView *_headerView;
    GKLeaderboard *_leaderboard;
    GKDashboardLeaderboardScoreDataSource *_friendDataSource;
    GKDashboardLeaderboardScoreDataSource *_globalDataSource;
    long long _timeScope;
}

@property (retain, nonatomic) GKDashboardLeaderboardScoreHeaderView *headerView;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource;
@property (retain, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource;
@property (nonatomic) long long timeScope;

+ (long long)initialTimeScope;
+ (void)setInitialTimeScope:(long long)arg1;

- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)donePressed:(id)arg1;
- (id)initWithGameRecord:(id)arg1 leaderboard:(id)arg2;
- (void)dataUpdated:(_Bool)arg1 withError:(id)arg2;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (void)timeScopePressed:(id)arg1;
- (_Bool)shouldUseTwoColumnLayoutForSize:(struct CGSize)arg1;
- (void)updateColumnLayoutForSize:(struct CGSize)arg1;

@end
