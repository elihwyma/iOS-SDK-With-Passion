/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIMoveEvent, UIPencilEvent, UIPhysicalKeyboardEvent, UIPressesEvent, UITouchesEvent, UIWheelEvent, _UIGameControllerEvent;

__attribute__((visibility("hidden")))
@interface _UISceneEventRegistry : NSObject

{
    UIMoveEvent *_moveEvent;
    UITouchesEvent *_touchesEvent;
    UIPressesEvent *_pressesEvent;
    UIWheelEvent *_wheelEvent;
    _UIGameControllerEvent *_gameControllerEvent;
    UIPhysicalKeyboardEvent *_physicalKeyboardEvent;
    UIPencilEvent *_pencilEvent;
}

@property (nonatomic, readonly) UIMoveEvent *moveEvent;
@property (nonatomic, readonly) UITouchesEvent *touchesEvent;
@property (nonatomic, readonly) UIPressesEvent *pressesEvent;
@property (nonatomic, readonly) UIWheelEvent *wheelEvent;
@property (nonatomic, readonly) _UIGameControllerEvent *gameControllerEvent;
@property (nonatomic, readonly) UIPhysicalKeyboardEvent *physicalKeyboardEvent;
@property (nonatomic, readonly) UIPencilEvent *pencilEvent;

- (void)invalidate;
- (void)addMoveEvent:(id)arg1;
- (void)addTouchesEvent:(id)arg1;
- (void)addPressesEvent:(id)arg1;
- (void)addWheelEvent:(id)arg1;
- (void)addGameControllerEvent:(id)arg1;
- (void)addPhysicalKeyboardEvent:(id)arg1;
- (void)addPencilEvent:(id)arg1;

@end
