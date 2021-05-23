/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIRemoteKeyboardWindow.h>

__attribute__((visibility("hidden")))
@interface UIRemoteKeyboardWindowHosted : UIRemoteKeyboardWindow

+ (_Bool)_isSecure;

- (struct UIEdgeInsets)safeAreaInsets;
- (_Bool)_isHostedInAnotherProcess;
- (_Bool)_isTextEffectsWindowHosting;
- (long long)_orientationForViewTransform;
- (long long)_orientationForRootTransform;
- (long long)_orientationForSceneTransform;

@end
