/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindow.h>

__attribute__((visibility("hidden")))
@interface _UIBannerWindow : UIWindow

+ (_Bool)_isSystemWindow;

- (id)init;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (_Bool)_shouldAdjustSizeClassesAndResizeWindow;
- (_Bool)_shouldForceTraitPropagationThroughHierarchy;

@end
