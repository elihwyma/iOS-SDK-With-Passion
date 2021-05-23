/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@protocol AVTViewLayoutInfo;

@protocol AVTAvatarActionsViewControllerLayout

@property (nonatomic, readonly) struct CGSize containerSize;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) long long buttonCount;
@property (nonatomic, readonly) double actionButtonsViewAlpha;
@property (nonatomic, readonly) struct CGRect actionButtonsViewFrame;
@property (nonatomic, readonly) struct CGRect avatarContainerViewFrame;
@property (nonatomic, readonly) struct CGRect userInfoFrame;
@property (nonatomic, readonly) id <AVTViewLayoutInfo> avtViewLayout;

@end
