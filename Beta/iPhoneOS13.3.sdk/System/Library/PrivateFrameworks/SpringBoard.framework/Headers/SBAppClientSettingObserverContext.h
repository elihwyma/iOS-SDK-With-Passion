/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSSceneTransitionContext, FBScene, SBApplication, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettings, UIApplicationSceneSettings;

@interface SBAppClientSettingObserverContext : NSObject

{
    FBScene *_scene;
    SBApplication *_app;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    UIApplicationSceneSettings *_settings;
    UIApplicationSceneClientSettings *_oldClientSettings;
    UIApplicationSceneClientSettings *_updatedClientSettings;
    FBSSceneTransitionContext *_transition;
}

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) SBApplication *app;
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (retain, nonatomic) UIApplicationSceneSettings *settings;
@property (retain, nonatomic) UIApplicationSceneClientSettings *oldClientSettings;
@property (retain, nonatomic) UIApplicationSceneClientSettings *updatedClientSettings;
@property (retain, nonatomic) FBSSceneTransitionContext *transition;

@end
