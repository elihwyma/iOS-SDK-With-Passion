/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindowScene.h>

@class FBSScene, _UICanvasDefinition;

@interface UICanvas : UIWindowScene

@property (nonatomic, readonly, getter=_scene) FBSScene *scene;
@property (nonatomic, readonly) _UICanvasDefinition *_definition;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, getter=isKeyCanvas) _Bool keyCanvas;

@end
