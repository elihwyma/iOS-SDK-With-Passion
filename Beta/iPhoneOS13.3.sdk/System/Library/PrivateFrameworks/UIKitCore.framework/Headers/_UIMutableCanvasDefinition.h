/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICanvasDefinition.h>

@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition

{
    UISceneSession *_sceneSession;
}

@property (retain, nonatomic) Class canvasSubclass;
@property (retain, nonatomic) Class delegateClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)userInfo;
- (id)role;
- (void)setUserInfo:(id)arg1;
- (id)persistentIdentifier;
- (id)configuration;
- (id)scene;
- (id)stateRestorationActivity;
- (id)initWithRepresentation:(id)arg1;
- (id)representedCanvas;
- (long long)systemType;

@end
