/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarImageView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFocusableImageView : _UIStatusBarImageView

{
    UIColor *_unfocusedTintColor;
    UIColor *_focusedImageTintColor;
}

@property (retain, nonatomic) UIColor *focusedImageTintColor;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)isUserInteractionEnabled;
- (void)applyStyleAttributes:(id)arg1;

@end
