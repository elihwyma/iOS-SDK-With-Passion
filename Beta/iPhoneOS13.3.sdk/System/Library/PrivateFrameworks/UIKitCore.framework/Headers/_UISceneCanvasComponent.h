/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIScene;

@protocol _UICanvasComponentProviding;

__attribute__((visibility("hidden")))
@interface _UISceneCanvasComponent : NSObject

{
    Class canvasComponentClass;
    id <_UICanvasComponentProviding> _canvasComponent;
}

@property (nonatomic, readonly) id <_UICanvasComponentProviding> canvasComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (_Bool)respondsToSelector:(SEL)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)_actionHandlersForScene:(id)arg1;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_sceneWillInvalidate:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)initWithCanvasComponent:(id)arg1;

@end
