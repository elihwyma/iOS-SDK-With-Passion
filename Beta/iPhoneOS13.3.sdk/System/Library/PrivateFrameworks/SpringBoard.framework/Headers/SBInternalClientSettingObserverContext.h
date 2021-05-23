/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSSceneTransitionContext, FBScene, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings;

@interface SBInternalClientSettingObserverContext : NSObject

{
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings;
@property (retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings;
@property (retain, nonatomic) FBSSceneTransitionContext *transition;

@end
