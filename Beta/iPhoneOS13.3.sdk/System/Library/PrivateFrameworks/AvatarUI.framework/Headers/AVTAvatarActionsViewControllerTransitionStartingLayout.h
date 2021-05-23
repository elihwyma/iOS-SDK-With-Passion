/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTAvatarActionsViewControllerLayout.h>

@interface AVTAvatarActionsViewControllerTransitionStartingLayout : AVTAvatarActionsViewControllerLayout

{
    struct CGRect _avatarContainerViewFrame;
}

- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 buttonCount:(long long)arg3 avtViewLayoutInfo:(id)arg4 startingAvatarViewFrame:(struct CGRect)arg5;
- (double)actionButtonsViewAlpha;
- (struct CGRect)avatarContainerViewFrame;

@end
