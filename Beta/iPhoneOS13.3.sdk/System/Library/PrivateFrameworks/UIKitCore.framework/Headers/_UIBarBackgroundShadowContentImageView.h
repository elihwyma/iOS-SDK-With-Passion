/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVisualEffectImageView.h>

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundShadowContentImageView : _UIVisualEffectImageView

{
    _Bool _applyTintColorToBackgroundColor;
}

@property (nonatomic) _Bool applyTintColorToBackgroundColor;

- (void)tintColorDidChange;
- (void)_applyTintColorToBackgroundIfNecessary;

@end
