/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDetailViewController.h>

@class GKDashboardPlayerPhotoView, GKLeaderboard, GKScore, UIButton, UILabel;

@interface GKDashboardLeaderboardDetailViewController : GKDetailViewController

{
    GKDashboardPlayerPhotoView *_playerView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UILabel *_earnedOnLabel;
    UILabel *_infoLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    UIButton *_reportProblemButton;
    GKLeaderboard *_leaderboard;
    GKScore *_score;
}

@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *earnedOnLabel;
@property (nonatomic) UILabel *infoLabel;
@property (nonatomic) UIButton *firstButton;
@property (nonatomic) UIButton *secondButton;
@property (nonatomic) UIButton *reportProblemButton;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score;

- (void)dealloc;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)report:(id)arg1;
- (void)share:(id)arg1;
- (void)challenge:(id)arg1;
- (void)configureForScore;
- (id)initWithScore:(id)arg1 leaderboard:(id)arg2;

@end
