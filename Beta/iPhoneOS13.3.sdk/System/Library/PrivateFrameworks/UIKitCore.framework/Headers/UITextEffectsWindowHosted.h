/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextEffectsWindow.h>

__attribute__((visibility("hidden")))
@interface UITextEffectsWindowHosted : UITextEffectsWindow

- (struct UIEdgeInsets)safeAreaInsets;
- (void)_sceneBoundsDidChange;
- (_Bool)_isFullscreen;
- (_Bool)_isWindowServerHostingManaged;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_isTextEffectsWindowHosting;
- (struct CGRect)actualSceneBounds;
- (_Bool)_isTextEffectsWindowNotificationOwner;
- (struct CGRect)actualSceneBoundsForLandscape:(_Bool)arg1;
- (long long)_orientationForViewTransform;
- (long long)_orientationForRootTransform;
- (long long)_orientationForSceneTransform;

@end
