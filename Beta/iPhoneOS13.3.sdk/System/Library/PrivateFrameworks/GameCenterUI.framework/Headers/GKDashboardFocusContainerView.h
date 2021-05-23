/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@interface GKDashboardFocusContainerView : UIView

{
    UIView *_focusView;
}

@property (nonatomic) UIView *focusView;

- (id)preferredFocusEnvironments;
- (_Bool)canBecomeFocused;

@end
