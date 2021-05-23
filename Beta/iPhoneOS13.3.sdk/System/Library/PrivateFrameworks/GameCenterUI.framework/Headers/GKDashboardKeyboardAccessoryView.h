/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface GKDashboardKeyboardAccessoryView : UIView

{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
}

@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UILabel *subtitleLabel;
@property (nonatomic) UILabel *descriptionLabel;

@end
