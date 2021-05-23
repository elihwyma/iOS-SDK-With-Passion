/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, UIButton;

@interface GKFriendListReusableFooterView : UITableViewHeaderFooterView

{
    UIButton *_button;
    NSLayoutConstraint *_topLeadingConstraint;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSLayoutConstraint *topLeadingConstraint;

@end
