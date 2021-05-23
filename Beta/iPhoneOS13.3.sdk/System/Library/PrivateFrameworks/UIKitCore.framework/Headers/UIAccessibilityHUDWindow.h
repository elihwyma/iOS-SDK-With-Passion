/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

__attribute__((visibility("hidden")))
@interface UIAccessibilityHUDWindow : UIApplicationRotationFollowingWindow

+ (id)sharedWindow;
+ (void)createSharedWindowWithScene:(id)arg1;
+ (void)removeSharedWindow;

- (double)_adjustedWindowLevelFromLevel:(double)arg1;

@end
