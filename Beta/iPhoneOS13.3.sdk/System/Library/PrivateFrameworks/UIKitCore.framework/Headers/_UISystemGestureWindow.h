/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRootWindow.h>

@class UISystemGestureView;

__attribute__((visibility("hidden")))
@interface _UISystemGestureWindow : _UIRootWindow

{
    UISystemGestureView *_systemGestureView;
}

+ (_Bool)_isSecure;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_extendsScreenSceneLifetime;
- (id)_focusResponder;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_appearsInLoupe;
- (_Bool)_shouldPrepareScreenForWindow;
- (_Bool)_canBecomeKeyWindow;
- (id)_systemGestureView;

@end
