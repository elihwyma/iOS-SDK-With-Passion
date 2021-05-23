/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWindow.h>

@class UIView, UIViewController;

@interface SBFloatingApplicationLiveContentWindow : SBWindow

{
    UIViewController *_deviceApplicationSceneViewController;
    UIView *_effectiveCoordinateSpace;
}

@property (weak, nonatomic) UIViewController *deviceApplicationSceneViewController;
@property (weak, nonatomic) UIView *effectiveCoordinateSpace;

+ (_Bool)sb_autorotates;

- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (void)setRootViewController:(id)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toCoordinateSpace:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromCoordinateSpace:(id)arg2;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (_Bool)_usesWindowServerHitTesting;
- (_Bool)_canBecomeKeyWindow;
- (id)initWithDebugName:(id)arg1;

@end
