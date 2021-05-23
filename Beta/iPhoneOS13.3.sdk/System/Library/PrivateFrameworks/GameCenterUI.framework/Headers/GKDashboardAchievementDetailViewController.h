/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDetailViewController.h>

@class GKAchievement, GKAchievementIconView, UIButton, UILabel;

@interface GKDashboardAchievementDetailViewController : GKDetailViewController

{
    GKAchievementIconView *_iconView;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    UILabel *_progressLabel;
    UILabel *_disabledLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
}

@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *descriptionLabel;
@property (nonatomic) UILabel *progressLabel;
@property (nonatomic) UILabel *disabledLabel;
@property (nonatomic) UIButton *firstButton;
@property (nonatomic) UIButton *secondButton;
@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;

- (void)dealloc;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (void)configureForAchievements;
- (void)share:(id)arg1;
- (void)challenge:(id)arg1;
- (id)initWithAchievement:(id)arg1 localAchievement:(id)arg2;

@end
