/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIImageView, UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView

{
    UIStatusBarStyleAttributes *_style;
    UIImageView *_glowView;
    _Bool _glowEnabled;
    _Bool _suppressGlow;
}

- (id)style;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2 backgroundColor:(id)arg3;
- (void)setGlowAnimationEnabled:(_Bool)arg1;
- (id)_baseImage;
- (void)_setGlowAnimationEnabled:(_Bool)arg1 waitForNextCycle:(_Bool)arg2;
- (void)_startGlowAnimationWaitForNextCycle:(_Bool)arg1;
- (void)_stopGlowAnimation;
- (_Bool)_styleCanGlow;
- (id)_glowImage;
- (id)_backgroundImageName;
- (void)setSuppressesGlow:(_Bool)arg1;

@end
