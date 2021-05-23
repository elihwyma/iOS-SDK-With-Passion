/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UIButton, UIImageView, UIView;

@interface GKDashboardMultiplayerPickerPlayWithFriendsReusableFooterView : UICollectionReusableView

{
    CDUnknownBlockType _manageInSettingsHandler;
    UIView *_backgroundView;
    UIButton *_manageInSettingsButton;
    UIImageView *_chevronLeftImage;
    UIImageView *_chevronRightImage;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *manageInSettingsButton;
@property (retain, nonatomic) UIImageView *chevronLeftImage;
@property (retain, nonatomic) UIImageView *chevronRightImage;
@property (copy, nonatomic) CDUnknownBlockType manageInSettingsHandler;

- (void)awakeFromNib;
- (void)manageInSettingsTapped:(id)arg1;

@end
