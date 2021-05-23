/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@protocol AVTViewLayoutInfo;

@interface AVTAvatarActionsViewControllerSunflowerLayout : NSObject

{
    long long _buttonCount;
    id <AVTViewLayoutInfo> _avtViewLayout;
    struct CGSize _containerSize;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic, readonly) struct CGSize containerSize;
@property (nonatomic, readonly) struct UIEdgeInsets edgeInsets;
@property (nonatomic, readonly) long long buttonCount;
@property (nonatomic, readonly) double actionButtonsViewAlpha;
@property (nonatomic, readonly) struct CGRect actionButtonsViewFrame;
@property (nonatomic, readonly) struct CGRect avatarContainerViewFrame;
@property (nonatomic, readonly) struct CGRect userInfoFrame;
@property (nonatomic, readonly) id <AVTViewLayoutInfo> avtViewLayout;

+ (double)buttonHeight;
+ (double)heightForButtonsViewWithButtonCount:(long long)arg1;

- (struct CGRect)actionButtonsViewFrameForButtonCount:(long long)arg1;
- (id)initWithContainerSize:(struct CGSize)arg1 insets:(struct UIEdgeInsets)arg2 buttonCount:(long long)arg3 avtViewLayoutInfo:(id)arg4;

@end
