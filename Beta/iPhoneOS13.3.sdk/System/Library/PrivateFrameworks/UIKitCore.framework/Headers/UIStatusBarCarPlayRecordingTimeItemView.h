/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarCarPlayTimeItemView.h>

@class _UIStatusBarRoundedCornerView;

__attribute__((visibility("hidden")))
@interface UIStatusBarCarPlayRecordingTimeItemView : UIStatusBarCarPlayTimeItemView

{
    _UIStatusBarRoundedCornerView *_pillView;
}

- (long long)textStyle;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (long long)buttonType;
- (_Bool)showsTouchWhenHighlighted;
- (_Bool)allowsUserInteraction;
- (double)extraRightPadding;
- (void)_updatePillFrame;
- (struct CGRect)_pillFrame;
- (void)movedToSuperview:(id)arg1;
- (_Bool)usesAdvancedActions;

@end
