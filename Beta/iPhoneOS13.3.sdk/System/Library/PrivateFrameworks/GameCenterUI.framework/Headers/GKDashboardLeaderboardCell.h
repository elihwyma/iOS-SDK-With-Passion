/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionViewCell.h>

@class GKLeaderboard, GKLeaderboardSet, NSString, UIColor, UIImageView, UILabel, UIView;

@interface GKDashboardLeaderboardCell : UICollectionViewCell

{
    NSString *_bundleIdentifier;
    NSString *_imageName;
    GKLeaderboardSet *_leaderboardSet;
    GKLeaderboard *_leaderboard;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_overlayView;
    UIColor *_titleLabelColor;
}

@property (nonatomic) UIImageView *iconView;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIColor *titleLabelColor;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet;
@property (retain, nonatomic) GKLeaderboard *leaderboard;
@property (nonatomic, readonly) UIView *popoverSourceView;

- (void)dealloc;
- (_Bool)canBecomeFocused;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)awakeFromNib;
- (void)updateImage;
- (void)updateRank;
- (void)updateOverlay;

@end
