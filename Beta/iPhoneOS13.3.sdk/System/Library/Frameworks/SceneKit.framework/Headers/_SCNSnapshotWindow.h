/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <UIKit/UIWindow.h>

__attribute__((visibility("hidden")))
@interface _SCNSnapshotWindow : UIWindow

- (void)dealloc;
- (void)_setFirstResponder:(id)arg1;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (_Bool)_canBecomeKeyWindow;
- (_Bool)_isSettingFirstResponder;
- (struct CGPoint)warpPoint:(struct CGPoint)arg1;
- (id)scnView;
- (struct CGPoint)_warpPoint:(struct CGPoint)arg1 outOfBounds:(_Bool *)arg2;

@end
