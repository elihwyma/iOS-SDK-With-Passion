/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface GKLeaderboardListHeaderView : UICollectionReusableView

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *subtitleLabel;

+ (double)defaultHeight;

@end
