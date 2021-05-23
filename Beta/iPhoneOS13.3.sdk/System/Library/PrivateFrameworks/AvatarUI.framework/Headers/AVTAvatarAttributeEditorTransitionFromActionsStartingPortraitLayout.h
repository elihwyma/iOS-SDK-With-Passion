/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/AVTAvatarAttributeEditorLayout.h>

@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout : AVTAvatarAttributeEditorLayout

{
    double _avatarContainerAlpha;
    double _attributesContentViewExtraHeight;
    struct CGRect _avatarContainerFrame;
}

@property (nonatomic, readonly) double attributesContentViewExtraHeight;

- (id)backgroundColor;
- (struct UIEdgeInsets)attributesContentViewInsets;
- (struct CGRect)groupDialContainerFrame;
- (struct CGRect)avatarContainerFrame;
- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 screenScale:(double)arg3 avatarViewContainerFrame:(struct CGRect)arg4 attributesContentViewFrameExtraHeight:(double)arg5 avatarViewAlpha:(double)arg6;
- (unsigned long long)supportedLayoutOrientation;
- (struct CGRect)attributesContentViewFrame;
- (struct CGRect)userInfoFrame;
- (double)headerMaskingViewAlpha;
- (struct CGRect)headerMaskingViewFrame;
- (double)verticalRuleAlpha;
- (struct CGRect)verticalRuleFrame;
- (struct UIEdgeInsets)attributesContentViewScrollIndicatorInsets;
- (double)avatarContainerAlpha;

@end
