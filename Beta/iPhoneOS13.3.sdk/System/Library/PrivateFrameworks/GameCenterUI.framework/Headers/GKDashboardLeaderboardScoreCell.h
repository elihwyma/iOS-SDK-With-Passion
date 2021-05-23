/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKRectShadowCell.h>

@class GKDashboardPlayerPhotoView, GKScore, NSLayoutConstraint, UILabel, UIView;

@interface GKDashboardLeaderboardScoreCell : GKRectShadowCell

{
    GKScore *_score;
    GKDashboardPlayerPhotoView *_playerView;
    NSLayoutConstraint *_playerViewHeightConstraint;
    UILabel *_rankLabel;
    UILabel *_nameLabel;
    UILabel *_scoreLabel;
    UIView *_topLine;
    UIView *_bottomLine;
    UIView *_monogramColorView;
}

@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (retain, nonatomic) NSLayoutConstraint *playerViewHeightConstraint;
@property (nonatomic) UILabel *rankLabel;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) UILabel *scoreLabel;
@property (nonatomic) UIView *topLine;
@property (nonatomic) UIView *bottomLine;
@property (nonatomic) UIView *monogramColorView;
@property (retain, nonatomic) GKScore *score;
@property (nonatomic) _Bool linesVisible;
@property (nonatomic, readonly) UIView *popoverSourceView;

+ (struct CGSize)defaultSize;
+ (id)lowRankNib;
+ (id)highRankNib;

- (void)dealloc;
- (void)awakeFromNib;
- (void)setupForScore:(id)arg1;

@end
