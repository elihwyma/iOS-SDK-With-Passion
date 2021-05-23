/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindow.h>

@class UIStatusBar;

@interface UIStatusBarWindow : UIWindow

{
    UIStatusBar *_statusBar;
    long long _orientation;
}

+ (_Bool)_isSystemWindow;
+ (struct CGRect)_defaultStatusBarSceneReferenceBoundsForOrientation:(long long)arg1;
+ (struct CGRect)_defaultStatusBarSceneReferenceBounds;
+ (struct CGRect)_convertRect:(struct CGRect)arg1 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)arg2;
+ (struct CGRect)_defaultStatusBarSceneBounds;
+ (struct CGRect)statusBarWindowFrame;

- (long long)orientation;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_isStatusBarWindow;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (void)setOrientation:(long long)arg1 animationParameters:(id)arg2;
- (_Bool)_disableGroupOpacity;
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;
- (void)_didMoveFromScene:(id)arg1 toScene:(id)arg2;
- (_Bool)_shouldForceTraitPropagationThroughHierarchy;
- (struct CGRect)_defaultStatusBarSceneBoundsForOrientation:(long long)arg1;
- (void)_rotate;
- (struct CGRect)statusBarWindowFrame;
- (struct CGRect)_statusBarFrameForOrientation:(long long)arg1;

@end
