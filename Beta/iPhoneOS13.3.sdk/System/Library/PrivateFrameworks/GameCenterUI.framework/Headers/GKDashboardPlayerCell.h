/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewCell.h>

@class GKDashboardPlayerShadowView, GKPlayer, NSLayoutConstraint, UIColor, UILabel, UIView;

@interface GKDashboardPlayerCell : UICollectionViewCell

{
    _Bool _onDarkBackground;
    GKPlayer *_player;
    GKDashboardPlayerShadowView *_playerView;
    NSLayoutConstraint *_playerViewBottomToNameLabelTopConstraint;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIColor *_nameColor;
    UIColor *_statusColor;
    double _playerViewBottomToNameLabelTopConstant;
}

@property (retain, nonatomic) UIColor *nameColor;
@property (retain, nonatomic) UIColor *statusColor;
@property (nonatomic) double playerViewBottomToNameLabelTopConstant;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) _Bool onDarkBackground;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (nonatomic) GKDashboardPlayerShadowView *playerView;
@property (nonatomic) NSLayoutConstraint *playerViewBottomToNameLabelTopConstraint;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) UILabel *statusLabel;

+ (struct CGSize)defaultSize;
+ (double)preferredCollectionHeight;

- (void)dealloc;
- (_Bool)canBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)awakeFromNib;
- (void)setStatusText:(id)arg1;
- (void)setNameText:(id)arg1;
- (void)setStatusWithLastPlayedDate:(id)arg1;
- (void)updateLabelColorForDashboard;

@end
