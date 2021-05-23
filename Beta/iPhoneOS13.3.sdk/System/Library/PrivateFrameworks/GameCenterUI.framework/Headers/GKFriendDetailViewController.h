/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKDetailViewController.h>

@class GKDashboardPlayerPhotoView, GKPlayer, UILabel;

@interface GKFriendDetailViewController : GKDetailViewController

{
    GKDashboardPlayerPhotoView *_playerView;
    UILabel *_nicknameLabel;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    GKPlayer *_player;
}

@property (nonatomic) GKDashboardPlayerPhotoView *playerView;
@property (nonatomic) UILabel *nicknameLabel;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) GKPlayer *player;

- (void)viewDidLoad;
- (id)initWithPlayer:(id)arg1;
- (void)report:(id)arg1;
- (void)configureView;

@end
