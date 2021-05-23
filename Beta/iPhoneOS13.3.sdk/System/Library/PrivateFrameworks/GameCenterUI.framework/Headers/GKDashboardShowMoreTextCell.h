/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <GameCenterUI/GKRectShadowCell.h>

@class UILabel;

@interface GKDashboardShowMoreTextCell : GKRectShadowCell

{
    UILabel *_label;
}

@property (nonatomic) UILabel *label;

+ (struct CGSize)defaultSize;

- (void)awakeFromNib;

@end
