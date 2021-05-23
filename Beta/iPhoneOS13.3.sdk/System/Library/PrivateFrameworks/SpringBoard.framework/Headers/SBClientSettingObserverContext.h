/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class FBSSceneClientSettings, FBSSceneTransitionContext, FBScene, SBDeviceApplicationSceneHandle;

@interface SBClientSettingObserverContext : NSObject

{
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    FBSSceneClientSettings *_oldClientSettings;
    FBSSceneTransitionContext *_transition;
}

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
@property (retain, nonatomic) FBSSceneClientSettings *oldClientSettings;
@property (retain, nonatomic) FBSSceneTransitionContext *transition;

@end
