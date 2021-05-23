/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class GKDashboardPlayerPhotoView, GKPlayer, UICollectionViewCell;

@interface GKDashboardPlayerShadowView : UIView

{
    UICollectionViewCell *_parentCell;
    GKDashboardPlayerPhotoView *_photoView;
}

@property (nonatomic, readonly) UIView *parentView;
@property (nonatomic) GKDashboardPlayerPhotoView *photoView;
@property (retain, nonatomic) GKPlayer *player;
@property (nonatomic) UICollectionViewCell *parentCell;
@property (nonatomic, readonly) _Bool isUsingPlaceholder;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)invalidatePhoto;
- (void)setupPhoto;

@end
