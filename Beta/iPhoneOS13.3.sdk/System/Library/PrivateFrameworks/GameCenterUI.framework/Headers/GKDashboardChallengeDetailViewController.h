/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDetailViewController.h>

@class GKAchievementIconView, GKChallenge, GKPlayerWithSpeechBalloonView, NSLayoutConstraint, UIButton, UILabel;

@interface GKDashboardChallengeDetailViewController : GKDetailViewController

{
    _Bool _shouldShowPlay;
    id _delegate;
    GKChallenge *_challenge;
    GKAchievementIconView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_fromLabel;
    UIButton *_playButton;
    UIButton *_declineButton;
    GKPlayerWithSpeechBalloonView *_playerSpeechView;
    NSLayoutConstraint *_topConstraint;
    double _topMargin;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_speechToFromConstraint;
}

@property (retain, nonatomic) GKChallenge *challenge;
@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *fromLabel;
@property (nonatomic) UIButton *playButton;
@property (nonatomic) UIButton *declineButton;
@property (nonatomic) GKPlayerWithSpeechBalloonView *playerSpeechView;
@property (nonatomic) NSLayoutConstraint *topConstraint;
@property (nonatomic) double topMargin;
@property (nonatomic) NSLayoutConstraint *iconHeightConstraint;
@property (nonatomic) NSLayoutConstraint *speechToFromConstraint;
@property (nonatomic) id delegate;
@property (nonatomic) _Bool shouldShowPlay;

- (void)dealloc;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)play:(id)arg1;
- (id)initWithChallenge:(id)arg1;
- (void)configureForChallenge;
- (void)updateLeaderboardImage;
- (void)decline:(id)arg1;
- (void)challengeOK:(id)arg1;

@end
