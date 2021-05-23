/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBar_Base.h>

__attribute__((visibility("hidden")))
@interface UIStatusBar_Placeholder : UIStatusBar_Base

+ (double)_heightForStyle:(long long)arg1 orientation:(long long)arg2 forStatusBarFrame:(_Bool)arg3;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (long long)currentStyle;
- (double)defaultDoubleHeight;
- (id)_initWithFrame:(struct CGRect)arg1 showForegroundView:(_Bool)arg2 wantsServer:(_Bool)arg3 inProcessStateProvider:(id)arg4;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(long long)arg1 animationParameters:(id)arg2;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)_setHidden:(_Bool)arg1 animationParameters:(id)arg2;
- (void)_requestStyle:(long long)arg1 partStyles:(id)arg2 legibilityStyle:(long long)arg3 foregroundColor:(id)arg4 animationParameters:(id)arg5 forced:(_Bool)arg6;

@end
