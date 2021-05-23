/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKRectShadowCell.h>

@class GKAchievement, GKAchievementIconView, GKResizingLabel, UILabel, UIView;

@interface GKDashboardAchievementCell : GKRectShadowCell

{
    GKAchievement *_achievement;
    GKAchievement *_localAchievement;
    GKAchievementIconView *_iconView;
    GKResizingLabel *_titleLabel;
    GKResizingLabel *_descriptionLabel;
    UILabel *_pointsLabel;
    UILabel *_pointsTextLabel;
}

@property (retain, nonatomic) GKAchievement *achievement;
@property (retain, nonatomic) GKAchievement *localAchievement;
@property (nonatomic) GKAchievementIconView *iconView;
@property (nonatomic) GKResizingLabel *titleLabel;
@property (nonatomic) GKResizingLabel *descriptionLabel;
@property (nonatomic) UILabel *pointsLabel;
@property (nonatomic) UILabel *pointsTextLabel;
@property (nonatomic, readonly) UIView *popoverSourceView;

- (void)dealloc;
- (void)setupForAchievement:(id)arg1 localAchievement:(id)arg2;

@end
