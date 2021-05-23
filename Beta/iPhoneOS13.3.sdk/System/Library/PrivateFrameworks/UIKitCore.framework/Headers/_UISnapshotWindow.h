/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindow.h>

__attribute__((visibility("hidden")))
@interface _UISnapshotWindow : UIWindow

+ (_Bool)_isSystemWindow;

- (double)_adjustedWindowLevelFromLevel:(double)arg1;
- (_Bool)_canActAsKeyWindowForScreen:(id)arg1;
- (void)_setFirstResponder:(id)arg1;
- (_Bool)_canBecomeKeyWindow;
- (_Bool)_alwaysGetsContexts;
- (_Bool)_isSettingFirstResponder;

@end
