/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UITableViewCell.h>

@class GKDashboardPlayerPhotoView, NSLayoutConstraint, UILabel;

@interface GKFriendListCell : UITableViewCell

{
    GKDashboardPlayerPhotoView *_friendPhoto;
    UILabel *_friendName;
    UILabel *_friendLastPlayedGame;
    NSLayoutConstraint *_friendPhotoTopConstraint;
    NSLayoutConstraint *_friendNameTopConstraint;
}

@property (weak) GKDashboardPlayerPhotoView *friendPhoto;
@property (weak) UILabel *friendName;
@property (weak) UILabel *friendLastPlayedGame;
@property (weak) NSLayoutConstraint *friendPhotoTopConstraint;
@property (weak) NSLayoutConstraint *friendNameTopConstraint;

- (void)prepareForReuse;
- (void)awakeFromNib;
- (void)setPlayer:(id)arg1;

@end
