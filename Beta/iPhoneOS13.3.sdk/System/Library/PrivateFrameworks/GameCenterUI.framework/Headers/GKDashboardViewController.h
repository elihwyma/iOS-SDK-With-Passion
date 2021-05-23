/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDashboardCollectionViewController.h>

@class GKChallengeDataSource, GKCollectionMultiDataSource, GKDashboardHeaderView, GKGameRecord, NSArray, NSMutableDictionary, NSString;

@interface GKDashboardViewController : GKDashboardCollectionViewController

{
    _Bool _shouldShowPlayForChallenge;
    _Bool _shouldShowPlayForTurnBasedMatch;
    _Bool _shouldShowQuitForTurnBasedMatch;
    long long _viewState;
    NSString *_leaderboardIdentifier;
    GKGameRecord *_gameRecord;
    GKDashboardHeaderView *_headerView;
    GKCollectionMultiDataSource *_multiDataSource;
    NSMutableDictionary *_viewStateIndexes;
    NSArray *_titles;
    GKChallengeDataSource *_challengeDataSource;
}

@property (retain, nonatomic) GKGameRecord *gameRecord;
@property (retain, nonatomic) GKDashboardHeaderView *headerView;
@property (retain, nonatomic) GKCollectionMultiDataSource *multiDataSource;
@property (retain, nonatomic) NSMutableDictionary *viewStateIndexes;
@property (retain, nonatomic) NSArray *titles;
@property (nonatomic) GKChallengeDataSource *challengeDataSource;
@property (nonatomic) long long viewState;
@property (nonatomic) long long leaderboardTimeScope;
@property (retain, nonatomic) NSString *leaderboardIdentifier;
@property (nonatomic) _Bool shouldShowPlayForChallenge;
@property (nonatomic) _Bool shouldShowPlayForTurnBasedMatch;
@property (nonatomic) _Bool shouldShowQuitForTurnBasedMatch;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)loadData;
- (void)selectedSegmentChanged:(id)arg1;
- (void)setupNoContentView:(id)arg1 withError:(id)arg2;
- (id)initWithGameRecord:(id)arg1;
- (_Bool)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)addDataSource:(id)arg1 withTitle:(id)arg2 forViewState:(long long)arg3;
- (void)selectDataSourceAtIndex:(long long)arg1 updateCollectionView:(_Bool)arg2;
- (void)showLeaderboardVC;
- (void)setupSegmentedControl;

@end
